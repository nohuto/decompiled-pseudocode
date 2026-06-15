/*
 * XREFs of ??1CStandardEvent@@UEAA@XZ @ 0x180105724
 * Callers:
 *     ??_GCStandardEvent@@UEAAPEAXI@Z @ 0x180105C60 (--_GCStandardEvent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002741C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 */

void __fastcall CStandardEvent::~CStandardEvent(void **this)
{
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
