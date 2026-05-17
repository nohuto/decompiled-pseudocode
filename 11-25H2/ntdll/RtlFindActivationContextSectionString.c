/*
 * XREFs of RtlFindActivationContextSectionString @ 0x180019910
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x1800EE464 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpFindUnicodeStringInSection @ 0x180019C70 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindNextActivationContextSection @ 0x18001A1F0 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlAddRefActivationContext @ 0x180091E70 (RtlAddRefActivationContext.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800920DC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlFindActivationContextSectionString(int a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  struct _TEB *v6; // rcx
  int v7; // r12d
  _PEB *ProcessEnvironmentBlock; // rax
  int NextActivationContextSection; // ebx
  unsigned int v11; // r14d
  _DWORD *v12; // r15
  int UnicodeStringInSection; // eax
  int v14; // eax
  __int64 v15; // r13
  void (__fastcall *v16)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v17[4]; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-1Dh] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-19h] BYREF
  int v20; // [rsp+50h] [rbp-11h] BYREF
  int v21; // [rsp+54h] [rbp-Dh] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h] BYREF
  __int64 v23; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+7h] BYREF
  int v25; // [rsp+6Ch] [rbp+Bh]
  __int64 v26; // [rsp+70h] [rbp+Fh]
  int v27; // [rsp+78h] [rbp+17h]
  __int64 v28; // [rsp+7Ch] [rbp+1Bh]
  int v29; // [rsp+84h] [rbp+23h]

  v6 = NtCurrentTeb();
  v7 = a4;
  v29 = 0;
  v19 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( ProcessEnvironmentBlock->ActivationContextData
    || ProcessEnvironmentBlock->SystemDefaultActivationContextData
    || v6->ActivationContextStackPointer->ActiveFrame )
  {
    v18 = 0;
    v21 = -1;
    v20 = 0;
    if ( !a4 || (a1 & 0xFFFFFFF8) != 0 )
      return (unsigned int)-1073741811;
    if ( (a1 & 7) != 0 )
    {
      if ( !a5 )
        return (unsigned int)-1073741811;
    }
    else if ( !a5 )
    {
      goto LABEL_7;
    }
    if ( *a5 >= 0x40u )
    {
LABEL_7:
      if ( (a1 & 2) != 0 && a5 + 18 > (_DWORD *)((char *)a5 + (unsigned int)*a5) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else if ( (a1 & 4) != 0 && a5 + 28 > (_DWORD *)((char *)a5 + (unsigned int)*a5) )
      {
        NextActivationContextSection = -1073741811;
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
          "RtlpFindActivationContextSection_CheckParameters",
          -1073741811);
      }
      else
      {
        v26 = a2;
        v27 = a3;
        v24 = 32;
        v25 = a1;
        v28 = 0LL;
        v22 = 0LL;
        NextActivationContextSection = RtlpFindNextActivationContextSection(&v24, &v19, &v18, &v22);
        if ( NextActivationContextSection >= 0 )
        {
          v15 = v22;
          while ( 1 )
          {
            v11 = v18;
            v12 = v19;
            if ( v18 < 0x2C || *v19 != 1682469715 )
            {
              DbgPrintEx(
                51LL,
                0LL,
                "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
                v19,
                v18);
              return (unsigned int)-1072365565;
            }
            UnicodeStringInSection = RtlpFindUnicodeStringInSection(
                                       (_DWORD)v19,
                                       v18,
                                       v7,
                                       (_DWORD)a5,
                                       (__int64)&v21,
                                       (__int64)&v20);
            NextActivationContextSection = UnicodeStringInSection;
            if ( UnicodeStringInSection >= 0 )
              break;
            if ( UnicodeStringInSection != -1072365560 )
              return (unsigned int)NextActivationContextSection;
            v23 = 0LL;
            if ( v24 < 0x20 || (v25 & 0xFFFFFFF8) != 0 )
              return (unsigned int)-1073741811;
            v14 = RtlpFindNextActivationContextSection(&v24, &v19, &v18, &v23);
            NextActivationContextSection = v14;
            if ( v14 < 0 )
            {
              if ( v14 == -1072365567 )
                return (unsigned int)-1072365560;
              return (unsigned int)NextActivationContextSection;
            }
            v15 = v23;
            RtlAddRefActivationContext(v23);
          }
          if ( ((v15 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
          {
            v16 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v15 + 32);
            if ( v16 )
            {
              if ( (*(_BYTE *)(v15 + 48) & 8) == 0 || (*(_BYTE *)(v15 + 80) & 8) == 0 )
              {
                v17[0] = 0;
                v16(3LL, v15, *(_QWORD *)(v15 + 24), *(_QWORD *)(v15 + 40), 0LL, v17);
                *(_DWORD *)(v15 + 48) |= 8u;
                if ( v17[0] )
                  *(_DWORD *)(v15 + 80) |= 8u;
              }
            }
          }
          if ( !a5 )
            return 0;
          NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                           a1,
                                           (_DWORD)a5,
                                           v15,
                                           (unsigned int)&v24,
                                           (__int64)v12,
                                           v12[9],
                                           v12[10],
                                           v11);
          if ( NextActivationContextSection >= 0 )
            return 0;
        }
      }
      return (unsigned int)NextActivationContextSection;
    }
    return (unsigned int)-1073741811;
  }
  return 3222601729LL;
}
