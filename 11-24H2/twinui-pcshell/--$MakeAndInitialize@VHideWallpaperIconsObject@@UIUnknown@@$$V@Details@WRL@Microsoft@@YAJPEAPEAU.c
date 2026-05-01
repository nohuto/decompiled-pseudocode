/*
 * XREFs of ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180682C20
 * Callers:
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x180682D68 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B714 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802277E4 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x180682E4C (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HideWallpaperIconsObject,IUnknown,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  HideWallpaperIconsObject *v3; // rbx
  int v4; // edi
  HideWallpaperIconsObject *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v3 = (HideWallpaperIconsObject *)v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v2);
    v8 = 0LL;
    *(_QWORD *)v3 = &HideWallpaperIconsObject::`vftable';
    *((_BYTE *)v3 + 16) = 0;
    v4 = HideWallpaperIconsObject::RuntimeClassInitialize(v3);
    v5 = v3;
    v6 = *(_QWORD *)v3;
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(HideWallpaperIconsObject *, GUID *, _QWORD *))v6)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
      v5 = v3;
      v6 = *(_QWORD *)v3;
    }
    (*(void (__fastcall **)(HideWallpaperIconsObject *))(v6 + 16))(v5);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v8);
  return (unsigned int)v4;
}
