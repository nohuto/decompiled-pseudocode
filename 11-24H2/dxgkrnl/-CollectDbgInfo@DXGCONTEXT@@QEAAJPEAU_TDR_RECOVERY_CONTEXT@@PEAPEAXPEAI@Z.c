/*
 * XREFs of ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1401B849C
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1401AB294 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGCONTEXT::CollectDbgInfo(
        DXGCONTEXT *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // rcx

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1677;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1677LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *a4 < 0x40 )
    return 2147483653LL;
  v8 = (char *)*a3;
  *(_DWORD *)v8 = 1953394499;
  *((_DWORD *)v8 + 1) = *((_DWORD *)this + 36);
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 200);
  *(_OWORD *)(v8 + 24) = *(_OWORD *)((char *)this + 216);
  *((_DWORD *)v8 + 10) = *((_DWORD *)this + 95);
  *((_DWORD *)v8 + 11) = *((_DWORD *)this + 96);
  *((_DWORD *)v8 + 12) = *((_DWORD *)this + 98);
  *((_DWORD *)v8 + 13) = *((_DWORD *)this + 104);
  *((_DWORD *)v8 + 14) = *((_DWORD *)this + 105);
  *((_DWORD *)v8 + 15) = *((_DWORD *)this + 106);
  *a3 = (char *)*a3 + 64;
  *a4 -= 64;
  return 0LL;
}
