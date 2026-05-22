/*
 * XREFs of ?SetData@AnimationTargetClientProxy@@QEAAXAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180146150
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180143610 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 *     ?OnDataChanging@AnimationTargetClientProxy@@MEAAJAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180146120 (-OnDataChanging@AnimationTargetClientProxy@@MEAAJAEBUGestureAnimationData@Input@Internal@UI@Wind.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x180142E0C (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall AnimationTargetClientProxy::SetData(
        AnimationTargetClientProxy *this,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v5; // rax
  struct AnimationTargetClientProxy *v6; // rdx

  if ( *((_QWORD *)this + 9) != *(_QWORD *)a2 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v5 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnTargetAnimationDataChange(v5, v6, *((_QWORD *)this + 9), *(_QWORD *)a2);
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)a2;
  }
}
