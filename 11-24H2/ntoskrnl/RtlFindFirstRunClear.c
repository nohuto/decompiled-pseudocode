/*
 * XREFs of RtlFindFirstRunClear @ 0x140454E70
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140B5641C (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v3; // r8d
  unsigned int *Buffer; // rbx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned __int64 v8; // rdi
  unsigned int v9; // r11d
  unsigned int *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // r9d
  unsigned __int64 i; // rax
  unsigned int *v14; // rax
  unsigned int v15; // r8d

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    Buffer = BitMapHeader->Buffer;
    v6 = Buffer;
    v7 = *Buffer;
    v8 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    while ( 1 )
    {
      v9 = ~v7;
      if ( v9 )
        break;
      v10 = v6 + 1;
      v6 = v10;
      if ( (unsigned __int64)v10 > v8 )
        goto LABEL_16;
      v7 = *v10;
    }
    _BitScanForward64((unsigned __int64 *)&v11, v9);
    v12 = v11 + 32 * (v6 - Buffer);
    if ( v12 > SizeOfBitMap )
    {
LABEL_16:
      v12 = SizeOfBitMap;
      goto LABEL_15;
    }
    for ( i = ~(v9 | ((1 << v11) - 1)); ; i = *v14 )
    {
      if ( (_DWORD)i )
      {
        _BitScanForward64(&i, i);
        goto LABEL_12;
      }
      v14 = v6 + 1;
      if ( (unsigned __int64)(v6 + 1) > v8 )
        break;
      ++v6;
    }
    LODWORD(i) = 32;
LABEL_12:
    v15 = SizeOfBitMap;
    if ( 32 * (unsigned int)(v6 - Buffer) + (unsigned int)i <= SizeOfBitMap )
      v15 = 32 * (v6 - Buffer) + i;
    v3 = v15 - v12;
  }
  else
  {
    v12 = 0;
  }
LABEL_15:
  *StartingIndex = v12;
  return v3;
}
