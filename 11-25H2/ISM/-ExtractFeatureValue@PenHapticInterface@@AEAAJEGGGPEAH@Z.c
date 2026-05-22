/*
 * XREFs of ?ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z @ 0x18018A570
 * Callers:
 *     ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x18018A9D8 (-QueryHardwareProperties@PenHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?RG@?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@QEBA_KAEBG@Z @ 0x180055A18 (--$-RG@-$_Uhash_compare@GU-$hash@G@std@@U-$equal_to@G@2@@std@@QEBA_KAEBG@Z.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x18005A958 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Try_emplace@G$$V@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAG@Z @ 0x180189FB0 (--$_Try_emplace@G$$V@-$_Hash@V-$_Umap_traits@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@s.c)
 *     ??$emplace@AEAEV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAE$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@1@@Z @ 0x18018A0BC (--$emplace@AEAEV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@@-$_Hash@V-$_Umap_tra.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticInterface::ExtractFeatureValue(
        PenHapticInterface *this,
        unsigned __int8 a2,
        USHORT a3,
        USAGE a4,
        USAGE a5,
        int *a6)
{
  unsigned __int8 v6; // si
  _QWORD *v8; // r12
  __int64 v9; // rax
  unsigned __int16 *v10; // rdi
  size_t v11; // r14
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rbx
  unsigned int LastError; // ebx
  const struct std::nothrow_t *v15; // rdx
  const char *v16; // r9
  const struct std::nothrow_t *v18; // rdx
  ULONG ReportLength; // ebx
  __int64 v20; // rax
  LONG UsageValue; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned __int8 *v24; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v25; // [rsp+B8h] [rbp+50h] BYREF
  USHORT v26; // [rsp+C0h] [rbp+58h]
  USAGE v27; // [rsp+C8h] [rbp+60h]

  v27 = a4;
  v26 = a3;
  LOBYTE(v25) = a2;
  v6 = a2;
  v8 = (_QWORD *)((char *)this + 88);
  LOWORD(v24) = a2;
  v9 = std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>::operator()<unsigned short>(
         (__int64)this,
         (__int64)&v24);
  v10 = (unsigned __int16 *)((char *)this + 168);
  if ( !std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Find_last<unsigned short>(
          v8,
          v22,
          &v24,
          v9)[1] )
  {
    v11 = *v10;
    v12 = (unsigned __int8 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v24 = v12;
    if ( !v12 )
    {
      LastError = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)0x8007000ELL);
LABEL_6:
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v24, v15);
      return LastError;
    }
    memset_0(v12, 0, v11);
    *v13 = v6;
    if ( !HidD_GetFeature(*((HANDLE *)this + 32), v13, v11) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x7F,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
                    v16);
      goto LABEL_6;
    }
    std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::emplace<unsigned char &,std::unique_ptr<unsigned char [0]>>(
      v8,
      (__int64)v22,
      (unsigned __int8 *)&v25,
      (__int64 *)&v24);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v24, v18);
    v6 = v25;
  }
  UsageValue = 0;
  ReportLength = *v10;
  v25 = v6;
  v20 = std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::_Try_emplace<unsigned short,>(
          v8,
          (__int64)v22,
          &v25);
  if ( HidP_GetScaledUsageValue(
         HidP_Feature,
         v27,
         v26,
         a5,
         &UsageValue,
         *((PHIDP_PREPARSED_DATA *)this + 19),
         *(PCHAR *)(*(_QWORD *)v20 + 24LL),
         ReportLength) < 0 )
    return 2147500037LL;
  *a6 = UsageValue;
  return 0LL;
}
