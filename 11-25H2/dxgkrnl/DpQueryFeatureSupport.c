/*
 * XREFs of DpQueryFeatureSupport @ 0x14022E850
 * Callers:
 *     DpIsFeatureEnabled @ 0x14022E7B0 (DpIsFeatureEnabled.c)
 * Callees:
 *     DpiIsFeatureEnabled @ 0x140247234 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpQueryFeatureSupport(__int64 *a1)
{
  __int64 v1; // r10
  _DWORD *v3; // rdx
  int v4; // r8d
  unsigned int IsFeatureEnabled; // ebx
  __int64 v6; // r9
  int v7; // r8d
  unsigned int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  bool v14; // zf
  int v15; // r8d
  unsigned int v16; // ecx
  bool v17; // zf
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v19 = 0;
  v3 = *(_DWORD **)(v1 + 64);
  *((_BYTE *)a1 + 16) = 0;
  if ( !v3 || v3[4] != 1953656900 || v3[5] != 2 )
  {
    IsFeatureEnabled = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 959;
    return IsFeatureEnabled;
  }
  v4 = *((_DWORD *)a1 + 3);
  if ( v4 )
  {
    v6 = *((int *)a1 + 2);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
      {
        if ( (_DWORD)v6 == 2 )
        {
          v3[1462] |= 0x1000000u;
          goto LABEL_48;
        }
        if ( (_DWORD)v6 == 3 )
        {
LABEL_48:
          IsFeatureEnabled = DpiIsFeatureEnabled(v1, *((unsigned int *)a1 + 2), 0LL, &v19);
          *((_BYTE *)a1 + 16) = BYTE2(v19) & 1;
          return IsFeatureEnabled;
        }
        if ( (_DWORD)v6 != 4 )
        {
          if ( (_DWORD)v6 != 5 )
          {
            IsFeatureEnabled = -1073741811;
            WdLogSingleEntry1(3LL, v6);
            WdLogGlobalForLineNumber = 1153;
            return IsFeatureEnabled;
          }
          goto LABEL_48;
        }
        v7 = v3[1462] ^ (v3[1462] ^ (v4 << 25)) & 0x6000000;
        v3[1462] = v7;
        v8 = v7;
        if ( byte_14015DD7D && (v7 & 0x6000000) == 0x2000000 )
        {
          v8 = v7 & 0xF9FFFFFF | 0x4000000;
          v3[1462] = v8;
        }
        if ( ((v8 >> 25) & 3) == 1 )
          goto LABEL_48;
        if ( ((v8 >> 25) & 3) == 2 )
        {
          if ( dword_14015DD78 == 2 )
          {
LABEL_20:
            v10 = v8 | 0x8000000;
LABEL_47:
            v3[1462] = v10;
            goto LABEL_48;
          }
          v9 = dword_14015DD78 == 0;
        }
        else
        {
          v9 = ((v8 >> 25) & 3) == 3;
        }
        if ( !v9 )
          goto LABEL_48;
        goto LABEL_20;
      }
      v11 = v3[1462] ^ (v3[1462] ^ (v4 << 18)) & 0xC0000;
      v3[1462] = v11;
      v12 = v11;
      if ( byte_14015DD7D && (v11 & 0xC0000) == 0x40000 )
      {
        v12 = v11 & 0xFFF3FFFF | 0x80000;
        v3[1462] = v12;
      }
      v13 = v12;
      if ( ((v12 >> 18) & 3) != 1 )
      {
        if ( ((v12 >> 18) & 3) == 2 )
        {
          if ( dword_14015DD78 == 2 )
          {
LABEL_33:
            v13 = v12 | 0x100000;
            v3[1462] = v12 | 0x100000;
            goto LABEL_34;
          }
          v14 = dword_14015DD78 == 0;
        }
        else
        {
          v14 = ((v12 >> 18) & 3) == 3;
        }
        if ( v14 )
          goto LABEL_33;
      }
LABEL_34:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL) < 0x10000u && *((_DWORD *)a1 + 3) != 1 )
        v3[1462] = v13 & 0xFFEFFFFF;
      goto LABEL_48;
    }
    v15 = v3[1462] ^ (v3[1462] ^ (v4 << 15)) & 0x18000;
    v3[1462] = v15;
    v16 = v15;
    if ( byte_14015DD7D && (v15 & 0x18000) == 0x8000 )
    {
      v16 = v15 & 0xFFFE7FFF | 0x10000;
      v3[1462] = v16;
    }
    if ( ((v16 >> 15) & 3) == 1 )
      goto LABEL_48;
    if ( ((v16 >> 15) & 3) == 2 )
    {
      if ( dword_14015DD78 == 2 )
      {
LABEL_46:
        v10 = v16 | 0x20000;
        goto LABEL_47;
      }
      v17 = dword_14015DD78 == 0;
    }
    else
    {
      v17 = ((v16 >> 15) & 3) == 3;
    }
    if ( !v17 )
      goto LABEL_48;
    goto LABEL_46;
  }
  IsFeatureEnabled = -1073741811;
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 971;
  return IsFeatureEnabled;
}
