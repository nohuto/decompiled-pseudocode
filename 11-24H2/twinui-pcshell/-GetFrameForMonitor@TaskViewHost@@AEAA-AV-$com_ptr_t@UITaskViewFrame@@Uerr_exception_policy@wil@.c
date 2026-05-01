/*
 * XREFs of ?GetFrameForMonitor@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@@Z @ 0x1806A482C
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1806A4980 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall TaskViewHost::GetFrameForMonitor(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rsi

  v3 = *(__int64 **)(a1 + 320);
  v5 = *(__int64 **)(a1 + 328);
  while ( v3 != v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v3 + 24LL))(*v3, a3) )
    {
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        a2,
        v3);
      return a2;
    }
    ++v3;
  }
  *a2 = 0LL;
  return a2;
}
