/*
 * XREFs of ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802C14AC
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180239090 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006C940 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18006D76C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x18006F178 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalD3DRenderer::Create(
        struct CD3DDevice *a1,
        struct IUnknown *a2,
        struct CExternalD3DRenderer **a3)
{
  CD3DResource *v6; // rax
  CD3DResource *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // ebx
  struct CMILPoolResource *v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CD3DResource *)MIDL_user_allocate(0x80uLL);
  v7 = v6;
  if ( v6 )
  {
    CD3DResource::CD3DResource(v6, 0LL);
    *(_QWORD *)v7 = &CExternalD3DRenderer::`vftable';
    *((_QWORD *)v7 + 15) &= v8;
    CMILRefCountImpl::AddReference((CD3DResource *)((char *)v7 + 8));
    *((_DWORD *)v7 + 28) = 0;
    *((_QWORD *)v7 + 5) = (char *)a1 + 1120;
    *((_BYTE *)v7 + 118) = 1;
    CD3DResourceManager::RegisterResource((struct CD3DDevice *)((char *)a1 + 1120), v7);
    v9 = *((_QWORD *)v7 + 15);
    *((_QWORD *)v7 + 15) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = 0LL;
    *a3 = v7;
    v10 = 0;
  }
  else
  {
    v12 = 0LL;
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(&v12);
  return v10;
}
