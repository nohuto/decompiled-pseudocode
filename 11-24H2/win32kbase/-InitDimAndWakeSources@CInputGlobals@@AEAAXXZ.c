/*
 * XREFs of ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140145E64
 * Callers:
 *     ??0CInputGlobals@@AEAA@XZ @ 0x140145DEC (--0CInputGlobals@@AEAA@XZ.c)
 * Callees:
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1400A7680 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     ApiSetGetUndimSourceInputTypeMask @ 0x1402224A0 (ApiSetGetUndimSourceInputTypeMask.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputGlobals::InitDimAndWakeSources(CInputGlobals *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  int (*v6)(void); // rax

  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 48);
  v5 = *(int (**)(void))(v3 + 7312);
  if ( v5 && v5() >= 0 )
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(this);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 7328LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
      *((_DWORD *)this + 37) = ApiSetGetUndimSourceInputTypeMask();
  }
}
