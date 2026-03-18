/*
 * XREFs of ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180297970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18029770C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneReady(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 (__fastcall *v6)(struct ISpectreRenderer *, _QWORD, _QWORD, char *); // rdi
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v9);
  if ( *((_QWORD *)this + 4) != v9 )
  {
    *((_QWORD *)this + 4) = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  }
  v4 = CCompositionMipmapSurface::EnsureMipmapSurface((struct _LUID *)this - 11);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x59u, 0LL);
  }
  else
  {
    v6 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v7 = v6(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 10) + 128LL),
           *(_QWORD *)(*((_QWORD *)this + 10) + 200LL),
           (char *)this + 64);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x5Cu, 0LL);
  }
  return v5;
}
