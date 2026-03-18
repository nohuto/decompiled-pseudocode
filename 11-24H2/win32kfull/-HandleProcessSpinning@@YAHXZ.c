/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x140153110
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall HandleProcessSpinning(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // r8
  BOOL v4; // ecx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) >= 0x64uLL;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) >= 0x64uLL )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 520) + 8LL) = 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(v3 + 520) + 28LL) = _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)(v3 + 528),
                                                    0,
                                                    0) | 0x400;
  }
  if ( v4 && (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0x400) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 528), 0x400u);
    ForegroundBoost::UpdateProcessPriorityForSpinning((ForegroundBoost *)v3, 0LL);
  }
  return 1LL;
}
