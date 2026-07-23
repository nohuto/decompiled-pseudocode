/*
 * XREFs of RtlpLookupDynamicUserFunctionTable @ 0x140237304
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x140236130 (RtlpLookupUserFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
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
  bool v15; // zf
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int128 v19; // [rsp+30h] [rbp-48h]

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
      v9 = dword_140E2D87C << 12;
      v10 = 1;
      v11 = LODWORD(Blink->Flink) - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v11 < v10 )
            goto LABEL_39;
          v12 = (v10 + v11) >> 1;
          v13 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v12);
          v14 = &v13[*((unsigned int *)&Blink[2].Flink + 6 * v12)];
          if ( a1 >= (unsigned __int64)v13 )
            break;
          if ( !v12 )
            goto LABEL_39;
          v11 = v12 - 1;
        }
        if ( RtlKernelScpFunctionTableSize && a1 > 0x7FFFFFFEFFFFLL )
        {
          if ( a1 < (unsigned __int64)v14 )
          {
LABEL_16:
            v19 = *(__int128 *)((char *)&Blink[1] + 24 * v12);
            v9 = *((_QWORD *)&Blink[2].Flink + 3 * v12);
            v14 = (char *)*((_QWORD *)&Blink[1].Blink + 3 * v12);
LABEL_17:
            *(_QWORD *)(a2 + 8) = v14;
            *(_DWORD *)(a2 + 16) = v9;
            if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_SwapListEntry);
            KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
            v15 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v15
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            v16 = *(_QWORD *)(v19 + 16);
            *(_QWORD *)a2 = v16;
            v17 = *(_DWORD *)(v19 + 84);
            if ( v17 > 0x15555555 )
              RtlRaiseStatus(-1073741675);
            *(_DWORD *)(a2 + 20) = 12 * v17;
            if ( 12 * v17 )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
            }
            return v16;
          }
          if ( a1 < (unsigned __int64)&v14[v9] && v13 != PsHalImageBase && v13 != PsNtosImageBase )
          {
            *(_QWORD *)&v19 = &RtlKernelScpFunctionTable;
            goto LABEL_17;
          }
        }
        if ( a1 < (unsigned __int64)v14 )
          goto LABEL_16;
        v10 = v12 + 1;
      }
    }
LABEL_39:
    if ( _InterlockedCompareExchange64(p_SwapListEntry, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_SwapListEntry);
    KeAbPostRelease((ULONG_PTR)p_SwapListEntry);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
