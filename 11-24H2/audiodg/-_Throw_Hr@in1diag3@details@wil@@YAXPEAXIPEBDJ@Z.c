/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14005E804
 * Callers:
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x14004A724 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x1400556F0 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x14005B828 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
