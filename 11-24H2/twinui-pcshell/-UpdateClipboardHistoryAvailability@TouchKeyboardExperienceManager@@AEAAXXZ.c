/*
 * XREFs of ?UpdateClipboardHistoryAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802004D8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_::operator() @ 0x18046F580 (wistd--__function--__func__lambda_d866c096dc72da78723f550d5b3c8da9__void___cdecl(void)_--operato.c)
 * Callees:
 *     Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU @ 0x18020053C (Windows--ApplicationModel--Internal--DataTransfer--IsCloudAndHistoryFeatureSupportedSKU.c)
 *     ?GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z @ 0x1802005B0 (-GetMdmIntPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SAHPEBGH@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateClipboardHistoryAvailability(
        TouchKeyboardExperienceManager *this)
{
  __int64 v2; // r8
  char v3; // bl

  if ( !(unsigned __int8)Windows::ApplicationModel::Internal::DataTransfer::IsCloudAndHistoryFeatureSupportedSKU()
    || (v3 = 1,
        !(unsigned int)KeyboardHosting::TextInputMdmPolicyHelper::GetMdmIntPolicyValue(L"AllowClipboardHistory", 1)) )
  {
    v3 = 0;
  }
  LOBYTE(v2) = v3;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 73) + 48LL) + 176LL))(
    *(_QWORD *)(*((_QWORD *)this + 73) + 48LL),
    5LL,
    v2);
}
