/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x1800EE464
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x180019910 (RtlFindActivationContextSectionString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(__m128i *a1, unsigned __int16 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v7; // r12d
  int ActivationContextSectionString; // ebx
  __int64 v11; // rdi
  unsigned int v12; // r13d
  unsigned __int16 *v13; // r14
  SIZE_T v14; // r12
  unsigned __int64 v15; // rdx
  int v17; // [rsp+54h] [rbp-1F4h] BYREF
  int v18; // [rsp+58h] [rbp-1F0h]
  __int64 v19; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-1D0h]
  unsigned __int16 *v22; // [rsp+80h] [rbp-1C8h]
  unsigned __int64 v23; // [rsp+88h] [rbp-1C0h]
  _QWORD v24[2]; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-1A8h]
  __int128 v26; // [rsp+B0h] [rbp-198h]
  __int128 v27; // [rsp+C0h] [rbp-188h]
  __int64 v28; // [rsp+D0h] [rbp-178h]
  int v29; // [rsp+E0h] [rbp-168h] BYREF
  _DWORD v30[13]; // [rsp+E4h] [rbp-164h] BYREF
  __int64 v31; // [rsp+118h] [rbp-130h]
  char v32; // [rsp+124h] [rbp-124h]
  __int64 v33; // [rsp+128h] [rbp-120h]
  __int64 v34; // [rsp+130h] [rbp-118h]
  char v35; // [rsp+150h] [rbp-F8h] BYREF

  v21 = a3;
  v7 = a2;
  v23 = a5;
  v19 = 0LL;
  v20 = 0LL;
  v17 = 0;
  v29 = 112;
  memset_thunk_772440563353939046(v30, 0, 0x6CuLL);
  v24[0] = 72LL;
  v24[1] = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1,
                                     a1,
                                     0LL,
                                     a3,
                                     (_OWORD *)a4,
                                     a5,
                                     &v17,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v17 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0LL, 2, (__int64)a1, &v29);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( v30[0] == 1 )
          {
            if ( (v32 & 1) != 0 )
            {
              v11 = 0LL;
              v31 = 0LL;
            }
            else
            {
              v11 = v31;
              if ( (v32 & 2) != 0 )
                v11 = -4LL;
              v31 = v11;
            }
            v12 = *(unsigned __int16 *)(v33 + 92);
            v13 = (unsigned __int16 *)(v34 + *(unsigned int *)(v33 + 96));
            *((_QWORD *)&v20 + 1) = &v35;
            WORD1(v20) = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, (__int64)&v20, 2, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)(unsigned __int16)v20 >> 1;
              if ( (unsigned int)RtlCompareUnicodeStrings(
                                   v13,
                                   (unsigned __int64)v12 >> 1,
                                   *((_BYTE **)&v20 + 1),
                                   v14,
                                   1) )
              {
                ActivationContextSectionString = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                                                   v11,
                                                   a2,
                                                   &v19);
                if ( ActivationContextSectionString >= 0 )
                {
                  if ( v19 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)v24, v19);
                    if ( *(_QWORD *)(a4 + 8) )
                      RtlFreeAnsiString((PUNICODE_STRING)a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       a1,
                                                       0LL,
                                                       v21,
                                                       (_OWORD *)a4,
                                                       v23,
                                                       &v17,
                                                       0LL,
                                                       0LL);
                    v18 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7,
                                                         0LL,
                                                         2,
                                                         (__int64)a1,
                                                         &v29);
                      v18 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( v30[0] == 1 )
                        {
                          v15 = *(unsigned __int16 *)(v33 + 92);
                          WORD1(v21) = v15;
                          LOWORD(v21) = v15;
                          v22 = (unsigned __int16 *)(v34 + *(unsigned int *)(v33 + 96));
                          if ( (unsigned int)RtlCompareUnicodeStrings(v22, v15 >> 1, *((_BYTE **)&v20 + 1), v14, 1) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v18 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)v24);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
