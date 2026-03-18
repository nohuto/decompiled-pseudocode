/*
 * XREFs of PopPluginRegisterCrashdumpDevice @ 0x1404CEEB4
 * Callers:
 *     PoFxRegisterCrashdumpDevice @ 0x140AAACE0 (PoFxRegisterCrashdumpDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginRegisterCrashdumpDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v7[1] = a2;
  v7[0] = 0LL;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(25LL, v7, a3, a4) && v7[0] )
    *(_QWORD *)(a3 + 632) = v7[0];
  else
    return (unsigned int)-1073741637;
  return v4;
}
