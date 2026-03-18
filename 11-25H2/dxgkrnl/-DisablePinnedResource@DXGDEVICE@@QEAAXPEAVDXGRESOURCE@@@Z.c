/*
 * XREFs of ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1402E11B0
 * Callers:
 *     ?UnpinDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1402BB848 (-UnpinDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E15DC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedResource(DXGDEVICE *this, struct DXGRESOURCE *a2, unsigned int a3)
{
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  struct DXGALLOCATION *v10; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 511;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      511LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  for ( i = *((_QWORD *)a2 + 3); i; i = *(_QWORD *)(i + 64) )
  {
    v7 = *((_QWORD *)this + 2);
    v10 = (struct DXGALLOCATION *)i;
    v8 = *(_QWORD *)(v7 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 184)
      && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 168)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 482;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
        482LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(i + 72) & 0x800) != 0 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
        *(struct VIDMM_MULTI_ALLOC **)(i + 24));
      *(_DWORD *)(i + 72) &= ~0x800u;
    }
    v9 = *(_DWORD *)(*(_QWORD *)(i + 48) + 4LL);
    if ( (v9 & 0x2000) != 0 )
    {
      if ( *(_QWORD *)(i + 24) )
        DXGDEVICE::UnpinDirectFlipAllocation(this, (v9 >> 6) & 0xF, a3, &v10, 0LL);
    }
  }
}
