/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1400C0C14
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x140043460 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140033DC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x140040F28 (-AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1400C06F4 (-VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400C2210 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(struct _KEVENT *this, struct DXGALLOCATION *a2)
{
  __int64 v2; // rbp
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  char v9; // cl
  __int64 result; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 3);
  v5 = 0;
  if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)this) || *(_BYTE *)(v7 + 7016) )
  {
    WdLogSingleEntry1(4LL, v6);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 7446;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v7 + 44712), 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    v13 = 2;
    v8 = *(_BYTE *)(v2 + 25);
    if ( (v8 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 25) = v8 & 0xFB;
      DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
      DxgkUnreferenceDxgAllocation(a2);
    }
    else
    {
      v5 = VidMmUnpinAllocAsync((struct VIDMM_GLOBAL *)this, a2);
      if ( v5 >= 0 )
      {
        WdLogSingleEntry2(4LL, v2, a2);
        v9 = *(_BYTE *)(v2 + 25) & 0xFB;
        WdLogGlobalForLineNumber = 7481;
        *(_BYTE *)(v2 + 25) = v9 | 2;
        DXGINVERSESEMAPHORE::AcquireInverseSemaphore(this + 1852);
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
    return (unsigned int)v5;
  }
  return result;
}
