/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x140478F0C
 * Callers:
 *     PspAddProcessToWorkingSetChangeList @ 0x1407775D8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1407776A0 (PspApplyWorkingSetLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  __int64 p_Blink; // rsi
  char v3; // di
  int v4; // ebp
  char v5; // bl
  unsigned __int8 v6; // r14
  int v7; // ecx
  BOOL v8; // edx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v13; // [rsp+20h] [rbp-58h]
  _OWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF

  p_Blink = (__int64)&a1[2].ReadyListHead.Blink;
  v3 = 0;
  v4 = 0;
  if ( (a2 & 4) != 0 )
    v3 = 0x80;
  v5 = a2 & 0xF7;
  v14[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  memset(&v14[1], 0, 32);
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v3 = (a2 & 4) != 0 ? -64 : 64;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v4 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v14);
  }
  v6 = MiLockWorkingSetExclusive(p_Blink);
  ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  v7 = *(_DWORD *)(p_Blink + 184);
  v13 = v7;
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v7) = v7 & 0x7F;
    LOBYTE(v13) = v7;
  }
  v8 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    LOBYTE(v7) = v7 & 0xBF;
    v8 = 1;
    LOBYTE(v13) = v7;
  }
  if ( (v7 & 0x80) != 0 )
    v3 |= 0x80u;
  if ( (v7 & 0x40) != 0 )
    v3 |= 0x40u;
  if ( v3 < 0 && (v3 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(p_Blink + 112) + 6LL) >= *(_QWORD *)(p_Blink + 120) )
  {
    v9 = -1073741748;
    goto LABEL_21;
  }
  v9 = 0;
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v7) = v7 | 0x80;
    v8 = 1;
    LOBYTE(v13) = v7;
  }
  if ( (v5 & 1) == 0 )
  {
LABEL_21:
    if ( !v8 )
      goto LABEL_23;
    goto LABEL_22;
  }
  LOBYTE(v13) = v7 | 0x40;
LABEL_22:
  *(_WORD *)(p_Blink + 184) = v13;
LABEL_23:
  ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
  MiUnlockWorkingSetExclusive(p_Blink, v6);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v14, 0, v10, v11);
  return v9;
}
