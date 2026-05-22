/*
 * XREFs of ?OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x18007CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180140C3C (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AnimationTargetClientProxy::OnDisconnected(AnimationTargetClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v4; // rax
  struct AnimationTargetClientProxy *v5; // rdx

  if ( *((_QWORD *)this + 9) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v4 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnTargetAnimationDataChange(v4, v5, *((_QWORD *)this + 9), 0LL);
  }
  return 0LL;
}
