/*
 * XREFs of ??1?$unique_ptr@UDockDeviceInfo@@U?$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800D9F74
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA4E0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1801CE494 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<DockDeviceInfo>::~unique_ptr<DockDeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x694);
}
