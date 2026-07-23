/*
 * XREFs of RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x1800DCE8C (RtlpMuiRegValidateConfigNode.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x180099020 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800DD070 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x1800E83D4 (RtlpInitAndCallLcidToCultureName.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

char __fastcall RtlpMuiRegConfigMatchesInstalled(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5,
        __int64 *a6,
        unsigned __int16 *a7)
{
  int v7; // r13d
  __int64 v8; // r14
  void *v10; // rdi
  unsigned __int16 *v11; // r15
  unsigned __int16 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdi
  char v16; // bl
  __int64 v17; // r15
  __int64 *v18; // rdi
  bool v20; // zf
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  const wchar_t *v26; // rcx
  size_t v27; // rax
  PVOID v28; // rax
  __int64 v29; // r8
  const wchar_t *v30; // rdx
  __int64 v31; // [rsp+28h] [rbp-18h]
  _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF
  __int16 v34; // [rsp+98h] [rbp+58h] BYREF

  v7 = a2;
  v8 = (__int16)a3;
  Lcid = 0;
  v34 = 0;
  v10 = 0LL;
  v31 = 0LL;
  String = 0LL;
  if ( a2 == a4 )
  {
    v20 = (_WORD)a3 == a5;
LABEL_22:
    v16 = v20;
    v17 = 0LL;
    goto LABEL_16;
  }
  if ( !a2 || !a4 )
  {
LABEL_25:
    v16 = 0;
    if ( !v10 )
    {
LABEL_26:
      v17 = 0LL;
      goto LABEL_16;
    }
LABEL_55:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    goto LABEL_26;
  }
  v11 = a7;
  if ( a7 )
    *a7 = -1;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      if ( (a3 & 0x8000u) == 0LL )
      {
        v22 = *(_QWORD *)(a1 + 24);
        if ( (__int16)a3 < (unsigned int)*(unsigned __int16 *)(v22 + 6) )
        {
          LOBYTE(a3) = a4;
          v17 = *(_QWORD *)(v22 + 16) + 28 * v8;
          v16 = RtlpMuiRegLangInfoMatchesSpec(a1, v17, a3, a5);
          goto LABEL_16;
        }
      }
    }
    goto LABEL_25;
  }
  if ( a4 != 2 )
  {
    v16 = 1;
    if ( a2 == 1 )
    {
      if ( a4 == 3 )
      {
        v23 = *(_QWORD *)(a1 + 32);
        if ( v23 )
        {
          if ( (a5 & 0x8000u) == 0 && (__int16)a5 < (unsigned int)*(unsigned __int16 *)(v23 + 6) )
          {
            v24 = *(__int16 *)(*(_QWORD *)(v23 + 16) + 2LL * (__int16)a5);
            v25 = *(_QWORD *)(v23 + 24);
            v26 = (const wchar_t *)(v25 + 2 * v24);
            if ( v26 )
            {
              *(_DWORD *)(&String.MaximumLength + 1) = 0;
              String.Buffer = (wchar_t *)(v25 + 2 * v24);
              v27 = 2 * wcslen(v26);
              if ( v27 >= 0xFFFE )
                LOWORD(v27) = -4;
              String.Length = v27;
              String.MaximumLength = v27 + 2;
              if ( RtlCultureNameToLCID(&String, &Lcid) )
              {
                v20 = (_WORD)v8 == (unsigned __int16)Lcid;
                goto LABEL_22;
              }
            }
          }
        }
      }
    }
    else if ( a2 == 3 && a4 == 1 )
    {
      v28 = MuiRegAllocArray(a1, 0x55u);
      v10 = v28;
      if ( v28 )
      {
        if ( (unsigned __int8)RtlpInitAndCallLcidToCultureName(&String, v28, (unsigned int)(__int16)a5) )
        {
          v29 = *(_QWORD *)(a1 + 32);
          if ( !v29
            || (v8 & 0x8000u) != 0LL
            || (unsigned int)v8 >= *(unsigned __int16 *)(v29 + 6)
            || (v30 = (const wchar_t *)(*(_QWORD *)(v29 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v29 + 16) + 2 * v8))) == 0LL
            || wcsicmp(String.Buffer, v30) )
          {
            v16 = 0;
          }
          goto LABEL_55;
        }
      }
    }
    goto LABEL_25;
  }
  if ( !a1 )
    goto LABEL_25;
  v12 = a5;
  if ( (a5 & 0x8000u) != 0 )
    goto LABEL_25;
  v13 = *(_QWORD *)(a1 + 24);
  if ( (__int16)a5 >= (unsigned int)*(unsigned __int16 *)(v13 + 6) )
    goto LABEL_25;
  v14 = (unsigned __int16)a3;
  LOBYTE(a3) = v7;
  v15 = *(_QWORD *)(v13 + 16) + 28LL * (__int16)a5;
  v31 = v15;
  v16 = RtlpMuiRegLangInfoMatchesSpec(a1, v15, a3, v14);
  if ( v16 && v15 && v11 )
    *v11 = v12;
  v17 = 0LL;
LABEL_16:
  v18 = a6;
  if ( a6 )
  {
    if ( v16 )
    {
      if ( v31 )
      {
        *a6 = v31;
      }
      else if ( v17 )
      {
        *a6 = v17;
      }
      else
      {
        *a6 = 0LL;
        if ( (int)RtlpMuiRegGetInstalledLanguageIndex(a1, v7, v8, &v34) >= 0 && v34 >= 0 )
        {
          v21 = *(_QWORD *)(a1 + 24);
          if ( v34 < (int)*(unsigned __int16 *)(v21 + 6) )
            *v18 = *(_QWORD *)(v21 + 16) + 28LL * v34;
        }
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return v16;
}
