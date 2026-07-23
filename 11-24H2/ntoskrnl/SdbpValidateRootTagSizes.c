/*
 * XREFs of SdbpValidateRootTagSizes @ 0x1408027B0
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140943708 (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8F10 (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140947C10 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateRootTagSizes(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // rdi
  unsigned int v5; // r14d
  int v6; // r13d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-10h]
  __int64 v14; // [rsp+28h] [rbp-8h]
  __int64 savedregs; // [rsp+30h] [rbp+0h]
  unsigned __int16 v16; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+48h] BYREF
  int v18; // [rsp+80h] [rbp+50h]

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 2608) & 1;
  v17 = 0;
  v18 = v2;
  v4 = 12LL;
  v16 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v6 > 256 || v4 <= v5 )
      return 3221225700LL;
    if ( v4 == *(_DWORD *)(a1 + 20) )
      return 0LL;
    v5 = v4;
    if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)v4, &v16, 2LL, v13, v14, savedregs) )
      break;
    if ( v16 <= 0x1000u )
    {
      if ( !v8 || !v7 )
        return (unsigned int)-1073741596;
      return v1;
    }
    v8 |= v16 == 28673;
    v9 = v4 + 2;
    v7 |= v16 == 30721;
    v10 = v16 & 0xF000;
    switch ( v10 )
    {
      case 4096:
        v11 = 0LL;
        v17 = 0;
        break;
      case 8192:
        v11 = 1LL;
        goto LABEL_20;
      case 12288:
        v11 = 2LL;
        goto LABEL_20;
      case 16384:
        goto LABEL_19;
      case 20480:
        v11 = 8LL;
        goto LABEL_20;
      case 24576:
LABEL_19:
        v11 = 4LL;
LABEL_20:
        v17 = v11;
        goto LABEL_26;
      case 28672:
      case 32768:
      case 36864:
        if ( v9 + 3 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
          return 3221225503LL;
        if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)v9, &v17, 4LL, v13, v14, savedregs) )
          return 3221225816LL;
        v11 = v17;
        v9 += 4LL;
        break;
      default:
        if ( !v8 || !v7 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpValidateRootTagSizes",
            2312,
            (unsigned int)"Unknown root TAG_TYPE encountered (corrupt SDB): 0x%X");
          return 3221225700LL;
        }
        goto LABEL_41;
    }
    if ( (unsigned int)v11 >= 0xFFFFFFF )
      return 3221225700LL;
LABEL_26:
    if ( !v18 && (v11 & 1) != 0 )
    {
      v11 = (unsigned int)(v11 + 1);
      v17 = v11;
    }
    v4 = v11 + v9;
    ++v6;
  }
  if ( !v8 || !v7 )
    return 3221225816LL;
LABEL_41:
  *(_DWORD *)(a1 + 20) = v5;
  return 0LL;
}
