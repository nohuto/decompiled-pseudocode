/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x1408311EC
 * Callers:
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x140728E0C (PnpQueryRebalanceWorker.c)
 *     PnpAllocateResources @ 0x1408310F4 (PnpAllocateResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407283D8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x140832B48 (IopQueryDeviceResources.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     IopResourceRequirementsListToReqList @ 0x140A694D4 (IopResourceRequirementsListToReqList.c)
 *     IopRearrangeReqList @ 0x140AA02BC (IopRearrangeReqList.c)
 *     PnpFilterResourceRequirementsList @ 0x140AB35EC (PnpFilterResourceRequirementsList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // rcx
  void *v12; // rcx
  int v13; // esi
  __int64 v14; // rdi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h]
  __int64 v19; // [rsp+60h] [rbp+18h]

  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v5 = a1 + 24;
    while ( 1 )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (*(_DWORD *)(v5 - 16) & 0x20) == 0 )
        break;
LABEL_12:
      v5 += 64LL;
      if ( v5 - 24 >= a2 )
        return *a3 == 0 ? 0xC0000001 : 0;
    }
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    v6 = *(_QWORD *)(v5 - 24);
    if ( v6 )
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
    else
      v7 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v7 + 396) & 0x400) != 0 )
    {
      v12 = *(void **)(v7 + 440);
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        *(_QWORD *)(v7 + 440) = 0LL;
        PipClearDevNodeFlags(v7, 512LL);
        *(_DWORD *)(v5 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v5 )
    {
      v8 = *(_QWORD *)(v7 + 440);
      if ( !v8 || (*(_DWORD *)(v7 + 396) & 0x200) != 0 )
      {
        v9 = IopQueryDeviceResources(*(_QWORD *)(v5 - 24), 1LL, v5, &v17);
        if ( v9 < 0 || !*(_QWORD *)v5 )
        {
          *(_DWORD *)(v5 + 32) = v9;
LABEL_11:
          *(_DWORD *)(v5 - 16) |= 0x20u;
          goto LABEL_12;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v11 = *(void **)(v7 + 440);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0);
          PipClearDevNodeFlags(v7, 512LL);
        }
        *(_QWORD *)(v7 + 440) = *(_QWORD *)v5;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v5 = v8;
        *(_DWORD *)(v5 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v5 - 16) & 0x200) != 0 )
    {
      if ( (int)PnpFilterResourceRequirementsList(*(void **)v5) >= 0 && v19 )
        *(_QWORD *)v5 = v19;
      else
        *(_DWORD *)(v5 - 16) &= ~0x200u;
    }
    v13 = IopResourceRequirementsListToReqList(v5 - 24, v5 + 8);
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)(v5 + 8);
      if ( v14 )
      {
        IopRearrangeReqList(*(_QWORD *)(v5 + 8));
        if ( *(_QWORD *)(v14 + 24) )
        {
          v15 = *(_DWORD *)(v14 + 32);
          v16 = 0;
          *(_DWORD *)(v5 + 32) = v13;
          if ( v15 >= 3 )
            v16 = v15;
          ++*a3;
          *(_DWORD *)(v5 - 8) = v16;
          goto LABEL_12;
        }
        PnpFreeResourceRequirementsForAssignTable(v5 - 24, v5 + 40);
        v13 = -1073741438;
      }
    }
    *(_DWORD *)(v5 + 32) = v13;
    goto LABEL_11;
  }
  return *a3 == 0 ? 0xC0000001 : 0;
}
