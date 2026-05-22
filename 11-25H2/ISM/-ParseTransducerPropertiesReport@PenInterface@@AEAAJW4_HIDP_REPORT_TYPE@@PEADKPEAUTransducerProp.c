/*
 * XREFs of ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x1801888EC
 * Callers:
 *     ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x180188B38 (-ProcessInputReport@PenInterface@@QEAAJPEADK@Z.c)
 *     ?QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z @ 0x180188BCC (-QueryTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0F78 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PenInterface::ParseTransducerPropertiesReport(
        PenInterface *this,
        HIDP_REPORT_TYPE a2,
        char *Report,
        ULONG ReportLength,
        struct PenInterface::TransducerPropertiesReport *a5)
{
  struct _HIDP_PREPARSED_DATA *v5; // rax
  ULONG v6; // edi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  NTSTATUS v14; // eax
  struct PenInterface::TransducerPropertiesReport *v15; // r14
  __int64 v16; // rcx
  bool v17; // of
  size_t v18; // rax
  _WORD *v19; // rbx
  const struct std::nothrow_t *v20; // rdx
  const struct std::nothrow_t *v21; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+28h] [rbp-38h]
  ULONG v23; // [rsp+40h] [rbp-20h] BYREF
  ULONG v24; // [rsp+44h] [rbp-1Ch] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-18h] BYREF
  void *v26[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  ULONG UsageValue; // [rsp+90h] [rbp+30h] BYREF

  v5 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v6 = 0;
  UsageValue = 0;
  v23 = 0;
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x5Bu, &UsageValue, v5, Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 244LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  v11 = HidP_GetUsageValue(a2, 0xDu, 0, 0x91u, &v23, *((PHIDP_PREPARSED_DATA *)this + 6), Report, ReportLength);
  if ( v11 < 0 )
  {
    v12 = 253LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)v11);
  }
  if ( !v23 || !UsageValue )
    return 2147942487LL;
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v24 = 0;
  v14 = HidP_GetUsageValue(a2, 0xDu, 0, 0x6Eu, &v24, PreparsedData, Report, ReportLength);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x10D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v14);
  v15 = a5;
  v16 = UsageValue + ((unsigned __int64)v24 << 32);
  *((_WORD *)a5 + 3) = v23;
  *((_QWORD *)v15 + 1) = v16;
  *((_BYTE *)v15 + 16) = *((_BYTE *)this + 146) == 0;
  if ( a2 == HidP_Input && *((_BYTE *)this + 146) )
  {
    v18 = 2LL * *((unsigned __int16 *)this + 59);
    v17 = (*((unsigned __int16 *)this + 59) * (unsigned __int128)2u) >> 64 != 0;
    UsageLength = *((unsigned __int16 *)this + 59);
    if ( v17 )
      v18 = -1LL;
    v26[0] = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v26[0];
    if ( !v26[0] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
        (const char *)0x8007000ELL);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v26, v20);
      return 2147942414LL;
    }
    if ( HidP_GetUsages(
           HidP_Input,
           0xDu,
           0,
           (PUSAGE)v26[0],
           &UsageLength,
           *((PHIDP_PREPARSED_DATA *)this + 6),
           Report,
           ReportLength) >= 0 )
    {
      while ( v6 < UsageLength )
      {
        if ( v19[v6] == 162 )
        {
          *((_BYTE *)v15 + 16) = 1;
          break;
        }
        ++v6;
      }
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v26, v21);
  }
  return 0LL;
}
