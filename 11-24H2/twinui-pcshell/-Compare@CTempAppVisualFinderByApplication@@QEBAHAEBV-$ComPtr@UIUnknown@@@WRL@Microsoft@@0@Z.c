/*
 * XREFs of ?Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1805469F8
 * Callers:
 *     ?GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z @ 0x180546C60 (-GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UITemporaryAppVisual@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805465AC (--$As@UITemporaryAppVisual@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTempAppVisualFinderByApplication::Compare(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = a3;
  v8[0] = 0LL;
  v4 = -1;
  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ITemporaryAppVisual>(a2, v8) >= 0 )
  {
    v5 = v8[0];
    v10 = 0LL;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8[0] + 40LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( v6(v5, &v10) >= 0 && v10 )
    {
      LODWORD(v9) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 104LL))(v10, *a1, &v9);
      v4 = ((_DWORD)v9 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v8);
  return v4;
}
