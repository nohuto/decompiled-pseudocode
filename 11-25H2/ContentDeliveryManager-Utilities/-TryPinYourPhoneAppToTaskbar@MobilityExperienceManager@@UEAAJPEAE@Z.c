/*
 * XREFs of ?TryPinYourPhoneAppToTaskbar@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A7C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E6FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MobilityExperienceManager::TryPinYourPhoneAppToTaskbar(MobilityExperienceManager *this, bool *a2)
{
  unsigned int v3; // edi
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0;
  v8 = 0;
  if ( !(unsigned int)OOBEComplete(&v8) || (v3 = 4, v8) )
    v3 = 5;
  v10 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Taskbar.PinnedAuxiliaryItems",
    0x2Eu,
    0x2Du);
  ActivationFactory = RoGetActivationFactory(v12, &GUID_a58229bb_aa2f_4643_b94f_4f90309f1f2b, &v10);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v9 = 0;
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v10 + 56LL))(v10, v3, &v9);
    v5 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      *a2 = v9 >= 0;
      v5 = 0;
      goto LABEL_10;
    }
    v6 = 116LL;
  }
  else
  {
    v6 = 113LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_10:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v10);
  return v5;
}
