/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x180120918
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x18014B09C (RtlpMuiRegResizeStringPool.c)
 */

unsigned __int16 *__fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *BaseAddress, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  int v7; // r9d
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax

  v5 = BaseAddress;
  if ( BaseAddress )
  {
    v6 = BaseAddress[5];
    v7 = 16;
    v8 = BaseAddress[2];
    v9 = BaseAddress[3];
    v10 = BaseAddress[4];
    v11 = v9 + 1;
    if ( a3 >= 0 )
      v7 = a3;
    v12 = v10;
    v13 = v6 + v7;
    v14 = v8;
    if ( v11 >= v8 )
      v14 = v11;
    if ( v13 >= v10 )
      v12 = v13;
    if ( a4 || v14 != v8 || v12 != v10 )
      return (unsigned __int16 *)RtlpMuiRegResizeStringPool(v5);
  }
  return v5;
}
