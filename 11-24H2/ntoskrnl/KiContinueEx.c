/*
 * XREFs of KiContinueEx @ 0x1403D4630
 * Callers:
 *     NtContinueEx @ 0x1406AB390 (NtContinueEx.c)
 * Callees:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KeTestAlertThread @ 0x1403D4850 (KeTestAlertThread.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x1404F9380 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  bool v15; // [rsp+30h] [rbp-28h]
  unsigned int v16; // [rsp+34h] [rbp-24h]
  int v17; // [rsp+38h] [rbp-20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v9 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v9, 1LL);
  }
  v16 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v15 = 0;
    if ( a2 > 0xFF )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      v17 = *(_DWORD *)(a2 + 4);
      v11 = (unsigned __int8)v17;
      LOBYTE(v11) = v17 & 1;
      v15 = (v17 & 2) != 0;
    }
    else
    {
      v11 = (unsigned __int8)a2;
      v12 = 0x7FFFFFFF0000LL;
    }
    if ( (_BYTE)v11 )
    {
      if ( (a1 & 0xF) != 0 )
LABEL_9:
        ExRaiseDatatypeMisalignment();
      if ( a1 < 0x7FFFFFFF0000LL )
        v12 = a1;
      *(_BYTE *)v12 = *(_BYTE *)v12;
      *(_BYTE *)(v12 + 1231) = *(_BYTE *)(v12 + 1231);
      LOBYTE(v11) = 1;
      KeTestAlertThread(v11);
      if ( v15 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
      {
        a4->FaultAddress = a1;
        a4->ErrorCode = a3;
        KiDeliverApc(1, 0LL, a4);
        v16 = 0;
        goto LABEL_23;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      goto LABEL_9;
    }
    v13 = KiContinuePreviousModeUser(a1, a3, a4, a2);
    if ( v13 >= 0 )
      v13 = 1;
    v16 = v13;
  }
  else
  {
    if ( a2 > 0xFF )
      LOBYTE(a2) = *(_BYTE *)(a2 + 4) & 1;
    KeContextToKframes((_DWORD)a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( (_BYTE)a2 )
      KeTestAlertThread(0LL);
  }
LABEL_23:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
    __writecr8(0LL);
  }
  return v16;
}
