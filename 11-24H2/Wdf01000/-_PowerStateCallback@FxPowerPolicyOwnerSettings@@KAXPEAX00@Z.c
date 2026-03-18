/*
 * XREFs of ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x140030130
 * Callers:
 *     <none>
 * Callees:
 *     ?PopPowerTransitionRecord@FxWaitLockInternal@@QEAAXXZ @ 0x14002FDFC (-PopPowerTransitionRecord@FxWaitLockInternal@@QEAAXXZ.c)
 *     ?PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ @ 0x1400301DC (-PushPowerTransitionRecord@FxWaitLockInternal@@QEAAJXZ.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1400318C4 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x140032070 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140033950 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::_PowerStateCallback(void *Context, void *Argument1, void *Argument2)
{
  FxWaitLockInternal *v4; // rbp
  int v6; // ebx
  _FX_DRIVER_GLOBALS *v7; // rdx
  _FX_DRIVER_GLOBALS *v8; // rdx
  FxWaitLockInternal *v9; // rcx
  FxPkgPnp *v10; // rcx

  if ( Argument1 == (void *)3 )
  {
    v4 = (FxWaitLockInternal *)(*((_QWORD *)Context + 78) + 736LL);
    v6 = FxWaitLockInternal::PushPowerTransitionRecord(v4);
    FxWaitLockInternal::AcquireLock(v4, v7, 0LL);
    if ( v6 >= 0 )
      FxWaitLockInternal::PopPowerTransitionRecord(v9);
    if ( Argument2 )
    {
      if ( Argument2 == (void *)1 )
      {
        v10 = (FxPkgPnp *)*((_QWORD *)Context + 78);
        *((_BYTE *)Context + 918) = 1;
        FxPkgPnp::SaveState(v10, 1u);
      }
    }
    else
    {
      FxPkgPnp::SaveState(*((FxPkgPnp **)Context + 78), 1u);
      *((_BYTE *)Context + 918) = 0;
    }
    FxWaitLockInternal::ReleaseLock(v4, v8);
  }
}
