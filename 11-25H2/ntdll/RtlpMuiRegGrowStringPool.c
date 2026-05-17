/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x180120918
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x18014B09C (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v7; // r9d
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax

  v5 = a1;
  if ( a1 )
  {
    v6 = a1[5];
    v7 = 16;
    v8 = a1[2];
    v9 = a1[3];
    v10 = a1[4];
    v11 = v9 + 1;
    if ( a3 >= 0 )
      v7 = a3;
    v12 = (unsigned int)v10;
    v13 = (unsigned int)(v6 + v7);
    v14 = v8;
    if ( v11 >= v8 )
      v14 = v11;
    if ( (int)v13 >= v10 )
      v12 = (unsigned int)v13;
    if ( a4 || v14 != v8 || (_DWORD)v12 != v10 )
    {
      LOBYTE(v13) = a4;
      return RtlpMuiRegResizeStringPool(v5, (unsigned __int16)v14, v12, v13);
    }
  }
  return (__int64)v5;
}
