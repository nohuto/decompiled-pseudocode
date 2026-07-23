/*
 * XREFs of SdbpSearchDB @ 0x140A0B1E4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140A75B28 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbFindFirstStringIndexedTag @ 0x14082B0F4 (SdbFindFirstStringIndexedTag.c)
 *     SdbGetIndex @ 0x14082B1C4 (SdbGetIndex.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckExe @ 0x140A0B0F0 (SdbpCheckExe.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 *     SdbFindNextStringIndexedTag @ 0x140ABEF6C (SdbFindNextStringIndexedTag.c)
 */

__int64 __fastcall SdbpSearchDB(__int64 a1, _RTL_RUN_ONCE *a2, __int16 a3, __int64 a4, void *a5, int FirstTag)
{
  _DWORD *v6; // r13
  wchar_t *Str1; // rsi
  __int64 v9; // rdi
  unsigned int v10; // r15d
  __int64 v11; // r12
  unsigned int FirstIndexedWildCardTag; // eax
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // r12
  int FirstStringIndexedTag; // eax
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rsi
  int Index; // r12d
  WCHAR *v21; // rax
  int FirstNamedTagHelper; // eax
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // r12
  int NextIndexedWildCardTag; // eax
  int v27; // eax
  unsigned int v28; // esi
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  int v34; // [rsp+40h] [rbp-40h] BYREF
  int v35; // [rsp+44h] [rbp-3Ch] BYREF
  int v36; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *v37; // [rsp+50h] [rbp-30h]
  _OWORD v38[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v39; // [rsp+78h] [rbp-8h]
  int v41; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+58h]

  v42 = a4;
  LOWORD(v41) = a3;
  v6 = a5;
  Str1 = *(wchar_t **)(a4 + 40);
  v34 = 0;
  v9 = 0LL;
  v39 = 0LL;
  v41 = 0;
  memset(v38, 0, sizeof(v38));
  memset_0(a5, 0, 0x80uLL);
  v37 = Str1;
  FirstTag = SdbFindFirstTag((__int64)a2, 0, 28673);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_54;
  }
  v10 = 16;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v11 = 1LL;
    FirstIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, 24587, (__int64)Str1, (unsigned int *)v38);
    goto LABEL_7;
  }
  v11 = 0LL;
  if ( a2 != *(_RTL_RUN_ONCE **)(a1 + 8) )
  {
    FirstIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, Str1, 1);
    while ( 1 )
    {
LABEL_7:
      v13 = FirstIndexedWildCardTag;
      if ( !FirstIndexedWildCardTag )
      {
        Str1 = v37;
        break;
      }
      v36 = 0;
      v35 = 2;
      if ( (unsigned int)SdbpCheckForMatch(a1, (_DWORD)a2, FirstIndexedWildCardTag, v42, (__int64)&v35, (__int64)&v36)
        && v35 == 2 )
      {
        if ( (unsigned int)v9 < 0x10 )
        {
          v14 = v36;
          v6[2 * v9] = v13;
          v6[2 * v9 + 1] = v14;
          v9 = (unsigned int)(v9 + 1);
          v41 = v9;
          v34 = 2;
          goto LABEL_13;
        }
        AslLogCallPrintf(1LL);
        v9 = (unsigned int)(v9 + 1);
        v41 = v9;
      }
      if ( (unsigned int)v9 > 0x10 )
        goto LABEL_55;
LABEL_13:
      if ( v11 )
        FirstIndexedWildCardTag = SdbpFindNextIndexedWildCardTag(a2, (unsigned int *)v38);
      else
        FirstIndexedWildCardTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v13, 24587LL, v37, 1);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24577, 0LL) )
  {
    v15 = 1LL;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577, Str1, (unsigned int *)v38);
  }
  else
  {
    v15 = 0LL;
    FirstStringIndexedTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24577, Str1, 0);
  }
  while ( 1 )
  {
    v17 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
      break;
    v18 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, &v41, v42, 0, &v34, v6);
    LODWORD(v9) = v41;
    if ( v18 )
    {
      if ( v34 != 2 )
        goto LABEL_53;
    }
    else if ( (unsigned int)v41 > 0x10 )
    {
      goto LABEL_55;
    }
    if ( v15 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v38);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v17, 24577LL, v37, 0);
  }
  v19 = v42;
  if ( *(_QWORD *)(v42 + 48) )
  {
    Index = SdbGetIndex(a2, 28679, 24608, 0LL);
    v21 = *(WCHAR **)(v19 + 48);
    if ( Index )
      FirstNamedTagHelper = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608, v21, (unsigned int *)v38);
    else
      FirstNamedTagHelper = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24608, v21, 0);
    while ( 1 )
    {
      v23 = FirstNamedTagHelper;
      if ( !FirstNamedTagHelper )
        break;
      v24 = SdbpCheckExe(a1, (int)a2, FirstNamedTagHelper, &v41, v42, 0, &v34, v6);
      LODWORD(v9) = v41;
      if ( v24 )
      {
        if ( v34 != 2 )
          goto LABEL_53;
      }
      else if ( (unsigned int)v41 > 0x10 )
      {
        goto LABEL_55;
      }
      if ( Index )
        FirstNamedTagHelper = SdbFindNextStringIndexedTag(a2, v38);
      else
        FirstNamedTagHelper = SdbpFindNextNamedTagHelper(
                                (__int64)a2,
                                FirstTag,
                                v23,
                                24608LL,
                                *(wchar_t **)(v42 + 48),
                                0);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v25 = 1LL;
    NextIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, 24587, (__int64)v37, (unsigned int *)v38);
    goto LABEL_52;
  }
  v25 = 0LL;
  if ( a2 != *(_RTL_RUN_ONCE **)(a1 + 8) )
  {
    NextIndexedWildCardTag = SdbpFindFirstNamedTagHelper((int)a2, FirstTag, 28679, 24587, v37, 1);
LABEL_52:
    while ( 1 )
    {
      v28 = NextIndexedWildCardTag;
      if ( !NextIndexedWildCardTag )
        break;
      v27 = SdbpCheckExe(a1, (int)a2, NextIndexedWildCardTag, &v41, v42, 2, &v34, v6);
      LODWORD(v9) = v41;
      if ( v27 )
      {
        if ( v34 != 2 )
          break;
      }
      else if ( (unsigned int)v41 > 0x10 )
      {
        goto LABEL_55;
      }
      if ( v25 )
        NextIndexedWildCardTag = SdbpFindNextIndexedWildCardTag(a2, (unsigned int *)v38);
      else
        NextIndexedWildCardTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v28, 24587LL, v37, 1);
    }
  }
LABEL_53:
  if ( (unsigned int)v9 <= 0x10 )
  {
LABEL_54:
    v10 = v9;
    if ( !(_DWORD)v9 )
      return (unsigned int)v9;
  }
LABEL_55:
  v29 = v10;
  do
  {
    v30 = SdbFindFirstTag((__int64)a2, *v6, 24582);
    if ( v30 )
      SdbGetStringTagPtr(a2, v30, v31, v32);
    v6 += 2;
    --v29;
  }
  while ( v29 );
  return (unsigned int)v9;
}
