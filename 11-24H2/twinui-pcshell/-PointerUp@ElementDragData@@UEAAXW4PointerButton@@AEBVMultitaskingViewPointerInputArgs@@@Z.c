/*
 * XREFs of ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DD420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ??0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z @ 0x1804DC550 (--0DragAndDropArgs@@QEAA@W4DragEffects@@PEAUIUnknown@@M@Z.c)
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804DCABC (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z @ 0x1804DCCF8 (-FinishDrag@ElementDragData@@AEAAXW4DropEffect@@@Z.c)
 *     ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1804DD07C (-GetExternalDragProgress@ElementDragData@@AEAAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ElementDragData::PointerUp(__int64 a1, int a2, const struct MultitaskingViewPointerInputArgs *a3)
{
  float ExternalDragProgress; // xmm0_4
  unsigned int v7; // eax
  _BYTE v8[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v10[80]; // [rsp+40h] [rbp-58h] BYREF

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 184,
    (__int64)v10);
  if ( *(_DWORD *)(a1 + 88) == a2 )
  {
    ElementDragData::DragOver((ElementDragData *)a1, a3);
    if ( *(_DWORD *)(a1 + 520) == 2 )
    {
      *(_DWORD *)(a1 + 88) = 0;
    }
    else
    {
      ExternalDragProgress = ElementDragData::GetExternalDragProgress((ElementDragData *)a1);
      DragAndDropArgs::DragAndDropArgs((__int64)v8, *(_DWORD *)(a1 + 176), *(_QWORD *)(a1 + 24), ExternalDragProgress);
      v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const struct MultitaskingViewPointerInputArgs *))(**(_QWORD **)(a1 + 40) + 472LL))(
             *(_QWORD *)(a1 + 40),
             v8,
             a3);
      ElementDragData::FinishDrag(a1, v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v9);
    }
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
}
