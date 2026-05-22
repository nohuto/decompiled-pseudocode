/*
 * XREFs of ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180199D80
 * Callers:
 *     ?Initialize@TouchpadHapticDevice@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180185654 (-Initialize@TouchpadHapticDevice@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_invalid_.c)
 *     ?Initialize@MouseHapticDevice@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180188CAC (-Initialize@MouseHapticDevice@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_invalid_res.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CA0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 *     ?ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019AB78 (-ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 *     ?ReportValidationMessage@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019ABA4 (-ReportValidationMessage@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x18019AF24 (-replace@-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-HidD_FreeP.c)
 */

__int64 __fastcall CompliantHapticInterface::Initialize(void **this, void **a2, CompliantHapticInterface *a3)
{
  int HapticsSupport; // eax
  unsigned int v7; // edi
  char v9; // di
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this != a2 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this,
      *a2);
    *a2 = (void *)-1LL;
  }
  if ( this + 1 != (void **)a3 )
    wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::replace(
      this + 1,
      a3);
  HapticsSupport = CompliantHapticInterface::QueryHapticsSupport((CompliantHapticInterface *)this);
  v7 = HapticsSupport;
  if ( HapticsSupport < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
      (const char *)(unsigned int)HapticsSupport);
    return v7;
  }
  v9 = 0;
  if ( !*((_BYTE *)this + 152) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"Waveform capability is required");
  }
  if ( !*((_BYTE *)this + 228) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"Duration capability is required");
  }
  if ( !*((_BYTE *)this + 336) )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError((CompliantHapticInterface *)this, L"Manual trigger is required");
  }
  if ( !this[30] )
  {
    v9 = 1;
    CompliantHapticInterface::ReportValidationError(
      (CompliantHapticInterface *)this,
      L"At least one waveform is required");
  }
  if ( !*((_BYTE *)this + 440) && *((_BYTE *)this + 432) )
  {
    if ( *((_BYTE *)this + 441) )
    {
      CompliantHapticInterface::ReportValidationError((CompliantHapticInterface *)this, L"Unexpected autotrigger");
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\hid\\lib\\complianthapticinterface.cpp",
        (const char *)0x80004005LL);
      return 2147500037LL;
    }
    CompliantHapticInterface::ReportValidationMessage((CompliantHapticInterface *)this, L"Unexpected autotrigger");
  }
  if ( v9 )
    goto LABEL_21;
  return 0LL;
}
