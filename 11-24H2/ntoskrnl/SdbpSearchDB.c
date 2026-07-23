/*
 * XREFs of SdbpSearchDB @ 0x140A04788
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1409410B0 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140943014 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140945304 (SdbFindFirstStringIndexedTag.c)
 *     SdbGetIndex @ 0x1409453D4 (SdbGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140947608 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpCheckExe @ 0x140A04694 (SdbpCheckExe.c)
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 *     SdbFindNextStringIndexedTag @ 0x140A73428 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
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
  __int64 v38[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v39; // [rsp+68h] [rbp-18h]
  __int64 v40; // [rsp+78h] [rbp-8h]
  int v42; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+58h]

  v43 = a4;
  LOWORD(v42) = a3;
  v6 = a5;
  Str1 = *(wchar_t **)(a4 + 40);
  v34 = 0;
  v9 = 0LL;
  v40 = 0LL;
  v42 = 0;
  *(_OWORD *)v38 = 0LL;
  v39 = 0LL;
  memset_0(a5, 0, 0x80uLL);
  v37 = Str1;
  FirstTag = SdbFindFirstTag((__int64)a2, 0, 28673);
  if ( !FirstTag )
  {
    AslLogCallPrintf(1LL, (__int64)"SdbpSearchDB");
    goto LABEL_54;
  }
  v10 = 16;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v11 = 1LL;
    FirstIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679, 24587, Str1, (unsigned int *)v38);
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
      if ( (unsigned int)SdbpCheckForMatch(a1, (_DWORD)a2, FirstIndexedWildCardTag, v43, (__int64)&v35, (__int64)&v36)
        && v35 == 2 )
      {
        if ( (unsigned int)v9 < 0x10 )
        {
          v14 = v36;
          v6[2 * v9] = v13;
          v6[2 * v9 + 1] = v14;
          v9 = (unsigned int)(v9 + 1);
          v42 = v9;
          v34 = 2;
          goto LABEL_13;
        }
        AslLogCallPrintf(1LL, (__int64)"SdbpCheckExe");
        v9 = (unsigned int)(v9 + 1);
        v42 = v9;
      }
      if ( (unsigned int)v9 > 0x10 )
        goto LABEL_55;
LABEL_13:
      if ( v11 )
        FirstIndexedWildCardTag = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v38);
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
    v18 = SdbpCheckExe(a1, (int)a2, FirstStringIndexedTag, &v42, v43, 0, &v34, v6);
    LODWORD(v9) = v42;
    if ( v18 )
    {
      if ( v34 != 2 )
        goto LABEL_53;
    }
    else if ( (unsigned int)v42 > 0x10 )
    {
      goto LABEL_55;
    }
    if ( v15 )
      FirstStringIndexedTag = SdbFindNextStringIndexedTag(a2, v38);
    else
      FirstStringIndexedTag = SdbpFindNextNamedTagHelper((__int64)a2, FirstTag, v17, 24577LL, v37, 0);
  }
  v19 = v43;
  if ( *(_QWORD *)(v43 + 48) )
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
      v24 = SdbpCheckExe(a1, (int)a2, FirstNamedTagHelper, &v42, v43, 0, &v34, v6);
      LODWORD(v9) = v42;
      if ( v24 )
      {
        if ( v34 != 2 )
          goto LABEL_53;
      }
      else if ( (unsigned int)v42 > 0x10 )
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
                                *(wchar_t **)(v43 + 48),
                                0);
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    v25 = 1LL;
    NextIndexedWildCardTag = SdbpFindFirstIndexedWildCardTag(a2, 28679, 24587, v37, (unsigned int *)v38);
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
      v27 = SdbpCheckExe(a1, (int)a2, NextIndexedWildCardTag, &v42, v43, 2, &v34, v6);
      LODWORD(v9) = v42;
      if ( v27 )
      {
        if ( v34 != 2 )
          break;
      }
      else if ( (unsigned int)v42 > 0x10 )
      {
        goto LABEL_55;
      }
      if ( v25 )
        NextIndexedWildCardTag = SdbpFindNextIndexedWildCardTag((__int64)a2, (unsigned int *)v38);
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
