/*
 * XREFs of PopPepCompleteComponentIdleState @ 0x1404CBFBC
 * Callers:
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepReleaseActivityLink @ 0x1402BE970 (PopPepReleaseActivityLink.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopPlNotifyDeviceFState @ 0x140357D50 (PopPlNotifyDeviceFState.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

void __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  char v3; // bp
  __int64 v5; // rdi
  volatile LONG *v6; // rsi
  KIRQL v7; // al
  KIRQL v8; // r14
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v5 = 208LL * a2 + a1 + 192;
  if ( !v5 || *(_DWORD *)(a1 + 180) == 1 )
  {
    v6 = (volatile LONG *)(a1 + 64);
  }
  else
  {
    v6 = (volatile LONG *)(a1 + 64);
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v8 = v7;
    if ( *(_BYTE *)(a1 + 125) != 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v5);
      goto LABEL_8;
    }
    ExReleaseSpinLockShared(v6, v7);
  }
  v3 = 1;
  v8 = ExAcquireSpinLockExclusive(v6);
  *(_BYTE *)(a1 + 125) = 1;
LABEL_8:
  v9 = *(_QWORD *)(v5 + 64);
  if ( *(_DWORD *)(v9 + 12) == 1 )
  {
    *(_DWORD *)(v9 + 12) = 2;
    v10 = *(_DWORD *)(v5 + 104) + *(_DWORD *)(a1 + 120);
    **(_DWORD **)(v5 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 104));
    PopPepRequestWork(a1, v10, *(_DWORD *)(v5 + 104) + *(_DWORD *)(a1 + 120));
    PopPepReleaseActivityLink(a1, (_DWORD *)v5, v3, v8);
  }
  else
  {
    PopPepReleaseActivityLink(a1, (_DWORD *)v5, v3, v8);
    PopPepProcessEvent(a1, v5, 1u, 6u, v11, 0LL);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v5 + 180), *(_DWORD *)(v5 + 176), 1);
  }
}
