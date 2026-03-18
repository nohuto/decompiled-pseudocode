/*
 * XREFs of ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1401F2890
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14004FB0C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
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
