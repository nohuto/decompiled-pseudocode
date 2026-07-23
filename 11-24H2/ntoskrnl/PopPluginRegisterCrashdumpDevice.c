/*
 * XREFs of PopPluginRegisterCrashdumpDevice @ 0x1404C8080
 * Callers:
 *     PoFxRegisterCrashdumpDevice @ 0x140AA5F10 (PoFxRegisterCrashdumpDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginRegisterCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v6[1] = a2;
  v6[0] = 0LL;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(25LL, v6) && v6[0] )
    *(_QWORD *)(a3 + 632) = v6[0];
  else
    return (unsigned int)-1073741637;
  return v3;
}
