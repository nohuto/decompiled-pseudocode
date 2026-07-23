/*
 * XREFs of RtlpLookupDynamicUserFunctionTable @ 0x14025BA28
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14025AB80 (RtlpLookupUserFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupDynamicUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  volatile signed __int64 *p_SwapListEntry; // rbx
  __int64 v7; // r15
  struct _LIST_ENTRY *Blink; // r8
  unsigned int v9; // edx
  int v10; // r10d
  int v11; // r15d
  int v12; // r9d
  char *v13; // r11
  char *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int64 v19; // rcx
  unsigned int v20; // edx
  char *v22; // rt1
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // [rsp+30h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[3].ReadyListHead.Blink )
  {
    --CurrentThread->SpecialApcDisable;
    p_SwapListEntry = (volatile signed __int64 *)&Process[3].SwapListEntry;
    v7 = KeAbPreAcquire(&Process[3].SwapListEntry, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[3].SwapListEntry, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&Process[3].SwapListEntry, 0LL, v7, &Process[3].SwapListEntry);
    if ( v7 )
      *(_BYTE *)(v7 + 10) = 1;
    Blink = Process[3].ReadyListHead.Blink;
    if ( Blink && LODWORD(Blink->Flink) != 1 )
    {
      v9 = dword_140E2D4FC << 12;
      v10 = 1;
      v11 = LODWORD(Blink->Flink) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v11 < v10 )
            goto LABEL_34;
          v12 = (v10 + v11) >> 1;
          v13 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v12);
          v14 = &v13[*((unsigned int *)&Blink[2].Flink + 6 * v12)];
          if ( a1 >= (unsigned __int64)v13 )
            break;
          if ( !v12 )
            goto LABEL_34;
          v11 = v12 - 1;
        }
        if ( RtlKernelScpFunctionTableSize && a1 > 0x7FFFFFFEFFFFLL )
        {
          if ( a1 < (unsigned __int64)v14 )
          {
LABEL_16:
            v26 = *(__int128 *)((char *)&Blink[1] + 24 * v12);
            v9 = *((_QWORD *)&Blink[2].Flink + 3 * v12);
            v14 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v12);
LABEL_17:
            *(_QWORD *)(a2 + 8) = v14;
            *(_DWORD *)(a2 + 16) = v9;
            if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_SwapListEntry);
            KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
            v18 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v18
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(1LL, v15, v16, v17);
            }
            v19 = *(_QWORD *)(v26 + 16);
            *(_QWORD *)a2 = v19;
            v20 = *(_DWORD *)(v26 + 84);
            if ( v20 > 0x15555555 )
              RtlRaiseStatus(-1073741675);
            *(_DWORD *)(a2 + 20) = 12 * v20;
            if ( 12 * v20 )
            {
              if ( (v19 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
            }
            return v19;
          }
          if ( a1 < (unsigned __int64)&v14[v9] && v13 != PsHalImageBase )
          {
            v22 = *(char **)&KeNumberProcessorsGroup0[9];
            if ( v13 != v22 )
            {
              *(_QWORD *)&v26 = &RtlKernelScpFunctionTable;
              goto LABEL_17;
            }
          }
        }
        if ( a1 < (unsigned __int64)v14 )
          goto LABEL_16;
        v10 = v12 + 1;
      }
    }
LABEL_34:
    if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_SwapListEntry);
    KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v23, v24, v25);
  }
  return 0LL;
}
