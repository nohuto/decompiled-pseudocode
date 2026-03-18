/*
 * XREFs of ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x180103760
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18010368C (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18010407C (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(
        CGlobalCompositionSurfaceInfo *this,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3)
{
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax
  int v5; // eax
  CGlobalCompositionSurfaceInfo *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0LL;
  *((struct _LUID *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = (char *)this + 96;
  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CGlobalCompositionSurfaceInfo::`vftable';
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 14) = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *(_QWORD *)((char *)this + 292) = 256LL;
  *((_WORD *)this + 150) = 1;
  *((_BYTE *)this + 302) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = -1;
  *(_QWORD *)((char *)this + 324) = 0LL;
  *((_DWORD *)this + 83) = 0;
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    v5 = (*(__int64 (__fastcall **)(struct IVtrSurfaceManager *))(*(_QWORD *)VtrSurfaceManager + 64LL))(VtrSurfaceManager);
  else
    v5 = 0;
  *((_DWORD *)this + 104) = v5;
  result = this;
  *(_QWORD *)((char *)this + 420) = 0LL;
  *((_DWORD *)this + 107) = 0;
  *((_BYTE *)this + 432) = 0;
  return result;
}
