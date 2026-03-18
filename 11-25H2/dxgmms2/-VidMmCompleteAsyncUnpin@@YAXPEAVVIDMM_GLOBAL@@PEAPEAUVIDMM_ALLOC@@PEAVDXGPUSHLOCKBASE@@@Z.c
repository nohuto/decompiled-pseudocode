/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400CE1FC
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400CDFC0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140033DC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400393B4 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x140039838 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x140042C7C (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400CE3B8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC **a2, struct DXGPUSHLOCKBASE *a3)
{
  _QWORD *v3; // rdi
  char v7; // si
  __int64 v8; // r9
  char v9; // cl
  char v10; // bl
  __int64 v11; // rbx
  DXGDEVICE *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a2;
  v7 = 0;
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
    (DXGPROCESSVIDMMLOCK *)&v16,
    *(struct DXGPROCESS **)(*(_QWORD *)(*((_QWORD *)*a2 + 2) + 8LL) + 40LL));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, a1 + 5589, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v9 = *((_BYTE *)v3 + 25);
  v15 = 2;
  *((_BYTE *)v3 + 25) = v9 & 0xFD;
  if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
  {
    LOBYTE(v8) = 1;
    v10 = VIDMM_GLOBAL::UnpinOneAllocation(a1, v3, 1LL, v8);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    if ( v10 )
      VIDMM_GLOBAL::UnpinOneAllocation(a1, v3, 2LL, 0LL);
    v7 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16);
  if ( a3 )
  {
    ExReleasePushLockExclusiveEx(a3, 0LL);
    KeLeaveCriticalRegion();
  }
  v11 = v3[2];
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v3 + 29);
  *a2 = 0LL;
  if ( v7 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v12,
      (*(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) >> 6) & 0xF,
      (struct DXGALLOCATION *)v11);
}
