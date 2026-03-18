/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1801AFCA0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x18025F4F4 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18025F8A0 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180068F70 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801AFE90 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  __int64 v2; // rsi
  CD3DResource *v3; // rcx
  volatile signed __int32 *v4; // rdi
  int v5; // ebx
  CGlobalComposition *v6; // rcx
  void (__fastcall *v7)(CScratchRenderTargetBitmap *__hidden); // rax
  int v8; // ebx
  CGlobalDrawingContext *(__fastcall *v9)(CGlobalDrawingContext *, char); // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  _QWORD *i; // r14
  struct CMILPoolResource *v14; // rcx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CD3DResource::RemoveResourceNotifier(v3, this);
    v10 = *((_QWORD *)this + 3);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 120);
      if ( v11 )
      {
        v12 = (_QWORD *)*((_QWORD *)this + 5);
        for ( i = (_QWORD *)*((_QWORD *)this + 6); v12 != i; ++v12 )
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 8LL))(*v12, v11);
      }
    }
    v14 = (struct CMILPoolResource *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v14 )
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v14);
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 2) == 2 )
    {
      v6 = g_pComposition;
      if ( g_pComposition )
        v2 = *((_QWORD *)g_pComposition + 111);
      *((_QWORD *)v4 + 186) = v2 + 5;
      if ( v6 && *((_BYTE *)v6 + 6473) )
        CComposition::ScheduleCompositionPass((__int64)v6, 0x3E8u, 0x20000u);
    }
    v5 = _InterlockedDecrement(v4 + 2);
    if ( v5 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v15);
    if ( !v5 )
    {
      if ( _InterlockedAdd(v4 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v15);
      v7 = *(void (__fastcall **)(CScratchRenderTargetBitmap *__hidden))(*(_QWORD *)v4 + 32LL);
      if ( v7 == CScratchRenderTargetBitmap::FinalRelease )
        CScratchRenderTargetBitmap::FinalRelease((CScratchRenderTargetBitmap *)v4);
      else
        v7((CScratchRenderTargetBitmap *)v4);
      v8 = _InterlockedDecrement(v4 + 2);
      if ( v8 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v15);
      if ( !v8 )
      {
        if ( _InterlockedDecrement(v4 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v15);
        v9 = *(CGlobalDrawingContext *(__fastcall **)(CGlobalDrawingContext *, char))(*(_QWORD *)v4 + 24LL);
        if ( v9 == CGlobalDrawingContext::`vector deleting destructor' )
          CGlobalDrawingContext::`vector deleting destructor'((CGlobalDrawingContext *)v4, 1);
        else
          v9((CGlobalDrawingContext *)v4, 1);
      }
    }
  }
}
