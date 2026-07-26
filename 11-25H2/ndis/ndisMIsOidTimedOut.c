/*
 * XREFs of ndisMIsOidTimedOut @ 0x14003DD40
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14003CEF0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ??1MiniportSpinLock@@QEAA@XZ @ 0x14003DE70 (--1MiniportSpinLock@@QEAA@XZ.c)
 */

char __fastcall ndisMIsOidTimedOut(__int64 a1)
{
  int i; // edi
  int v3; // eax
  __int16 v5; // cx
  __int64 v6; // [rsp+40h] [rbp-18h] BYREF
  KIRQL v7; // [rsp+48h] [rbp-10h]
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    return 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      Interval.QuadPart = -2500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v6 = a1;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 1864) = KeGetCurrentThread();
    v3 = *(_DWORD *)(a1 + 4420);
    if ( (v3 & 1) == 0 )
      goto LABEL_7;
    if ( (v3 & 2) == 0 )
    {
      v5 = *(_WORD *)(a1 + 1822);
      if ( v5 )
        *(_WORD *)(a1 + 1822) = v5 - 1;
      else
        *(_DWORD *)(a1 + 4420) = v3 | 2;
LABEL_7:
      MiniportSpinLock::~MiniportSpinLock((MiniportSpinLock *)&v6);
      return 0;
    }
    MiniportSpinLock::~MiniportSpinLock((MiniportSpinLock *)&v6);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x11u,
      0xAu,
      (struct _GUID *)&WPP_bbcca2468c6c34318e9f260dcf80966e_Traceguids,
      a1,
      *(_QWORD *)(a1 + 2208));
  return 1;
}
