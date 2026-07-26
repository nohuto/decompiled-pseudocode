/*
 * XREFs of NdisMSetTimer @ 0x140070480
 * Callers:
 *     NdisSetTimer @ 0x140070420 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1400DBA60 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1400DBAB0 (NdisSetTimerEx.c)
 *     ?ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400DC9D0 (-ndisMTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  char v10[4]; // [rsp+38h] [rbp-10h]

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 144);
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3760) + 26LL) & 2) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v7 = *(_QWORD *)(a1 + 144);
    v8 = *(_QWORD *)(v7 + 560);
    v9 = v8;
    if ( v8 )
    {
      while ( v9 != a1 )
      {
        v9 = *(_QWORD *)(v9 + 152);
        if ( !v9 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      *(_QWORD *)(a1 + 152) = v8;
      *(_QWORD *)(v7 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v6);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v2;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0xAu,
      (struct _GUID *)&WPP_a2b6dbcfb567359ff6487843a1f14dac_Traceguids,
      *(_QWORD *)(a1 + 144),
      a1,
      *(_DWORD *)v10);
  }
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)(-10000 * v2), (PKDPC)(a1 + 64));
}
