/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140188D70
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x140156ED0 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this)
{
  __int64 v2; // rcx

  if ( isInputVirtualizationEnabled((__int64)this) && IsInputThread(v2) )
    CIVChannel::Initialize((CHidInput *)((char *)this + 1264));
  ForceUpdatePointerDeviceSystemMetrics(v2);
  return 0LL;
}
