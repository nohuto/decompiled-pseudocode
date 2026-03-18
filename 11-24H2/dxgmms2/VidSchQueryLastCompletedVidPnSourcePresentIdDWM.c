/*
 * XREFs of VidSchQueryLastCompletedVidPnSourcePresentIdDWM @ 0x14000A770
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14000B550 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 */

__int64 __fastcall VidSchQueryLastCompletedVidPnSourcePresentIdDWM(
        KSPIN_LOCK *a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4)
{
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v14[5]; // [rsp+70h] [rbp-58h] BYREF

  if ( a4 )
  {
    if ( a2 < *((_DWORD *)a1 + 10) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      memset(v14, 0, sizeof(v14));
      KeAcquireInStackQueuedSpinLock(a1 + 248, &LockHandle);
      VidSchQueryLastCompletedPresentIdDWMInternal(
        (struct _VIDSCH_GLOBAL *)a1,
        0LL,
        a2,
        a3,
        (struct _D3DKMT_PRESENT_STATS_DWM2 *)v14);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = 0LL;
      v9 = v14[1];
      *a4 = v14[0];
      v10 = v14[2];
      a4[1] = v9;
      v11 = v14[3];
      a4[2] = v10;
      v12 = v14[4];
      a4[3] = v11;
      a4[4] = v12;
      return result;
    }
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 8317;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8306;
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 3221225485LL;
}
