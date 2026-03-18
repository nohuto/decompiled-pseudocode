/*
 * XREFs of KiContinueEx @ 0x140260E20
 * Callers:
 *     NtContinueEx @ 0x14069F120 (NtContinueEx.c)
 * Callees:
 *     KiContinuePreviousModeUser @ 0x140261330 (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x140261EE0 (KeTestAlertThread.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x1404F93B0 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  bool v16; // [rsp+30h] [rbp-28h]
  unsigned int v17; // [rsp+34h] [rbp-24h]
  int v18; // [rsp+38h] [rbp-20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v9 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v9);
  }
  v17 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v16 = 0;
    if ( a2 > 0xFF )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = 0x7FFFFFFF0000LL;
      v18 = *(_DWORD *)(a2 + 4);
      v11 = (unsigned __int8)v18;
      LOBYTE(v11) = v18 & 1;
      v16 = (v18 & 2) != 0;
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
      if ( v16 && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
      {
        *(_QWORD *)(a4 + 208) = a1;
        *(_QWORD *)(a4 + 352) = a3;
        LOBYTE(v13) = 1;
        KiDeliverApc(v13, 0LL, a4);
        v17 = 0;
        goto LABEL_22;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      goto LABEL_9;
    }
    v14 = KiContinuePreviousModeUser(a1, a3, a4, a2);
    if ( v14 >= 0 )
      v14 = 1;
    v17 = v14;
  }
  else
  {
    if ( a2 > 0xFF )
      LOBYTE(a2) = *(_BYTE *)(a2 + 4) & 1;
    KeContextToKframes(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( (_BYTE)a2 )
      KeTestAlertThread(0LL);
  }
LABEL_22:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
    __writecr8(0LL);
  }
  return v17;
}
