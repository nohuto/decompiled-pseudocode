/*
 * XREFs of IoctlQueryProtocolInfoProcess @ 0x140001DD0
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     QueryProtocolInfoLogPageData @ 0x140011650 (QueryProtocolInfoLogPageData.c)
 *     QueryProtocolInfoFeatureData @ 0x140025744 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 */

__int64 __fastcall IoctlQueryProtocolInfoProcess(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r8
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_DWORD **)(a2 + 64);
    v4 = 60LL;
  }
  else
  {
    v3 = *(_DWORD **)(a2 + 24);
    v4 = 16LL;
  }
  v5 = *(unsigned int *)(a2 + v4);
  if ( (unsigned int)v5 < 0x4C )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  v7 = (unsigned int)v3[13];
  v8 = (unsigned int)v3[14];
  if ( v5 < v8 + v7 + 36 )
    goto LABEL_17;
  if ( (!(_DWORD)v7 || (((_BYTE)v7 + 36) & 7) == 0) && v3[9] == 3 )
  {
    v9 = v3[10];
    if ( v9 )
    {
      if ( v8 + 36 > v5 )
        goto LABEL_17;
      v10 = v5 - (v8 + 36);
      if ( (_DWORD)v8 )
      {
        if ( v7 < v10 )
          goto LABEL_17;
      }
      if ( v9 == 4 || v9 == 5 )
      {
        if ( v10 < 0x40 )
        {
          result = 3238002694LL;
          *(_BYTE *)(a2 + 3) = 21;
          return result;
        }
      }
      else if ( v10 < 0x28 )
      {
LABEL_17:
        result = 3238002694LL;
        *(_BYTE *)(a2 + 3) = 21;
        return result;
      }
      v11 = v9 - 1;
      if ( !v11 )
        return QueryProtocolInfoIdentifyData(a1);
      v12 = v11 - 1;
      if ( !v12 )
        return QueryProtocolInfoLogPageData(a1);
      v13 = v12 - 1;
      if ( !v13 )
        return QueryProtocolInfoFeatureData(a1);
      v14 = v13 - 1;
      if ( !v14 )
        return QueryProtocolInfoLogPageData(a1);
      if ( v14 == 1 )
        return QueryProtocolInfoFeatureData(a1);
    }
  }
  *(_BYTE *)(a2 + 3) = 6;
  return 3238002694LL;
}
