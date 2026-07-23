/*
 * XREFs of RtlGetNeutralFallback @ 0x180012B40
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpNlsGetNameIndex @ 0x1800143C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     GetNameFromLangListNode @ 0x1800C7870 (GetNameFromLangListNode.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180110BE4 (RtlpGetCustomCultureData.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlGetNeutralFallback(__int64 a1, wchar_t *a2, __int64 a3, _BYTE *a4)
{
  unsigned int NameFromLangListNode; // r13d
  __int64 v9; // r8
  __int64 v10; // rbx
  int v11; // edi
  __int64 i; // rbp
  const wchar_t *v13; // rcx
  int j; // ecx
  _WORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  size_t v18; // rax
  int NameIndex; // eax
  int v20; // ecx
  __int64 v21; // rax
  const void *v22; // rdx
  _WORD *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned __int64 v26; // rdi
  unsigned __int16 v27; // bx
  __int64 v29; // rdx
  DWORD Lcid; // [rsp+20h] [rbp-48h] BYREF
  int v31; // [rsp+24h] [rbp-44h] BYREF
  __int16 v32; // [rsp+28h] [rbp-40h]
  _UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF

  v31 = 0;
  v32 = 0;
  Lcid = 0;
  NameFromLangListNode = 0;
  if ( a1 && a3 && a4 )
  {
    *a4 = 0;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&String.Length = v9;
      if ( *a2 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        if ( v10 )
        {
          v11 = 0;
          for ( i = 0LL; ; i += 2LL )
          {
            if ( v11 >= *(unsigned __int16 *)(v10 + 6) )
            {
              v9 = *(_QWORD *)&String.Length;
              goto LABEL_42;
            }
            v13 = (const wchar_t *)(*(_QWORD *)(v10 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v10 + 16) + i));
            if ( v13 == a2 || !wcsicmp(v13, a2) )
              break;
            ++v11;
          }
          v9 = *(_QWORD *)&String.Length;
          if ( v11 < 0 )
            goto LABEL_42;
        }
        else
        {
LABEL_42:
          LOWORD(v11) = -1;
        }
        if ( (v11 & 0x8000u) == 0 )
        {
          for ( j = 0; j < *(unsigned __int16 *)(v9 + 6); ++j )
          {
            v15 = (_WORD *)(*(_QWORD *)(v9 + 16) + 28LL * j);
            if ( v15[3] == (_WORD)v11 && (*v15 & 0x1020) == 0x20 )
            {
              v16 = 28LL * (__int16)j;
              v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
              if ( ((*(_WORD *)(v16 + v17 + 4) - 4096) & 0xFBFF) == 0 )
                *a4 = 1;
              LOWORD(v31) = *(_WORD *)(v16 + v17 + 8) >> 14;
              v32 = *(_WORD *)(v16 + v17 + 10);
              NameFromLangListNode = GetNameFromLangListNode(a1, &v31, a3, 0LL);
              if ( (NameFromLangListNode & 0x80000000) != 0 )
              {
                *(_QWORD *)&String.Length = 0LL;
                goto LABEL_22;
              }
              return NameFromLangListNode;
            }
          }
        }
      }
      *(_QWORD *)&String.Length = 0LL;
LABEL_22:
      String.Buffer = a2;
      v18 = 2 * wcslen(a2);
      if ( v18 >= 0xFFFE )
        LOWORD(v18) = -4;
      String.Length = v18;
      String.MaximumLength = v18 + 2;
    }
    else
    {
      *(_QWORD *)&String.Length = 0LL;
      String.Buffer = 0LL;
    }
    if ( RtlCultureNameToLCID(&String, &Lcid) && ((Lcid - 4096) & 0xFFFFFBFF) == 0 )
    {
      *a4 = 1;
      return NameFromLangListNode;
    }
    if ( *a4 )
      return NameFromLangListNode;
    if ( a2 )
    {
      if ( !*(_QWORD *)(a3 + 8) )
        return (unsigned int)-1073741584;
      if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
        return (unsigned int)-1073741823;
      NameIndex = RtlpNlsGetNameIndex(a2);
      if ( NameIndex >= 0 )
      {
        _mm_lfence();
        v20 = *(unsigned __int16 *)(pTblPtrs + 48)
            * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
        v21 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
        v22 = (const void *)(v21 + 2LL * *(unsigned int *)(v20 + *(_QWORD *)(pTblPtrs + 8) + 184LL));
        if ( v22 )
        {
          v23 = (_WORD *)(v21 + 2LL * *(unsigned int *)(v20 + *(_QWORD *)(pTblPtrs + 8) + 184LL));
          v24 = 85LL;
          do
          {
            if ( !*v23 )
              break;
            ++v23;
            --v24;
          }
          while ( v24 );
          v25 = 85 - v24;
          if ( v24 )
          {
            if ( v25 >= 0x55 )
              return (unsigned int)-1073741789;
            v26 = 2LL * v25;
            if ( *(unsigned __int16 *)(a3 + 2) <= v26 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              v27 = 2 * v25;
              memmove(*(void **)(a3 + 8), v22, v27);
              NameFromLangListNode = 0;
              *(_WORD *)(v26 + *(_QWORD *)(a3 + 8)) = 0;
              *(_WORD *)a3 = v27;
            }
            return NameFromLangListNode;
          }
          return (unsigned int)-1073741823;
        }
      }
      if ( (unsigned __int8)RtlpIsCustomLocale(a2) )
      {
        LOBYTE(v29) = 1;
        return (unsigned int)RtlpGetCustomCultureData(a2, v29, 0LL, a3);
      }
    }
    return (unsigned int)-1073741585;
  }
  return 3221225485LL;
}
