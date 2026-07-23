/*
 * XREFs of CcRescheduleLazyWriteScan @ 0x1402652C4
 * Callers:
 *     CcCoalescingCallBackHelper @ 0x140264D90 (CcCoalescingCallBackHelper.c)
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScan(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1292) )
    return;
  if ( !*(_BYTE *)(a1 + 1049) )
  {
    CcScheduleLazyWriteScan((_BYTE *)a1, 0LL, 0, 0);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * KeMaximumIncrement;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = CcIdleDelay;
      if ( v3.QuadPart <= 0 )
        goto LABEL_16;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_16:
  if ( !*(_BYTE *)(a1 + 1048) )
    KeBugCheckEx(0x34u, 0x403uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 984), v3, 0, 0x3E8u, 0LL);
}
