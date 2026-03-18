/*
 * XREFs of ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1401ECE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x140348180 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, DXGSHAREDVMOBJECT *a3)
{
  struct _KPROCESS *v4; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+50h] [rbp-18h]

  if ( a2 == 13 && *(_DWORD *)a3 == 16 )
  {
    v4 = *(struct _KPROCESS **)(a1 + 24);
    v6 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v4);
    DXGSHAREDVMOBJECT::ReleaseReference(a3);
    CPROCESSATTACHHELPER::Detach(&ApcState);
  }
}
