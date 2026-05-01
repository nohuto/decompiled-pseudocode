/*
 * XREFs of SdbpValidateRootTagSizes @ 0x180094600
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1800940CC (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1800944EC (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x180094234 (SdbpReadMappedData.c)
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
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int16 v13; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+48h] BYREF
  int v15; // [rsp+80h] [rbp+50h]

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 2608) & 1;
  v14 = 0;
  v15 = v2;
  v4 = 12LL;
  v13 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v4 <= v5 )
      return 3221225700LL;
    if ( v4 == *(_DWORD *)(a1 + 20) )
      return 0LL;
    v5 = v4;
    if ( !(unsigned int)SdbpReadMappedData(a1, v4, &v13, 2u) )
      break;
    if ( v13 <= 0x1000u )
    {
      if ( !v8 || !v7 )
        return (unsigned int)-1073741596;
      return v1;
    }
    v8 |= v13 == 28673;
    v9 = v4 + 2;
    v7 |= v13 == 30721;
    v10 = v13 & 0xF000;
    switch ( v10 )
    {
      case 4096:
        v11 = 0LL;
        v14 = 0;
LABEL_23:
        if ( (unsigned int)v11 >= 0xFFFFFFF )
          return 3221225700LL;
        goto LABEL_24;
      case 8192:
        v11 = 1LL;
        goto LABEL_18;
      case 12288:
        v11 = 2LL;
        goto LABEL_18;
    }
    if ( v10 != 0x4000 )
    {
      if ( v10 == 20480 )
      {
        v11 = 8LL;
        goto LABEL_18;
      }
      if ( v10 != 24576 )
      {
        if ( ((v10 - 28672) & 0xFFFFCFFF) != 0 || v10 == 40960 )
        {
          if ( !v8 || !v7 )
          {
            AslLogCallPrintf(1LL);
            return 3221225700LL;
          }
          goto LABEL_39;
        }
        if ( v9 + 3 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
          return 3221225503LL;
        if ( !(unsigned int)SdbpReadMappedData(a1, v9, &v14, 4u) )
          return 3221225816LL;
        v11 = v14;
        v9 += 4LL;
        goto LABEL_23;
      }
    }
    v11 = 4LL;
LABEL_18:
    v14 = v11;
LABEL_24:
    if ( !v15 && (v11 & 1) != 0 )
    {
      v11 = (unsigned int)(v11 + 1);
      v14 = v11;
    }
    v4 = v11 + v9;
    if ( ++v6 > 256 )
      return 3221225700LL;
  }
  if ( !v8 || !v7 )
    return 3221225816LL;
LABEL_39:
  *(_DWORD *)(a1 + 20) = v5;
  return 0LL;
}
