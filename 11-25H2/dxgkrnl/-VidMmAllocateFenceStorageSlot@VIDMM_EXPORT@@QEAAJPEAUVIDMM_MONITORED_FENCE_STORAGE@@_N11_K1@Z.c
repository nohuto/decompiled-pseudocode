/*
 * XREFs of ?VidMmAllocateFenceStorageSlot@VIDMM_EXPORT@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x140046B4C
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x1401816A4 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D4BC8 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmAllocateFenceStorageSlot(
        VIDMM_EXPORT *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        __int64 a3,
        char a4,
        bool a5,
        unsigned __int64 a6,
        bool a7)
{
  char v7; // r11
  struct VIDMM_MONITORED_FENCE_STORAGE *v8; // rbx

  v7 = a3;
  v8 = a2;
  LOBYTE(a3) = a4;
  LOBYTE(a2) = v7;
  return (*(__int64 (__fastcall **)(struct VIDMM_MONITORED_FENCE_STORAGE *, struct VIDMM_MONITORED_FENCE_STORAGE *, __int64, _QWORD, unsigned __int64, bool))(*((_QWORD *)this + 1) + 864LL))(
           v8,
           a2,
           a3,
           0LL,
           a6,
           a7);
}
