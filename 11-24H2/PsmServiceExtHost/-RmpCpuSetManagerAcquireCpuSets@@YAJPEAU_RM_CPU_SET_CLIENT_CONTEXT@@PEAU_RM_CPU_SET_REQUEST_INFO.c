/*
 * XREFs of ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089CAC
 * Callers:
 *     ?RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEA_KPEAU_WNF_STATE_NAME@@@Z @ 0x1800873F8 (-RmSrvCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_IN.c)
 *     ?RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C330 (-RmpGameModeAcquireCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_P.c)
 * Callees:
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000E754 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002EB68 (RmpWnfCreateStateNameForClient.c)
 *     RmpWnfGetPublisherSid @ 0x18002EE50 (RmpWnfGetPublisherSid.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A0CC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x18008A6D8 (-RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST.c)
 *     ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008AD68 (-RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFOR.c)
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B818 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x18008B904 (-RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@P.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerAcquireCpuSets(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        unsigned int a3,
        struct _RM_CPU_SET_ALLOCATION **a4)
{
  struct _RM_CPU_SET_MANAGER *v7; // rbp
  int PublisherSid; // ebx
  struct _RM_CPU_SET_ALLOCATION *Heap; // rax
  struct _RM_CPU_SET_ALLOCATION *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  struct _RM_CPU_SET_SCORE *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  struct _RM_CPU_SET_CLIENT_CONTEXT **v17; // rdx
  struct _RM_CPU_SET_CLIENT_CONTEXT *v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-98h] BYREF
  struct _RM_CPU_SET_SCORE *v21; // [rsp+28h] [rbp-90h] BYREF
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-88h] BYREF

  v20 = 0;
  v21 = 0LL;
  v7 = *(struct _RM_CPU_SET_MANAGER **)a1;
  if ( (unsigned int)(*(_DWORD *)a2 - 1) > 0x1FF )
  {
    PublisherSid = -1073741584;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 1) & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1073741584;
    PublisherSid = RmpCpuSetManagerCheckRequestSatisfiability(*(struct _RM_CPU_SET_MANAGER **)a1, a2, a3);
    if ( PublisherSid < 0 )
      return (unsigned int)PublisherSid;
    PublisherSid = RmpCpuSetManagerRankCpuSets(v7, a2, &v21, &v20);
    if ( PublisherSid >= 0 )
    {
      Heap = (struct _RM_CPU_SET_ALLOCATION *)HampAllocateHeap(0x170uLL);
      v10 = Heap;
      if ( Heap )
      {
        RmpCpuSetManagerInitializeAllocation(v7, a2, Heap);
        memset_0(DestinationSid, 0, 0x44uLL);
        PublisherSid = RmpWnfGetPublisherSid(DestinationSid);
        if ( PublisherSid < 0
          || (PublisherSid = RmpWnfCreateStateNameForClient(DestinationSid, 2056LL, 0, (__int64)v10 + 96),
              PublisherSid < 0) )
        {
          RmpObjectRelease((char *)v10, v11);
        }
        else
        {
          v12 = 0;
          if ( *((_DWORD *)v10 + 90) < *(_DWORD *)a2 )
          {
            v13 = v21;
            do
            {
              v14 = v12++;
              v14 *= 2LL;
              v15 = *((unsigned int *)v13 + 2 * v14);
              v16 = *((_DWORD *)v13 + 2 * v14 + 1);
              *((_QWORD *)v7 + v15 + 43) &= ~(1LL << v16);
              *((_DWORD *)v7 + 353) |= 1u;
              --*((_DWORD *)v7 + 350);
              *((_QWORD *)v10 + v15 + 13) |= 1LL << v16;
              ++*((_DWORD *)v10 + 90);
            }
            while ( *((_DWORD *)v10 + 90) < *(_DWORD *)a2 );
          }
          RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*(_QWORD *)a1 + 24LL), v10);
          *((_QWORD *)v10 + 7) = a1;
          v17 = (struct _RM_CPU_SET_CLIENT_CONTEXT **)*((_QWORD *)a1 + 4);
          v18 = (struct _RM_CPU_SET_ALLOCATION *)((char *)v10 + 64);
          if ( *v17 != (struct _RM_CPU_SET_CLIENT_CONTEXT *)((char *)a1 + 24) )
            __fastfail(3u);
          *(_QWORD *)v18 = (char *)a1 + 24;
          *((_QWORD *)v10 + 9) = v17;
          *v17 = v18;
          *((_QWORD *)a1 + 4) = v18;
          if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 2) <= 1 )
            __fastfail(0xEu);
          RmpCpuSetManagerApplyAllPolicyChanges(v7);
          RmpCpuSetManagerPublishAllocationState(v10);
          PublisherSid = 0;
          *a4 = v10;
        }
      }
      else
      {
        PublisherSid = -1073741801;
      }
    }
  }
  if ( v21 )
    HampFreeHeap(v21);
  return (unsigned int)PublisherSid;
}
