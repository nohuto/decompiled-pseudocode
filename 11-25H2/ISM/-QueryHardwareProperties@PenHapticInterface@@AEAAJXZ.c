/*
 * XREFs of ?QueryHardwareProperties@PenHapticInterface@@AEAAJXZ @ 0x18018A9D8
 * Callers:
 *     ?Initialize@PenHapticInterface@@QEAAJXZ @ 0x18018A8D8 (-Initialize@PenHapticInterface@@QEAAJXZ.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DC0EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Try_emplace@AEBG$$V@?$_Hash@V?$_Umap_traits@GUSimpleHapticsControllerFeedback@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBGUSimpleHapticsControllerFeedback@@@std@@PEAX@std@@_N@1@AEBG@Z @ 0x180189EA4 (--$_Try_emplace@AEBG$$V@-$_Hash@V-$_Umap_traits@GUSimpleHapticsControllerFeedback@@V-$_Uhash_com.c)
 *     ?ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z @ 0x18018A570 (-ExtractFeatureValue@PenHapticInterface@@AEAAJEGGGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticInterface::QueryHardwareProperties(PenHapticInterface *this)
{
  int v2; // r12d
  int v3; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rsi
  NTSTATUS SpecificValueCaps; // eax
  const struct std::nothrow_t *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  unsigned int v8; // ebx
  USHORT v9; // r15
  USAGE UsageMin; // ax
  __int64 v11; // rax
  __int16 PhysicalMin; // bx
  int PhysicalMin_low; // ebx
  USAGE v14; // bx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rax
  __int64 v18; // rdx
  const char *ValueCapsLength; // [rsp+28h] [rbp-71h]
  int v21; // [rsp+40h] [rbp-59h]
  int v22; // [rsp+44h] [rbp-55h] BYREF
  struct _HIDP_VALUE_CAPS *v23; // [rsp+48h] [rbp-51h] BYREF
  char v24[16]; // [rsp+50h] [rbp-49h] BYREF
  char v25[16]; // [rsp+60h] [rbp-39h] BYREF
  char v26[16]; // [rsp+70h] [rbp-29h] BYREF
  char v27[16]; // [rsp+80h] [rbp-19h] BYREF
  char v28[16]; // [rsp+90h] [rbp-9h] BYREF
  char v29[80]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  USAGE v31; // [rsp+100h] [rbp+67h] BYREF
  USAGE v32; // [rsp+108h] [rbp+6Fh] BYREF
  USHORT v33; // [rsp+110h] [rbp+77h] BYREF
  USAGE v34; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  v3 = 0;
  v21 = 0;
  v33 = *((_WORD *)this + 110);
  ValueCaps = (struct _HIDP_VALUE_CAPS *)operator new[](saturated_mul(v33, 0x48uLL));
  v23 = ValueCaps;
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        0xAu,
                        *((_WORD *)this + 8),
                        0,
                        ValueCaps,
                        &v33,
                        *((PHIDP_PREPARSED_DATA *)this + 19));
  if ( SpecificValueCaps < 0 )
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0xA4,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
           (const char *)(unsigned int)SpecificValueCaps);
LABEL_28:
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v23, v7);
    return v8;
  }
  v9 = 0;
  v34 = 0;
  if ( !v33 )
  {
LABEL_26:
    v17 = "A minimum of one waveform is requried.";
    v18 = 223LL;
LABEL_27:
    v8 = -2147418113;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
      (const char *)0x8000FFFFLL,
      (int)v17,
      ValueCapsLength);
    goto LABEL_28;
  }
  do
  {
    UsageMin = ValueCaps[v9].Range.UsageMin;
    if ( ValueCaps[v9].IsRange )
    {
      v31 = ValueCaps[v9].Range.UsageMin;
      if ( UsageMin > ValueCaps[v9].Range.UsageMax )
        goto LABEL_21;
      while ( 1 )
      {
        if ( ValueCaps[v9].LinkUsagePage == 14 )
        {
          if ( ValueCaps[v9].LinkUsage == 16 )
          {
            v22 = 0;
            if ( (int)PenHapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v9].ReportID,
                        ValueCaps[v9].LinkCollection,
                        ValueCaps[v9].UsagePage,
                        UsageMin,
                        &v22) >= 0 )
            {
              v14 = v31;
              *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                      (_QWORD *)this + 3,
                                      (__int64)v27,
                                      &v31)
                       + 20LL) = v14;
              v15 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (_QWORD *)this + 3,
                      (__int64)v28,
                      &v31);
              *(_WORD *)(*(_QWORD *)v15 + 22LL) = v22;
              ++v2;
              v3 = v21;
            }
LABEL_18:
            UsageMin = v31;
            goto LABEL_19;
          }
          if ( ValueCaps[v9].LinkUsage == 17 )
          {
            v22 = 0;
            if ( (int)PenHapticInterface::ExtractFeatureValue(
                        this,
                        ValueCaps[v9].ReportID,
                        ValueCaps[v9].LinkCollection,
                        ValueCaps[v9].UsagePage,
                        UsageMin,
                        &v22) >= 0 )
            {
              v16 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                      (_QWORD *)this + 3,
                      (__int64)v29,
                      &v31);
              *(_DWORD *)(*(_QWORD *)v16 + 24LL) = (unsigned __int16)v22;
              v21 = ++v3;
            }
            goto LABEL_18;
          }
        }
LABEL_19:
        v31 = ++UsageMin;
        if ( UsageMin > ValueCaps[v9].Range.UsageMax )
        {
          v9 = v34;
          goto LABEL_21;
        }
      }
    }
    v34 = ValueCaps[v9].Range.UsageMin;
    v32 = UsageMin;
    if ( ValueCaps[v9].LinkUsagePage == 14 )
    {
      if ( ValueCaps[v9].LinkUsage == 16 )
      {
        v11 = std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                (_QWORD *)this + 3,
                (__int64)v24,
                &v32);
        *(_WORD *)(*(_QWORD *)v11 + 20LL) = v34;
        PhysicalMin = ValueCaps[v9].PhysicalMin;
        *(_WORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                (_QWORD *)this + 3,
                                (__int64)v25,
                                &v32)
                 + 22LL) = PhysicalMin;
        ++v2;
        v3 = v21;
      }
      else if ( ValueCaps[v9].LinkUsage == 17 )
      {
        PhysicalMin_low = LOWORD(ValueCaps[v9].PhysicalMin);
        *(_DWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned short,SimpleHapticsControllerFeedback,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,SimpleHapticsControllerFeedback>>,0>>::_Try_emplace<unsigned short const &,>(
                                 (_QWORD *)this + 3,
                                 (__int64)v26,
                                 &v32)
                  + 24LL) = PhysicalMin_low;
        v3 = ++v21;
      }
    }
LABEL_21:
    v34 = ++v9;
  }
  while ( v9 < v33 );
  if ( !v2 )
    goto LABEL_26;
  if ( v2 != v3 )
  {
    v17 = "The waveform list and duration list are not equal size.";
    v18 = 225LL;
    goto LABEL_27;
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>((void **)&v23, v6);
  return 0LL;
}
