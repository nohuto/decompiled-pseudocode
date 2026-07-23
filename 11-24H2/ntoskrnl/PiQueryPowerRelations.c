/*
 * XREFs of PiQueryPowerRelations @ 0x140A887F8
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404A97B0 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404AEBE4 (PnpReleasePowerRelationsQueueLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PnpQueryDeviceRelations @ 0x1408B8FB8 (PnpQueryDeviceRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140A88D80 (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140A88FC4 (PiValidatePowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140A98E3C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerRelations(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int DeviceRelations; // esi
  _QWORD *v6; // r13
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  unsigned int *v13; // r8
  unsigned int i; // r12d
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 Pool2; // rax
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // r15
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  int PowerDependencyRelations; // eax
  PVOID *v41; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v43; // edx
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  DeviceRelations = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 3221225865LL;
  if ( !a2 )
  {
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( DeviceRelations >= 0 )
    {
      PnpAcquirePowerRelationsQueueLock();
      v6 = (_QWORD *)(a1 + 192);
      v7 = *(_QWORD **)(a1 + 192);
      while ( v7 != v6 )
      {
        v8 = *v7;
        v9 = v7;
        v7 = (_QWORD *)v8;
        if ( *(_QWORD **)(v8 + 8) != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v8, *(_QWORD *)(v8 + 8) = v10, v11 = v9[3], *(_QWORD **)(v11 + 8) != v9 + 3)
          || (v12 = (_QWORD *)v9[4], (_QWORD *)*v12 != v9 + 3) )
        {
LABEL_26:
          __fastfail(3u);
        }
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
      PnpReleasePowerRelationsQueueLock();
      v13 = (unsigned int *)P;
      if ( P && *(_DWORD *)P )
      {
        for ( i = 0; i < *v13; ++i )
        {
          v15 = *(_QWORD *)&v13[2 * i + 2];
          if ( !v15 )
            goto LABEL_73;
          v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
          if ( !v16 || (*(_DWORD *)(v16 + 396) & 0x20000) != 0 )
          {
            _mm_lfence();
            v23 = *((_QWORD *)P + i + 1);
            IoAddTriageDumpDataBlock(v23, (PVOID)*(unsigned __int16 *)(v23 + 2));
            v13 = (unsigned int *)P;
            if ( *(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL) )
            {
              _mm_lfence();
              v24 = *(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL);
              IoAddTriageDumpDataBlock(v24, (PVOID)(unsigned int)*(__int16 *)(v24 + 2));
              v13 = (unsigned int *)P;
              if ( *(_WORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL) + 56LL) )
              {
                _mm_lfence();
                IoAddTriageDumpDataBlock(*(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL) + 56, (PVOID)2);
                v25 = *(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v25 + 64), (PVOID)*(unsigned __int16 *)(v25 + 56));
                v13 = (unsigned int *)P;
              }
            }
            if ( *(_QWORD *)&v13[2 * i + 2] )
            {
              _mm_lfence();
              v13 = (unsigned int *)P;
              v26 = *((_QWORD *)P + i + 1);
              if ( *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) )
              {
                if ( v26 )
                {
                  _mm_lfence();
                  v13 = (unsigned int *)P;
                  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v27 = 0LL;
                }
                if ( *(_QWORD *)&v13[2 * i + 2] )
                {
                  _mm_lfence();
                  v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  LODWORD(v28) = 0;
                }
                IoAddTriageDumpDataBlock(v28, (PVOID)0x388);
                if ( *(_WORD *)(v27 + 40) )
                {
                  IoAddTriageDumpDataBlock(v27 + 40, (PVOID)2);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 48), (PVOID)*(unsigned __int16 *)(v27 + 40));
                }
                v13 = (unsigned int *)P;
                if ( *((_QWORD *)P + i + 1) )
                {
                  _mm_lfence();
                  v13 = (unsigned int *)P;
                  v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v29 = 0LL;
                }
                if ( *(_WORD *)(v29 + 56) )
                {
                  if ( *(_QWORD *)&v13[2 * i + 2] )
                  {
                    _mm_lfence();
                    v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    LODWORD(v30) = 0;
                  }
                  IoAddTriageDumpDataBlock(v30 + 56, (PVOID)2);
                  v31 = P;
                  if ( *((_QWORD *)P + i + 1) )
                  {
                    _mm_lfence();
                    v31 = P;
                    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v32 = 0LL;
                  }
                  if ( v31[i + 1] )
                  {
                    _mm_lfence();
                    v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v33 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v33 + 64), (PVOID)*(unsigned __int16 *)(v32 + 56));
                  v13 = (unsigned int *)P;
                }
                if ( *(_QWORD *)&v13[2 * i + 2] )
                {
                  _mm_lfence();
                  v13 = (unsigned int *)P;
                  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v34 = 0LL;
                }
                if ( *(_QWORD *)(v34 + 16) )
                {
                  if ( *(_QWORD *)&v13[2 * i + 2] )
                  {
                    _mm_lfence();
                    v13 = (unsigned int *)P;
                    v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v35 = 0LL;
                  }
                  if ( *(_WORD *)(*(_QWORD *)(v35 + 16) + 56LL) )
                  {
                    if ( *(_QWORD *)&v13[2 * i + 2] )
                    {
                      _mm_lfence();
                      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v36 = 0LL;
                    }
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 16) + 56, (PVOID)2);
                    v37 = P;
                    if ( *((_QWORD *)P + i + 1) )
                    {
                      _mm_lfence();
                      v37 = P;
                      v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v38 = 0LL;
                    }
                    if ( v37[i + 1] )
                    {
                      _mm_lfence();
                      v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v39 = 0LL;
                    }
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(v39 + 16) + 64LL),
                      (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v38 + 16) + 56LL));
                    v13 = (unsigned int *)P;
                  }
                }
              }
            }
LABEL_73:
            KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v13[2 * i + 2], 0LL, 0LL);
          }
          if ( *(_QWORD *)(v16 + 16) )
          {
            Pool2 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x72775044u);
            v18 = (_QWORD *)Pool2;
            if ( !Pool2 )
            {
              DeviceRelations = -1073741670;
              break;
            }
            *(_BYTE *)(Pool2 + 48) = 0;
            *(_QWORD *)(Pool2 + 40) = v16 + 160;
            *(_QWORD *)(Pool2 + 16) = a1 + 160;
            PnpAcquirePowerRelationsQueueLock();
            v19 = *(_QWORD **)(a1 + 200);
            if ( (_QWORD *)*v19 != v6 )
              goto LABEL_26;
            *v18 = v6;
            v20 = v16 + 176;
            v18[1] = v19;
            *v19 = v18;
            *(_QWORD *)(a1 + 200) = v18;
            v21 = v18 + 3;
            v22 = *(_QWORD **)(v20 + 8);
            if ( *v22 != v20 )
              goto LABEL_26;
            *v21 = v20;
            v21[1] = v22;
            *v22 = v21;
            *(_QWORD *)(v20 + 8) = v21;
            PnpReleasePowerRelationsQueueLock();
            v13 = (unsigned int *)P;
          }
        }
      }
      else
      {
        DeviceRelations = 0;
      }
    }
    else
    {
      P = 0LL;
    }
  }
  PowerDependencyRelations = PiQueryPowerDependencyRelations(a1);
  if ( DeviceRelations >= 0 && PowerDependencyRelations < 0 )
    DeviceRelations = PowerDependencyRelations;
  PiValidatePowerRelations(a1);
  v41 = (PVOID *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        ObfDereferenceObject(v41[v2 + 1]);
        v41 = (PVOID *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v41, 0);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v43 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)(v43 - 768) > 2 && (unsigned int)(v43 - 789) > 1 )
    PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(a1 + 32));
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return (unsigned int)DeviceRelations;
}
