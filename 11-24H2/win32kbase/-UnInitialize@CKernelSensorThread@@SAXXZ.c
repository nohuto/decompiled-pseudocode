/*
 * XREFs of ?UnInitialize@CKernelSensorThread@@SAXXZ @ 0x14019F0E8
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CKernelSensorThread::UnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 3112) )
  {
    v2 = *(void (__fastcall ****)(_QWORD, __int64))(W32GetUserSessionState(v1) + 3112);
    if ( v2 )
      (**v2)(v2, 1LL);
    *(_QWORD *)(W32GetUserSessionState(v2) + 3112) = 0LL;
  }
}
