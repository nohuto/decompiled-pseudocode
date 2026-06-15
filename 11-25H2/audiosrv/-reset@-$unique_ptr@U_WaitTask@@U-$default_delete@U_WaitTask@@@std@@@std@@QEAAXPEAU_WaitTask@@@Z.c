/*
 * XREFs of ?reset@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAXPEAU_WaitTask@@@Z @ 0x180055A04
 * Callers:
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006D94C (--1CAudioStream@@UEAA@XZ.c)
 *     ??1AudioModeEffectsWatcher@@UEAA@XZ @ 0x1800A33AC (--1AudioModeEffectsWatcher@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@U_WaitTask@@@std@@$0A@@?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B3F7C (--$-4U-$default_delete@U_WaitTask@@@std@@$0A@@-$unique_ptr@U_WaitTask@@U-$default_delete@U_WaitT.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B43F0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 * Callees:
 *     ??1_WaitTask@@QEAA@XZ @ 0x180055A38 (--1_WaitTask@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_WaitTask>::reset(_WaitTask **a1, _WaitTask *a2)
{
  _WaitTask *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    _WaitTask::~_WaitTask(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x28);
  }
}
