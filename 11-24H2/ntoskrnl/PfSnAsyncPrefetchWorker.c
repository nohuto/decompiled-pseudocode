/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x140951F40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1402CF6C8 (MmGetAvailablePagesBelowPriority.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PfSnAsyncContextCleanup @ 0x1409522D4 (PfSnAsyncContextCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x140952328 (PfSnCleanupPrefetchHeader.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140952458 (PfSnPreallocatePrefetchHeader.c)
 *     PfSnLogAsyncWorker @ 0x14095259C (PfSnLogAsyncWorker.c)
 *     PfSnPowerBoost @ 0x1409526A4 (PfSnPowerBoost.c)
 *     PfpPrefetchSharedStart @ 0x1409527B4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x1409528C0 (PfpPrefetchSharedInitialize.c)
 *     PfSnAsyncPrefetchStep @ 0x1409543C4 (PfSnAsyncPrefetchStep.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  _DWORD *v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int DefaultPagePriority; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v9; // rax
  __int64 Pool2; // rax
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15[4]; // [rsp+20h] [rbp-99h] BYREF
  _DWORD *v16; // [rsp+30h] [rbp-89h] BYREF
  __int64 v17; // [rsp+38h] [rbp-81h]
  _QWORD v18[2]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v19[7]; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v20; // [rsp+90h] [rbp-29h]
  unsigned int v21; // [rsp+94h] [rbp-25h]
  __int64 v22; // [rsp+98h] [rbp-21h]
  __int64 v23; // [rsp+A0h] [rbp-19h]
  int v24; // [rsp+A8h] [rbp-11h]
  _OWORD v25[3]; // [rsp+B0h] [rbp-9h] BYREF

  v1 = (_DWORD *)*((_QWORD *)P + 26);
  v15[0] = 0;
  v3 = 0;
  memset(v25, 0, sizeof(v25));
  v4 = 0;
  memset_0(&v16, 0, 0x80uLL);
  v5 = *((_DWORD *)P + 59);
  v18[1] = v18;
  v16 = v1;
  v18[0] = v18;
  v19[1] = v19;
  v19[0] = v19;
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  v6 = 1;
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v25);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    v20 = v5;
    v21 = v5;
  }
  else
  {
    v20 = DefaultPagePriority - 1;
    v21 = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(&v16) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(v21 + 1);
    v9 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v22 = v9;
    if ( v9 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v17 = Pool2;
      if ( Pool2 )
      {
        PfpPrefetchSharedInitialize(Pool2);
        *(_QWORD *)(v17 + 32) = &v16;
        *(_DWORD *)(v17 + 60) = 250;
        *(_DWORD *)(v17 + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v17) >= 0 && (int)PfSnOpenVolumesForPrefetch(&v16, v15) >= 0 )
        {
          v11 = v15[0];
          if ( v1[20] == 1 )
          {
            v11 = v15[0] | 1;
            v15[0] |= 1u;
          }
          if ( (dword_140E66E50 & 4) != 0 )
          {
            v6 = 0;
            v11 &= ~2u;
            v15[0] = v11;
            goto LABEL_19;
          }
          if ( (v11 & 1) != 0 )
          {
            v6 = v1[31];
            v12 = (unsigned int)((1 << v6) - 1);
            if ( 1 << v6 == 1 )
            {
LABEL_18:
              ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
              v3 = 1;
              PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
LABEL_19:
              if ( v6 < v1[31] && (v11 & 2) == 0 )
              {
                _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1632LL), 5000);
                while ( v6 < v1[31] && (int)PfSnAsyncPrefetchStep(P, &v16, (unsigned int)(1 << v6)) >= 0 )
                  ++v6;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v12 = 1LL;
          }
          if ( (int)PfSnAsyncPrefetchStep(P, &v16, v12) < 0 )
            goto LABEL_20;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_20:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1632LL), 0);
  v13 = *((_QWORD *)P + 28);
  if ( v13 && !*(_QWORD *)(v13 + 472) && !memcmp((const void *)(v13 + 24), v1 + 4, 0x40uLL) )
  {
    *(_QWORD *)(v13 + 472) = v23;
    v14 = *((_QWORD *)P + 28);
    v23 = 0LL;
    *(_DWORD *)(v14 + 480) = v24;
  }
  PfSnCleanupPrefetchHeader(&v16);
  _InterlockedDecrement(&dword_140E67070);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v25, 0);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
