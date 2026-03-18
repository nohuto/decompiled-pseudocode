/*
 * XREFs of ForceUpdatePointerDeviceSystemMetrics @ 0x140156ED0
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140188D70 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ @ 0x140156EF8 (-ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ.c)
 */

void __fastcall ForceUpdatePointerDeviceSystemMetrics(__int64 a1)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1);
  CInputSystemMetrics::ForceUpdatePointerDeviceSystemMetrics(*(CInputSystemMetrics **)(UserSessionState + 19008));
}
