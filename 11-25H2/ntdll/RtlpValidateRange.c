/*
 * XREFs of RtlpValidateRange @ 0x18009AF1C
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x180099670 (RtlpValidateRemoteDebugInformation.c)
 * Callees:
 *     RtlSetBits @ 0x180025530 (RtlSetBits.c)
 */

char __fastcall RtlpValidateRange(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v5; // rdx
  ULONG v6; // r10d
  bool v7; // al
  unsigned int *Buffer; // rcx
  unsigned int *v10; // rdx
  unsigned int v11; // edi
  unsigned int *v12; // rsi
  bool v13; // zf
  bool i; // zf
  int v15; // eax

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  if ( (unsigned int)(a3 - a1) >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    if ( BitMapHeader->SizeOfBitMap - v6 < (unsigned int)a4 )
      return 0;
    Buffer = BitMapHeader->Buffer;
    v10 = &Buffer[(unsigned __int64)v6 >> 5];
    v11 = *v10;
    v12 = &Buffer[(unsigned __int64)(v6 + (_DWORD)a4 - 1) >> 5];
    if ( v10 != v12 )
    {
      for ( i = (v11 & (-1 << v6)) == 0; i; i = v15 == 0 )
      {
        v15 = *++v10;
        if ( v10 == v12 )
        {
          v13 = (v15 & (0xFFFFFFFF >> ~(v6 + a4 - 1))) == 0;
          goto LABEL_16;
        }
      }
      return 0;
    }
    v13 = (v11 & (0xFFFFFFFF >> (32 - a4) << v6)) == 0;
LABEL_16:
    v7 = v13;
  }
  else
  {
    if ( (_DWORD)a4 != 1 )
      return 0;
    v7 = !_bittest((const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)v6 >> 5], v6 & 0x1F);
  }
  if ( v7 )
  {
    RtlSetBits(BitMapHeader, v6, a4);
    return 1;
  }
  return 0;
}
