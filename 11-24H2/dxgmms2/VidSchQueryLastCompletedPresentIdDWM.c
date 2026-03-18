/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x14000B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14000B550 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(struct _VIDSCH_DEVICE *a1, unsigned int a2, _OWORD *a3)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  __int128 v13; // [rsp+70h] [rbp-58h] BYREF
  __int128 v14; // [rsp+80h] [rbp-48h]
  __int128 v15; // [rsp+90h] [rbp-38h]
  __int128 v16; // [rsp+A0h] [rbp-28h]
  __int128 v17; // [rsp+B0h] [rbp-18h]

  if ( a1 && a3 )
  {
    v6 = *((_QWORD *)a1 + 4);
    if ( a2 >= *(_DWORD *)(v6 + 40) )
    {
      WdLogSingleEntry2(3LL, a2, -1073741811LL);
      result = 3221225485LL;
      WdLogGlobalForLineNumber = 8368;
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1984), &LockHandle);
      VidSchQueryLastCompletedPresentIdDWMInternal(
        (struct _VIDSCH_GLOBAL *)v6,
        a1,
        a2,
        0,
        (struct _D3DKMT_PRESENT_STATS_DWM2 *)&v13);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = 0LL;
      v8 = v14;
      *a3 = v13;
      v9 = v15;
      a3[1] = v8;
      v10 = v16;
      a3[2] = v9;
      v11 = v17;
      a3[3] = v10;
      a3[4] = v11;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8356;
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
    return 3221225485LL;
  }
  return result;
}
