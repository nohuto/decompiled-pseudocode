/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x140100500
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400FC880 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1400340C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x140038A94 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x14004167C (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400BE8F8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC **a2, struct DXGPUSHLOCKBASE *a3)
{
  _QWORD *v3; // rdi
  char v4; // si
  __int64 v8; // rax
  char v9; // cl
  bool v10; // bl
  __int64 v11; // rbx
  DXGDEVICE *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)*a2 + 2) + 8LL) + 40LL);
  v16 = v8;
  if ( v8 )
  {
    if ( *(struct _KTHREAD **)(v8 + 192) == KeGetCurrentThread() )
      v16 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 184));
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, a1 + 5589, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v9 = *((_BYTE *)v3 + 25);
  v15 = 2;
  *((_BYTE *)v3 + 25) = v9 & 0xFD;
  if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
  {
    v10 = VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)v3, 1, 1);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    if ( v10 )
      VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)v3, 2, 0);
    v4 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16);
  if ( a3 )
  {
    ExReleasePushLockExclusiveEx(a3, 0LL);
    KeLeaveCriticalRegion();
  }
  v11 = v3[2];
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v3 + 31);
  *a2 = 0LL;
  if ( v4 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v12,
      (*(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) >> 6) & 0xF,
      (struct DXGALLOCATION *)v11);
}
