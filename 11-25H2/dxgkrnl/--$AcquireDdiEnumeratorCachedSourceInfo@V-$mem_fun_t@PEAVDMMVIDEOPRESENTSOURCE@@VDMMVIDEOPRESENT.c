/*
 * XREFs of ??$AcquireDdiEnumeratorCachedSourceInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTSOURCE@@VDMMVIDEOPRESENTSOURCESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x14026077C
 * Callers:
 *     ?AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x140259170 (-AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRE.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x140010FF0 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@?$Set@VDMMVIDEOPRESENTSOURCE@@@@SAPEAV12@QEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14008F80C (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_SOURCE@@@-$Set@VDMMVIDEOPRESENTSOURCE@@@.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AcquireDdiEnumeratorCachedSourceInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTSOURCE *,DMMVIDEOPRESENTSOURCESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  void *Instance; // rax
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  char *v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 217;
  }
  v7 = *(__int64 (__fastcall **)(__int64))a2;
  v8 = a1 + *(int *)(a2 + 8);
  *a3 = 0LL;
  v9 = v7(v8);
  v13 = v9;
  if ( !v9 )
    return 3223192324LL;
  v18 = 0LL;
  Instance = (void *)Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(
                       v9,
                       v10,
                       v11,
                       v12);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v18, Instance);
  if ( v18 )
  {
    v16 = *(_DWORD *)(v13 + 24);
    v17 = v18 + 16;
    *a3 = v18 + 16;
    *v17 = v16;
  }
  else
  {
    v3 = -1073741801;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  return v3;
}
