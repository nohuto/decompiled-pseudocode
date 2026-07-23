/*
 * XREFs of LookupSidInTable @ 0x14086B1E0
 * Callers:
 *     SeConvertStringSidToSid @ 0x1404B5F90 (SeConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1408684DC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x14086B0D4 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(wchar_t *Str1, PSID Sid, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  __int64 v7; // r13
  char v8; // r15
  PSID v9; // rsi
  BOOL v11; // r14d
  unsigned int v12; // ebx
  PSID *v13; // rdi
  __int64 v14; // rbp
  const wchar_t *v15; // rsi
  int v16; // eax
  char *v17; // rdi
  void *v18; // rcx
  ULONG v19; // esi
  PVOID v20; // rbx
  PUCHAR v21; // rax
  __int64 v22; // r13
  int v24; // ecx
  ULONG v25; // edx
  int v26; // ecx
  unsigned int v27; // [rsp+70h] [rbp+8h]
  BOOL v30; // [rsp+88h] [rbp+20h]

  v7 = 0LL;
  v8 = 0;
  v30 = 0;
  v9 = Sid;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid) == 0 )
    return 0LL;
  v11 = 0;
  *a7 = 0LL;
  v27 = 67;
  if ( Str1 )
  {
    if ( wcsnicmp(Str1, L"EA", 2uLL) )
    {
      if ( wcsnicmp(Str1, L"SA", 2uLL) )
      {
        if ( wcsnicmp(Str1, L"RO", 2uLL) )
          v11 = wcsnicmp(Str1, L"EK", 2uLL) == 0;
        else
          v11 = 1;
      }
      else
      {
        v11 = 1;
        v30 = 1;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v8 = 1;
    v24 = *RtlSubAuthorityCountSid(Sid);
    if ( (_BYTE)v24 )
    {
      v25 = *RtlSubAuthoritySid(v9, v24 - 1);
      if ( v25 - 498 <= 0x1D )
      {
        v26 = 540016641;
        if ( _bittest(&v26, v25 - 498) )
        {
          v11 = 1;
          v30 = v25 == 518;
        }
      }
    }
  }
  v12 = 0;
  v13 = (PSID *)&unk_140E0CE50;
  do
  {
    if ( v8 )
    {
      if ( RtlEqualSid(v9, *v13) )
      {
        v14 = v12;
LABEL_32:
        v22 = 104 * v14;
        return (__int64)&unk_140E0CE40 + v22;
      }
    }
    else
    {
      v14 = v12;
      v15 = (const wchar_t *)((char *)&unk_140E0CE40 + 104 * v12);
      if ( !wcsnicmp(Str1, v15 + 1, *((unsigned int *)v13 - 1)) )
        goto LABEL_32;
      if ( v11 && !a3 && a6 && *((_BYTE *)v13 - 16) && *v13 )
      {
        v16 = wcsnicmp(L"DA", v15 + 1, *((unsigned int *)v13 - 1));
        v9 = Sid;
        if ( !v16 )
          v27 = v12;
      }
      else
      {
        v9 = Sid;
      }
    }
    ++v12;
    v13 += 13;
  }
  while ( v12 < 0x43 );
  if ( v11 && a6 && !a3 && v27 < 0x43 )
  {
    if ( !v30 )
    {
      v22 = 104LL * v27;
      return (__int64)&unk_140E0CE40 + v22;
    }
    if ( v8 )
    {
      *a7 = v9;
    }
    else
    {
      v17 = (char *)&unk_140E0CE40 + 104 * v27;
      v18 = (void *)*((_QWORD *)v17 + 2);
      if ( v18 )
      {
        v19 = RtlLengthSid(v18);
        v20 = SddlpAlloc(v19 + 1);
        *a7 = v20;
        if ( v20 )
        {
          _mm_lfence();
          memmove(v20, *((const void **)v17 + 2), v19);
          v21 = RtlSubAuthorityCountSid(*((PSID *)v17 + 2));
          *RtlSubAuthoritySid(v20, (unsigned int)*v21 - 1) = 518;
        }
      }
    }
  }
  return v7;
}
