/*
 * XREFs of ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x18018AE60
 * Callers:
 *     ?SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018DC20 (-SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018DDF0 (-SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@.c)
 *     ?StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018E400 (-StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$_Find_last@G@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@@1@AEBG_K@Z @ 0x180052FB0 (--$_Find_last@G@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_compare@GU-.c)
 *     ??$?RG@?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@QEBA_KAEBG@Z @ 0x180055A18 (--$-RG@-$_Uhash_compare@GU-$hash@G@std@@U-$equal_to@G@2@@std@@QEBA_KAEBG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x180189EA4 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?GetHapticsChannel@PenHapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z @ 0x18018A7E8 (-GetHapticsChannel@PenHapticInterface@@AEAA_NW4_HIDP_REPORT_TYPE@@GPEAU_HIDP_VALUE_CAPS@@@Z.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x18018B18C (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall PenHapticInterface::SendHapticFeedbackInternal(
        PenHapticInterface *this,
        unsigned __int16 a2,
        float a3,
        ULONG a4,
        unsigned int a5,
        ULONG a6)
{
  ULONG v8; // r15d
  ULONG v10; // r14d
  enum _HIDP_REPORT_TYPE v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  enum _HIDP_REPORT_TYPE v14; // edx
  __int64 v15; // rax
  void *v16; // rax
  CHAR *Report; // rbx
  unsigned int v18; // ebx
  const struct std::nothrow_t *v19; // rdx
  NTSTATUS v20; // eax
  unsigned int LastError; // eax
  DWORD v22; // r8d
  void *v23; // rcx
  const struct std::nothrow_t *v24; // rdx
  const char *v25; // r9
  unsigned __int16 v27; // [rsp+48h] [rbp-59h] BYREF
  DWORD NumberOfBytesWritten; // [rsp+50h] [rbp-51h] BYREF
  void *v29[2]; // [rsp+58h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v30; // [rsp+68h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]
  unsigned __int16 v32; // [rsp+100h] [rbp+5Fh] BYREF

  v32 = a2;
  v8 = 0;
  v10 = 0;
  memset_0(&v30, 0, sizeof(v30));
  v27 = a2;
  if ( (unsigned __int16)(a2 - 1) > 1u )
  {
    v13 = std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>::operator()<unsigned short>(
            v12,
            (__int64)&v27);
    if ( !std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Find_last<unsigned short>(
            (_QWORD *)this + 3,
            (__int64 **)v29,
            &v27,
            v13)[1] )
      return 2147942487LL;
  }
  if ( !PenHapticInterface::GetHapticsChannel(this, v11, 0x21u, &v30) )
    return 2147942487LL;
  if ( PenHapticInterface::GetHapticsChannel(this, v14, 0x23u, &v30) )
    v10 = (int)(float)((float)(v30.LogicalMax - v30.LogicalMin) * a3);
  if ( a4 )
  {
    v15 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
            (_QWORD *)this + 3,
            (__int64)v29,
            &v32);
    v8 = *(_DWORD *)(*(_QWORD *)v15 + 24LL) + a5;
  }
  v16 = operator new[](*((unsigned __int16 *)this + 83), (const struct std::nothrow_t *)&std::nothrow);
  v29[0] = v16;
  Report = (CHAR *)v16;
  if ( !v16 )
  {
    v18 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)0x8007000ELL);
LABEL_15:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v29, v19);
    return v18;
  }
  memset_0(v16, 0, *((unsigned __int16 *)this + 83));
  *Report = v30.ReportID;
  v20 = HidP_SetUsageValue(
          HidP_Output,
          0xEu,
          *((_WORD *)this + 8),
          0x21u,
          v32,
          *((PHIDP_PREPARSED_DATA *)this + 19),
          Report,
          *((unsigned __int16 *)this + 83));
  if ( v20 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x134,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
                  (const char *)(unsigned int)v20);
LABEL_14:
    v18 = LastError;
    goto LABEL_15;
  }
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x24u,
    a4,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x25u,
    v8,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x23u,
    v10,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    *((_WORD *)this + 8),
    0x28u,
    a6,
    *((PHIDP_PREPARSED_DATA *)this + 19),
    Report,
    *((unsigned __int16 *)this + 83));
  InputTraceLogging::Haptics::WriteOutput();
  v22 = *((unsigned __int16 *)this + 83);
  v23 = (void *)*((_QWORD *)this + 32);
  NumberOfBytesWritten = 0;
  if ( !WriteFile(v23, Report, v22, &NumberOfBytesWritten, 0LL) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x162,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
                  v25);
    goto LABEL_14;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v29, v24);
  return 0LL;
}
