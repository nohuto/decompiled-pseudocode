/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14047DC7C
 * Callers:
 *     PspAddProcessToWorkingSetChangeList @ 0x1407773B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140777480 (PspApplyWorkingSetLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
  __int16 v11; // [rsp+20h] [rbp-58h]
  _OWORD v12[3]; // [rsp+28h] [rbp-50h] BYREF

  p_Blink = (__int64)&a1[2].ReadyListHead.Blink;
  v3 = 0;
  v4 = 0;
  if ( (a2 & 4) != 0 )
    v3 = 0x80;
  v5 = a2 & 0xF7;
  v12[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  memset(&v12[1], 0, 32);
  if ( (v5 & 1) != 0 )
  {
    v5 &= ~2u;
    v3 = (a2 & 4) != 0 ? -64 : 64;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v4 = 1;
    KiStackAttachProcess(a1, 0, (__int64)v12);
  }
  v6 = MiLockWorkingSetExclusive(p_Blink);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
  v7 = *(_DWORD *)(p_Blink + 184);
  v11 = v7;
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v7) = v7 & 0x7F;
    LOBYTE(v11) = v7;
  }
  v8 = (v5 & 8) != 0;
  if ( (v5 & 2) != 0 )
  {
    LOBYTE(v7) = v7 & 0xBF;
    v8 = 1;
    LOBYTE(v11) = v7;
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
    LOBYTE(v11) = v7;
  }
  if ( (v5 & 1) == 0 )
  {
LABEL_21:
    if ( !v8 )
      goto LABEL_23;
    goto LABEL_22;
  }
  LOBYTE(v11) = v7 | 0x40;
LABEL_22:
  *(_WORD *)(p_Blink + 184) = v11;
LABEL_23:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E373C0);
  MiUnlockWorkingSetExclusive(p_Blink, v6);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v12, 0);
  return v9;
}
