/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18029FF40
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x180095B30 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801BB26C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CNaturalAnimationScalarForceAdapater@@QEAA@XZ @ 0x18029FCB4 (--0CNaturalAnimationScalarForceAdapater@@QEAA@XZ.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x18029FE4C (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct IUnknownWeakRef *a5)
{
  struct IUnknownWeakRef *v5; // r15
  _OWORD *v8; // rax
  CNaturalAnimationScalarForceAdapater *v9; // rax
  CNaturalAnimationScalarForceAdapater *v10; // rbx
  CNaturalAnimationScalarForceAdapater *v11; // rbp
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rax
  signed int WeakReference; // eax
  struct IUnknownWeakRef *v16; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = operator new(0x28uLL);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *((_QWORD *)v8 + 4) = 0LL;
    v9 = CNaturalAnimationScalarForceAdapater::CNaturalAnimationScalarForceAdapater((CNaturalAnimationScalarForceAdapater *)v8);
    v10 = v9;
    v11 = v9;
    if ( v9 )
      (**(void (__fastcall ***)(CNaturalAnimationScalarForceAdapater *))v9)(v9);
  }
  else
  {
    v11 = 0LL;
    v10 = 0LL;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(0x80070057, retaddr);
    *(float *)(a1 + 360) = a4;
    *(float *)(a1 + 324) = a3;
  }
  else
  {
    *(float *)(a1 + 356) = a4;
    *(float *)(a1 + 320) = a3;
  }
  *(_BYTE *)(a1 + 572) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v12 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x39Bu, 0LL);
    if ( v10 )
      (*(void (__fastcall **)(CNaturalAnimationScalarForceAdapater *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
    a5 = 0LL;
    *((_QWORD *)v11 + 3) = v14;
    *((_DWORD *)v11 + 4) = a2;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&a5);
    WeakReference = CResource::GetWeakReference((CResource *)a1, &a5);
    if ( WeakReference < 0 )
      ModuleFailFastForHRESULT(WeakReference, retaddr);
    v16 = a5;
    a5 = 0LL;
    *((_QWORD *)v11 + 4) = v16;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&a5);
    v13 = 0;
    *(_QWORD *)v5 = v11;
  }
  return v13;
}
