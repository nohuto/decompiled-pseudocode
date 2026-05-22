/*
 * XREFs of ?FindTransducerPropertiesFeatureReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x1801884B0
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall PenInterface::FindTransducerPropertiesFeatureReport(
        PenInterface *this,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int8 *a3)
{
  NTSTATUS SpecificValueCaps; // eax
  __int64 v6; // rdx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  USHORT v9[6]; // [rsp+44h] [rbp-C4h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-B8h] BYREF
  struct _HIDP_VALUE_CAPS v11; // [rsp+A0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength[0] = 1;
  memset_0(&v11, 0, sizeof(v11));
  v9[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x5Bu, &ValueCaps, ValueCapsLength, a2);
  if ( SpecificValueCaps < 0 )
  {
    v6 = 70LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)SpecificValueCaps);
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, ValueCaps.LinkCollection, 0x91u, &v11, v9, a2);
  if ( SpecificValueCaps < 0 )
  {
    v6 = 78LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
             (const char *)(unsigned int)SpecificValueCaps);
  }
  *a3 = ValueCaps.ReportID;
  return 0LL;
}
