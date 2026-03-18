/*
 * XREFs of ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0
 * Callers:
 *     RIMInitializeDeadzone @ 0x140124D60 (RIMInitializeDeadzone.c)
 *     rimDestroyDeadzone @ 0x140125368 (rimDestroyDeadzone.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x140125418 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14019CF00 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     RIMDestroyPointerDeviceDeadzone @ 0x1401DA310 (RIMDestroyPointerDeviceDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EA2B8 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x140125508 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1401F21F0 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 */

void __fastcall RIMDeadzone::Release(char **this)
{
  DeadzonePalmTelemetry *v3; // rcx

  if ( (*((_DWORD *)this + 1))-- == 1 )
  {
    RIMDeadzone::_ClearDeadzoneAreas((RIMDeadzone *)this);
    v3 = (DeadzonePalmTelemetry *)this[7];
    if ( v3 )
    {
      DeadzonePalmTelemetry::ClearSession(v3);
      GreDeleteFastMutex(this[7]);
    }
  }
}
