/*
 * XREFs of ??1?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@std@@QEAA@XZ @ 0x1800D9F98
 * Callers:
 *     ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800DA1F0 (-CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::unique_ptr<DockDevice>::~unique_ptr<DockDevice>(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
