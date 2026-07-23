/*
 * XREFs of EtwpEnableKernelTrace @ 0x1408DA1EC
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
 * Callees:
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     IoPerfInit @ 0x1404D2B58 (IoPerfInit.c)
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1404F8150 (DbgSetDebugPrintCallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpTimeProfileStart @ 0x1406EACF8 (EtwpTimeProfileStart.c)
 *     AlpcRegisterLogRoutine @ 0x14073655C (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x140738778 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140796234 (WmiSetNetworkNotify.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1408D9CA0 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpDisableKernelTrace @ 0x1408DA7E0 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(char *a1, _DWORD *a2, _QWORD *a3, unsigned int a4)
{
  int updated; // esi
  unsigned int v5; // r10d
  _QWORD *v6; // r9
  __int64 v8; // r13
  int v10; // r15d
  int v11; // edi
  int v12; // r14d
  signed __int64 v14; // rbx
  signed __int64 v15; // rcx
  _DWORD *v16; // rcx
  char *v17; // rdx
  __int64 v18; // r8
  unsigned int i; // edi
  __int128 v22; // [rsp+48h] [rbp-21h] BYREF
  __int128 v23; // [rsp+58h] [rbp-11h]
  _OWORD v24[2]; // [rsp+68h] [rbp-1h] BYREF

  updated = 0;
  v5 = a4;
  v6 = a3;
  v8 = 8LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !EtwpBootPhase )
  {
    v16 = a2;
    v17 = (char *)((char *)&EtwpBootDeferredGroupMask - (char *)a2);
    v18 = 8LL;
    do
    {
      *v16 &= ~*(_DWORD *)((char *)v16 + (_QWORD)v17);
      ++v16;
      --v18;
    }
    while ( v18 );
  }
  v10 = DWORD1(v22);
  if ( a2 )
  {
    if ( (a2[1] & 0x80000) != 0 )
    {
      v10 = DWORD1(v22) | 0x80000;
      DWORD1(v22) |= 0x80000u;
    }
    if ( (a2[1] & 0x800000) != 0 )
    {
      v10 |= 0x800000u;
      DWORD1(v22) = v10;
    }
    if ( (a2[1] & 0x880000) != 0 )
    {
      *(_QWORD *)&v24[0] = 0LL;
      *((_QWORD *)&v24[0] + 1) = -1LL;
      KeSetTimer2(
        (__int64)&EtwpMemInfoTimer,
        (LARGE_INTEGER)(-10000LL * (unsigned int)EtwpMemInfoInterval),
        10000LL * (unsigned int)EtwpMemInfoInterval,
        (__int64)v24);
      v6 = a3;
      v5 = a4;
    }
  }
  if ( (unsigned __int8)EtwpBootPhase > 3u )
  {
    updated = EtwpUpdateFileInfoDriverState(a1, a2, 1, v6, v5);
    if ( updated )
    {
LABEL_55:
      if ( updated >= 0 )
        return (unsigned int)updated;
      goto LABEL_58;
    }
  }
  v11 = v22;
  if ( a2 )
  {
    if ( (*a2 & 0x2000000) != 0 )
    {
      v11 = v22 | 0x2000000;
      qword_140E036B0 = (__int64)EtwpTraceFileIo;
      LODWORD(v22) = v22 | 0x2000000;
    }
    if ( (*a2 & 0x4000000) != 0 )
    {
      v11 |= 0x4000000u;
      qword_140E036A8 = (__int64)EtwpTraceFileIo;
      LODWORD(v22) = v11;
    }
    if ( (*a2 & 0x200) != 0 )
    {
      v11 |= 0x200u;
      qword_140E036A0 = (__int64)EtwpTraceFileName;
      LODWORD(v22) = v11;
    }
    if ( (*a2 & 0x100) != 0 )
    {
      v11 |= 0x100u;
      EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
      qword_140E03690 = (__int64)EtwpTraceRedirectedIo;
      LODWORD(v22) = v11;
    }
    if ( (*a2 & 0x400) != 0 )
    {
      v11 |= 0x400u;
      qword_140E67ED8 = (__int64)EtwpTraceIoInit;
      LODWORD(v22) = v11;
    }
    if ( (a2[4] & 1) != 0 )
    {
      v12 = v23 | 1;
      qword_140E67EE0 = (__int64)EtwpTraceOpticalIo;
      LODWORD(v23) = v23 | 1;
    }
    else
    {
      v12 = v23;
    }
    if ( (a2[4] & 2) != 0 )
    {
      v12 |= 2u;
      qword_140E67EE8 = (__int64)EtwpTraceOpticalIoInit;
      LODWORD(v23) = v12;
    }
    if ( (*a2 & 0x200000) != 0 )
    {
      v11 |= 0x200000u;
      EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
      LODWORD(v22) = v11;
    }
    if ( (a2[4] & 0x400000) != 0 )
    {
      v12 |= 0x400000u;
      qword_140E03670 = (__int64)EtwpTraceFltIo;
      LODWORD(v23) = v12;
    }
    if ( (a2[4] & 0x80000) != 0 )
    {
      v12 |= 0x80000u;
      qword_140E03678 = (__int64)EtwpTraceFltIo;
      LODWORD(v23) = v12;
    }
    if ( (a2[4] & 0x100000) != 0 )
    {
      v12 |= 0x100000u;
      qword_140E03680 = (__int64)EtwpTraceFltTimedIo;
      LODWORD(v23) = v12;
    }
    if ( (a2[4] & 0x200000) != 0 )
    {
      v12 |= 0x200000u;
      qword_140E03688 = (__int64)EtwpTraceFltTimedIo;
      LODWORD(v23) = v12;
    }
    if ( (a2[4] & 0x1000000) != 0 )
    {
      v12 |= 0x1000000u;
      qword_140E0E8C8 = (__int64)EtwpTraceWdf;
      LODWORD(v23) = v12;
    }
    if ( (a2[4] & 0x2000000) != 0 )
    {
      v12 |= 0x2000000u;
      qword_140E0E8D0 = (__int64)EtwpTraceWdf;
      LODWORD(v23) = v12;
    }
    if ( (a2[2] & 0x8000000) != 0 )
    {
      DWORD2(v22) |= 0x8000000u;
      qword_140E0E8D8 = (__int64)EtwpSystemTraceWdf;
    }
    if ( (*a2 & 0x20000) != 0 )
    {
      updated = 0;
      CmpTraceRoutine = (__int64)EtwpTraceRegistry;
      v11 |= 0x20000u;
      LODWORD(v22) = v11;
      CmpTraceTxrRoutine = (__int64)EtwpTraceRegistryTransaction;
      goto LABEL_44;
    }
  }
  else
  {
    v12 = v23;
  }
  if ( !a2 )
    goto LABEL_55;
LABEL_44:
  if ( (*a2 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_58;
    v11 |= 0x100000u;
    LODWORD(v22) = v11;
  }
  if ( (*a2 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify((__int64)EtwpTraceNetwork);
    v11 |= 0x10000u;
    LODWORD(v22) = v11;
  }
  if ( (a2[1] & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_58;
    v10 |= 0x10u;
    DWORD1(v22) = v10;
  }
  if ( (*a2 & 0x40000) != 0 )
  {
    updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
    if ( updated < 0 )
      goto LABEL_58;
    LODWORD(v22) = v11 | 0x40000;
  }
  if ( (a2[1] & 2) == 0 )
  {
LABEL_50:
    if ( (a2[1] & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140EFED68 + 616 * i);
      DWORD1(v22) = v10 | 0x400;
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      LODWORD(v23) = v12 | 0x80;
    }
    if ( (a2[1] & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_55;
  }
  updated = EtwpTimeProfileStart();
  if ( updated >= 0 )
  {
    v10 |= 2u;
    DWORD1(v22) = v10;
    goto LABEL_50;
  }
LABEL_58:
  v14 = (char *)a2 - a1;
  memset(v24, 0, sizeof(v24));
  v15 = (char *)v24 - a1;
  do
  {
    *(_DWORD *)&a1[v15] = *(_DWORD *)a1 & ~*(_DWORD *)&a1[v14];
    a1 += 4;
    --v8;
  }
  while ( v8 );
  EtwpDisableKernelTrace(v24, &v22, a3, a4);
  return (unsigned int)updated;
}
