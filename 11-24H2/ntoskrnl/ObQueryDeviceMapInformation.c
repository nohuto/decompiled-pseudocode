/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1409848B0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  unsigned int v5; // r13d
  char v6; // r12
  unsigned __int64 v7; // rbx
  __int64 ProcessServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  _QWORD *v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r9
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rax
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  unsigned int *p_FreezeCount; // rax
  __int128 v40; // [rsp+28h] [rbp-50h]
  __int128 v41; // [rsp+38h] [rbp-40h]
  __int64 v42; // [rsp+48h] [rbp-30h]
  signed __int64 *v44; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  v5 = 0;
  v44 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v6 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 || a1 && KeGetCurrentThread()->ApcState.Process != a1 )
    return 3221225485LL;
  v7 = ObpReferenceCurrentDeviceMap(0LL, &v44, a3);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  }
  v10 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire((__int64)(v10 + 15), 0LL);
  if ( _InterlockedCompareExchange64(v10 + 15, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10 + 15, 0, v12, (__int64)(v10 + 15));
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  if ( v7 )
  {
    v6 = 1;
  }
  else
  {
    p_FreezeCount = &a1[1].FreezeCount;
    if ( !a1 )
      p_FreezeCount = (unsigned int *)v10;
    v7 = *(_QWORD *)p_FreezeCount & 0xFFFFFFFFFFFFFFF0uLL;
  }
  if ( v7 )
  {
    v13 = 0LL;
    if ( (v3 & 1) == 0 )
      v13 = *(_QWORD *)(v7 + 24);
    v14 = *(_DWORD *)(v7 + 256);
    LODWORD(v40) = v14;
    v15 = 1;
    v16 = 2;
    do
    {
      *((_BYTE *)&v40 + v16 + 2) = *(_BYTE *)(v16 - 2 + v7 + 260);
      if ( (v14 & v15) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 2) = *(_BYTE *)(v13 + v16 - 2 + 260);
        LODWORD(v40) = v15 & *(_DWORD *)(v13 + 256) | v40;
      }
      v17 = 2 * v15;
      *((_BYTE *)&v40 + v16 + 3) = *(_BYTE *)(v16 - 1 + v7 + 260);
      if ( (v14 & v17) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 3) = *(_BYTE *)(v16 - 1 + v13 + 260);
        LODWORD(v40) = v17 & *(_DWORD *)(v13 + 256) | v40;
      }
      v18 = 2 * v17;
      *((_BYTE *)&v40 + v16 + 4) = *(_BYTE *)(v16 + v7 + 260);
      if ( (v14 & v18) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 4) = *(_BYTE *)(v16 + v13 + 260);
        LODWORD(v40) = v18 & *(_DWORD *)(v13 + 256) | v40;
      }
      v19 = 2 * v18;
      *((_BYTE *)&v40 + v16 + 5) = *(_BYTE *)(v16 + 1 + v7 + 260);
      if ( (v14 & v19) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 5) = *(_BYTE *)(v16 + 1 + v13 + 260);
        LODWORD(v40) = v19 & *(_DWORD *)(v13 + 256) | v40;
      }
      v20 = 2 * v19;
      *((_BYTE *)&v40 + v16 + 6) = *(_BYTE *)(v16 + 2 + v7 + 260);
      if ( (v14 & v20) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 6) = *(_BYTE *)(v16 + 2 + v13 + 260);
        LODWORD(v40) = v20 & *(_DWORD *)(v13 + 256) | v40;
      }
      v21 = 2 * v20;
      *((_BYTE *)&v40 + v16 + 7) = *(_BYTE *)(v16 + 3 + v7 + 260);
      if ( (v14 & v21) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 7) = *(_BYTE *)(v16 + 3 + v13 + 260);
        LODWORD(v40) = v21 & *(_DWORD *)(v13 + 256) | v40;
      }
      v22 = 2 * v21;
      *((_BYTE *)&v40 + v16 + 8) = *(_BYTE *)(v16 + 4 + v7 + 260);
      if ( (v14 & v22) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 8) = *(_BYTE *)(v16 + 4 + v13 + 260);
        LODWORD(v40) = v22 & *(_DWORD *)(v13 + 256) | v40;
      }
      v23 = 2 * v22;
      *((_BYTE *)&v40 + v16 + 9) = *(_BYTE *)(v16 + 5 + v7 + 260);
      if ( (v14 & v23) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 9) = *(_BYTE *)(v16 + 5 + v13 + 260);
        LODWORD(v40) = v23 & *(_DWORD *)(v13 + 256) | v40;
      }
      v24 = 2 * v23;
      *((_BYTE *)&v40 + v16 + 10) = *(_BYTE *)(v16 + 6 + v7 + 260);
      if ( (v14 & v24) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 10) = *(_BYTE *)(v16 + 6 + v13 + 260);
        LODWORD(v40) = v24 & *(_DWORD *)(v13 + 256) | v40;
      }
      v25 = 2 * v24;
      *((_BYTE *)&v40 + v16 + 11) = *(_BYTE *)(v16 + 7 + v7 + 260);
      if ( (v14 & v25) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 11) = *(_BYTE *)(v16 + 7 + v13 + 260);
        LODWORD(v40) = v25 & *(_DWORD *)(v13 + 256) | v40;
      }
      v26 = 2 * v25;
      *((_BYTE *)&v40 + v16 + 12) = *(_BYTE *)(v16 + 8 + v7 + 260);
      if ( (v14 & v26) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 12) = *(_BYTE *)(v16 + 8 + v13 + 260);
        LODWORD(v40) = v26 & *(_DWORD *)(v13 + 256) | v40;
      }
      v27 = 2 * v26;
      *((_BYTE *)&v40 + v16 + 13) = *(_BYTE *)(v16 + 9 + v7 + 260);
      if ( (v14 & v27) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 13) = *(_BYTE *)(v16 + 9 + v13 + 260);
        LODWORD(v40) = v27 & *(_DWORD *)(v13 + 256) | v40;
      }
      v28 = 2 * v27;
      *((_BYTE *)&v40 + v16 + 14) = *(_BYTE *)(v16 + 10 + v7 + 260);
      if ( (v14 & v28) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 14) = *(_BYTE *)(v16 + 10 + v13 + 260);
        LODWORD(v40) = v28 & *(_DWORD *)(v13 + 256) | v40;
      }
      v29 = 2 * v28;
      *((_BYTE *)&v40 + v16 + 15) = *(_BYTE *)(v16 + 11 + v7 + 260);
      if ( (v14 & v29) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 15) = *(_BYTE *)(v16 + 11 + v13 + 260);
        LODWORD(v40) = v29 & *(_DWORD *)(v13 + 256) | v40;
      }
      v30 = 2 * v29;
      *((_BYTE *)&v40 + v16 + 16) = *(_BYTE *)(v16 + 12 + v7 + 260);
      if ( (v14 & v30) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 16) = *(_BYTE *)(v16 + 12 + v13 + 260);
        LODWORD(v40) = v30 & *(_DWORD *)(v13 + 256) | v40;
      }
      v31 = 2 * v30;
      *((_BYTE *)&v40 + v16 + 17) = *(_BYTE *)(v16 + 13 + v7 + 260);
      if ( (v14 & v31) == 0 && v13 )
      {
        *((_BYTE *)&v40 + v16 + 17) = *(_BYTE *)(v16 + 13 + v13 + 260);
        LODWORD(v40) = v31 & *(_DWORD *)(v13 + 256) | v40;
      }
      v15 = 2 * v31;
      v16 += 16;
    }
    while ( v16 - 2 < 0x20 );
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    KeAbPostRelease((ULONG_PTR)(v10 + 15));
    v35 = KeGetCurrentThread();
    if ( v35->SpecialApcDisable++ == -1
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    {
      KiCheckForKernelApcDelivery(v34, v33);
    }
    if ( v6 == 1 )
    {
      if ( v44 )
      {
        _m_prefetchw(v44);
        v37 = *v44;
        while ( (v7 ^ v37) < 0xF )
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange64(v44, v37 + 1, v37);
          if ( v38 == v37 )
            goto LABEL_76;
        }
      }
      ObDereferenceDeviceMap((PVOID)v7);
    }
LABEL_76:
    *(_OWORD *)a2 = v40;
    *(_OWORD *)(a2 + 16) = v41;
    *(_DWORD *)(a2 + 32) = v42;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    KeAbPostRelease((ULONG_PTR)(v10 + 15));
    KeLeaveGuardedRegion();
    return (unsigned int)-1073741807;
  }
  return v5;
}
