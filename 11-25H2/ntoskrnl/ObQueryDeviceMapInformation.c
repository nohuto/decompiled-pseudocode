/*
 * XREFs of ObQueryDeviceMapInformation @ 0x14097E7F0
 * Callers:
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  char v6; // r13
  unsigned __int64 v7; // rbx
  __int64 ProcessServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  _QWORD *v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r9
  int v15; // r8d
  int v16; // eax
  unsigned int v17; // edx
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
  int v32; // eax
  struct _KTHREAD *v33; // rax
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  unsigned int *p_FreezeCount; // rax
  __int128 v39; // [rsp+28h] [rbp-50h]
  __int128 v40; // [rsp+38h] [rbp-40h]
  __int64 v41; // [rsp+48h] [rbp-30h]
  signed __int64 *v43; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v43 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v6 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 || a1 && KeGetCurrentThread()->ApcState.Process != a1 )
    return 3221225485LL;
  v7 = ObpReferenceCurrentDeviceMap(0LL, &v43, a3, a4);
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
    ExfAcquirePushLockSharedEx(v10 + 15, 0, v12, (unsigned __int64)(v10 + 15));
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
  v13 = 0;
  if ( v7 )
  {
    v14 = 0LL;
    if ( (v4 & 1) == 0 )
      v14 = *(_QWORD *)(v7 + 24);
    v15 = *(_DWORD *)(v7 + 256);
    LODWORD(v39) = v15;
    v16 = 1;
    v17 = 2;
    do
    {
      *((_BYTE *)&v39 + v17 + 2) = *(_BYTE *)(v17 - 2 + v7 + 260);
      if ( (v15 & v16) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 2) = *(_BYTE *)(v14 + v17 - 2 + 260);
        LODWORD(v39) = v16 & *(_DWORD *)(v14 + 256) | v39;
      }
      v18 = 2 * v16;
      *((_BYTE *)&v39 + v17 + 3) = *(_BYTE *)(v17 - 1 + v7 + 260);
      if ( (v15 & v18) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 3) = *(_BYTE *)(v17 - 1 + v14 + 260);
        LODWORD(v39) = v18 & *(_DWORD *)(v14 + 256) | v39;
      }
      v19 = 2 * v18;
      *((_BYTE *)&v39 + v17 + 4) = *(_BYTE *)(v17 + v7 + 260);
      if ( (v15 & v19) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 4) = *(_BYTE *)(v17 + v14 + 260);
        LODWORD(v39) = v19 & *(_DWORD *)(v14 + 256) | v39;
      }
      v20 = 2 * v19;
      *((_BYTE *)&v39 + v17 + 5) = *(_BYTE *)(v17 + 1 + v7 + 260);
      if ( (v15 & v20) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 5) = *(_BYTE *)(v17 + 1 + v14 + 260);
        LODWORD(v39) = v20 & *(_DWORD *)(v14 + 256) | v39;
      }
      v21 = 2 * v20;
      *((_BYTE *)&v39 + v17 + 6) = *(_BYTE *)(v17 + 2 + v7 + 260);
      if ( (v15 & v21) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 6) = *(_BYTE *)(v17 + 2 + v14 + 260);
        LODWORD(v39) = v21 & *(_DWORD *)(v14 + 256) | v39;
      }
      v22 = 2 * v21;
      *((_BYTE *)&v39 + v17 + 7) = *(_BYTE *)(v17 + 3 + v7 + 260);
      if ( (v15 & v22) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 7) = *(_BYTE *)(v17 + 3 + v14 + 260);
        LODWORD(v39) = v22 & *(_DWORD *)(v14 + 256) | v39;
      }
      v23 = 2 * v22;
      *((_BYTE *)&v39 + v17 + 8) = *(_BYTE *)(v17 + 4 + v7 + 260);
      if ( (v15 & v23) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 8) = *(_BYTE *)(v17 + 4 + v14 + 260);
        LODWORD(v39) = v23 & *(_DWORD *)(v14 + 256) | v39;
      }
      v24 = 2 * v23;
      *((_BYTE *)&v39 + v17 + 9) = *(_BYTE *)(v17 + 5 + v7 + 260);
      if ( (v15 & v24) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 9) = *(_BYTE *)(v17 + 5 + v14 + 260);
        LODWORD(v39) = v24 & *(_DWORD *)(v14 + 256) | v39;
      }
      v25 = 2 * v24;
      *((_BYTE *)&v39 + v17 + 10) = *(_BYTE *)(v17 + 6 + v7 + 260);
      if ( (v15 & v25) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 10) = *(_BYTE *)(v17 + 6 + v14 + 260);
        LODWORD(v39) = v25 & *(_DWORD *)(v14 + 256) | v39;
      }
      v26 = 2 * v25;
      *((_BYTE *)&v39 + v17 + 11) = *(_BYTE *)(v17 + 7 + v7 + 260);
      if ( (v15 & v26) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 11) = *(_BYTE *)(v17 + 7 + v14 + 260);
        LODWORD(v39) = v26 & *(_DWORD *)(v14 + 256) | v39;
      }
      v27 = 2 * v26;
      *((_BYTE *)&v39 + v17 + 12) = *(_BYTE *)(v17 + 8 + v7 + 260);
      if ( (v15 & v27) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 12) = *(_BYTE *)(v17 + 8 + v14 + 260);
        LODWORD(v39) = v27 & *(_DWORD *)(v14 + 256) | v39;
      }
      v28 = 2 * v27;
      *((_BYTE *)&v39 + v17 + 13) = *(_BYTE *)(v17 + 9 + v7 + 260);
      if ( (v15 & v28) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 13) = *(_BYTE *)(v17 + 9 + v14 + 260);
        LODWORD(v39) = v28 & *(_DWORD *)(v14 + 256) | v39;
      }
      v29 = 2 * v28;
      *((_BYTE *)&v39 + v17 + 14) = *(_BYTE *)(v17 + 10 + v7 + 260);
      if ( (v15 & v29) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 14) = *(_BYTE *)(v17 + 10 + v14 + 260);
        LODWORD(v39) = v29 & *(_DWORD *)(v14 + 256) | v39;
      }
      v30 = 2 * v29;
      *((_BYTE *)&v39 + v17 + 15) = *(_BYTE *)(v17 + 11 + v7 + 260);
      if ( (v15 & v30) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 15) = *(_BYTE *)(v17 + 11 + v14 + 260);
        LODWORD(v39) = v30 & *(_DWORD *)(v14 + 256) | v39;
      }
      v31 = 2 * v30;
      *((_BYTE *)&v39 + v17 + 16) = *(_BYTE *)(v17 + 12 + v7 + 260);
      if ( (v15 & v31) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 16) = *(_BYTE *)(v17 + 12 + v14 + 260);
        LODWORD(v39) = v31 & *(_DWORD *)(v14 + 256) | v39;
      }
      v32 = 2 * v31;
      *((_BYTE *)&v39 + v17 + 17) = *(_BYTE *)(v17 + 13 + v7 + 260);
      if ( (v15 & v32) == 0 && v14 )
      {
        *((_BYTE *)&v39 + v17 + 17) = *(_BYTE *)(v17 + 13 + v14 + 260);
        LODWORD(v39) = v32 & *(_DWORD *)(v14 + 256) | v39;
      }
      v16 = 2 * v32;
      v17 += 16;
    }
    while ( v17 - 2 < 0x20 );
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    KeAbPostRelease((ULONG_PTR)(v10 + 15));
    v33 = KeGetCurrentThread();
    if ( v33->SpecialApcDisable++ == -1
      && ($727077A9B6E167EAE1398C74674DC5A5 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v6 == 1 )
    {
      if ( v43 )
      {
        _m_prefetchw(v43);
        v35 = *v43;
        while ( (v7 ^ v35) < 0xF )
        {
          v36 = v35;
          v35 = _InterlockedCompareExchange64(v43, v35 + 1, v35);
          if ( v36 == v35 )
            goto LABEL_75;
        }
      }
      ObDereferenceDeviceMap((PVOID)v7);
    }
LABEL_75:
    *(_OWORD *)a2 = v39;
    *(_OWORD *)(a2 + 16) = v40;
    *(_DWORD *)(a2 + 32) = v41;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v10 + 15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10 + 15);
    KeAbPostRelease((ULONG_PTR)(v10 + 15));
    KeLeaveGuardedRegion();
    return (unsigned int)-1073741807;
  }
  return v13;
}
