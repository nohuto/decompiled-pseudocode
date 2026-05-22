/*
 * XREFs of ??0?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800B5CA8
 * Callers:
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x1800B7BA4 (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 *     ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x1800BEA40 (-OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rax

  *a1 = a2;
  if ( a2 )
  {
    v3 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    (**v3)(v3);
  }
  return a1;
}
