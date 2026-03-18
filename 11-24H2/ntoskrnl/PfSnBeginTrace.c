/*
 * XREFs of PfSnBeginTrace @ 0x140962AD8
 * Callers:
 *     PfSnBeginScenario @ 0x140960CB0 (PfSnBeginScenario.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PfSnActivateTrace @ 0x1402C9D2C (PfSnActivateTrace.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetThreadId @ 0x14044B4F0 (PsGetThreadId.c)
 *     KeInitializeTimer @ 0x140455420 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     PfSnTraceBufferAllocate @ 0x1404939D4 (PfSnTraceBufferAllocate.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfSnCleanupTrace @ 0x14097212C (PfSnCleanupTrace.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginTrace(_OWORD *a1, int a2, void *a3, struct _KTHREAD *a4, int a5, __int64 *a6)
{
  __int64 v8; // r15
  void *Pool2; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int16 v13; // ax
  __int128 v14; // xmm1
  char *v15; // rax
  int v16; // ecx
  __int64 *v17; // rax
  __int64 **v18; // rcx
  int v19; // edi

  v8 = a2;
  if ( PfSnNumActiveTraces >= (unsigned int)dword_140E66CE8 )
    return (unsigned int)-1073741618;
  if ( !FsRtlpVolumeStartupApplicationsComplete )
    return (unsigned int)-1073741661;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v11 = (__int64)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  memset_0(Pool2, 0, 0x258uLL);
  *(_DWORD *)v11 = 1128485697;
  KeInitializeTimer((PKTIMER)(v11 + 136));
  v12 = v11 + 104;
  *(_QWORD *)(v11 + 112) = v11 + 104;
  *(_QWORD *)(v11 + 104) = v11 + 104;
  *(_QWORD *)(v11 + 128) = 0LL;
  *(_DWORD *)(v11 + 456) = -1073741779;
  *(_QWORD *)(v11 + 464) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v11 + 520) = 0LL;
  *(_QWORD *)(v11 + 528) = 0LL;
  *(_QWORD *)(v11 + 272) = 0LL;
  KeInitializeDpc((PRKDPC)(v11 + 208), (PKDEFERRED_ROUTINE)PfSnTraceTimerRoutine, (PVOID)v11);
  *(_QWORD *)(v11 + 360) = 0LL;
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v11 + 360));
  ObfReferenceObjectWithTag(a3, 0x73576650u);
  *(_QWORD *)(v11 + 352) = a3;
  *(_QWORD *)(v11 + 368) = 0LL;
  *(_QWORD *)(v11 + 384) = PfSnEndTraceWorkerThreadRoutine;
  *(_QWORD *)(v11 + 392) = v11;
  *(_DWORD *)(v11 + 400) = 0;
  v13 = *(_WORD *)(v11 + 486);
  *(_OWORD *)(v11 + 24) = *a1;
  *(_OWORD *)(v11 + 40) = a1[1];
  *(_OWORD *)(v11 + 56) = a1[2];
  v14 = a1[3];
  *(_WORD *)(v11 + 486) = v13 & 0xFFFE | (a5 != 0);
  v15 = (char *)&unk_140E66CC8 + 16 * v8;
  *(_DWORD *)(v11 + 88) = v8;
  *(_OWORD *)(v11 + 72) = v14;
  v16 = *(_DWORD *)v15;
  *(_DWORD *)(v11 + 340) = *(_DWORD *)v15;
  *(_QWORD *)(v11 + 200) = *((_QWORD *)v15 + 1);
  if ( v16 )
  {
    if ( v16 > 0x100000 )
      *(_DWORD *)(v11 + 340) = 0x100000;
    *(_QWORD *)(v11 + 96) = PfSnTraceBufferAllocate();
    if ( *(_QWORD *)(v11 + 96) )
    {
      v17 = *(__int64 **)(v11 + 96);
      v18 = *(__int64 ***)(v11 + 112);
      if ( *v18 != (__int64 *)v12 )
        __fastfail(3u);
      *v17 = v12;
      v17[1] = (__int64)v18;
      *v18 = v17;
      *(_QWORD *)(v11 + 112) = v17;
      *(_QWORD *)(v11 + 424) = -1LL;
      *(_DWORD *)(v11 + 120) = 1;
      *(_QWORD *)(v11 + 416) = -16LL;
      *(_QWORD *)(v11 + 408) = v11 + 416;
      if ( a4 )
      {
        *(_QWORD *)(v11 + 432) = a4;
        *(_QWORD *)(v11 + 440) = PsGetThreadId(a4);
      }
      v19 = PfSnActivateTrace(v11);
      if ( v19 >= 0 )
      {
        v19 = 0;
        *a6 = v11;
        return (unsigned int)v19;
      }
    }
    else
    {
      v19 = -1073741670;
    }
  }
  else
  {
    v19 = -1073741811;
  }
  PfSnCleanupTrace(v11);
  ExFreePoolWithTag((PVOID)v11, 0);
  return (unsigned int)v19;
}
