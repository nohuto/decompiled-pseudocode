/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x1409358F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     MmGetAvailablePagesBelowPriority @ 0x14049DE88 (MmGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnAsyncContextCleanup @ 0x140935C84 (PfSnAsyncContextCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x140935CD8 (PfSnCleanupPrefetchHeader.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140935E08 (PfSnPreallocatePrefetchHeader.c)
 *     PfSnLogAsyncWorker @ 0x140935F4C (PfSnLogAsyncWorker.c)
 *     PfSnPowerBoost @ 0x140936054 (PfSnPowerBoost.c)
 *     PfpPrefetchSharedStart @ 0x140936164 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x140936270 (PfpPrefetchSharedInitialize.c)
 *     PfSnAsyncPrefetchStep @ 0x140937D74 (PfSnAsyncPrefetchStep.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17[4]; // [rsp+20h] [rbp-99h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+38h] [rbp-81h]
  _QWORD v20[2]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v21[7]; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v22; // [rsp+90h] [rbp-29h]
  unsigned int v23; // [rsp+94h] [rbp-25h]
  __int64 v24; // [rsp+98h] [rbp-21h]
  __int64 v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A8h] [rbp-11h]
  _OWORD v27[3]; // [rsp+B0h] [rbp-9h] BYREF

  v1 = (_DWORD *)*((_QWORD *)P + 26);
  v17[0] = 0;
  v3 = 0;
  memset(v27, 0, sizeof(v27));
  v4 = 0;
  memset_0(&v18, 0, 0x80uLL);
  v5 = *((_DWORD *)P + 59);
  v20[1] = v20;
  v18 = v1;
  v20[0] = v20;
  v21[1] = v21;
  v21[0] = v21;
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  v6 = 1;
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v27);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    v22 = v5;
    v23 = v5;
  }
  else
  {
    v22 = DefaultPagePriority - 1;
    v23 = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader(&v18) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(v23 + 1);
    v9 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v24 = v9;
    if ( v9 )
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x90uLL, 0x43536650u);
      v19 = Pool2;
      if ( Pool2 )
      {
        PfpPrefetchSharedInitialize(Pool2);
        *(_QWORD *)(v19 + 32) = &v18;
        *(_DWORD *)(v19 + 60) = 250;
        *(_DWORD *)(v19 + 56) = 15;
        if ( (int)PfpPrefetchSharedStart(v19) >= 0 && (int)PfSnOpenVolumesForPrefetch(&v18, v17) >= 0 )
        {
          v11 = v17[0];
          if ( v1[20] == 1 )
          {
            v11 = v17[0] | 1;
            v17[0] |= 1u;
          }
          if ( (dword_140E66FA0 & 4) != 0 )
          {
            v6 = 0;
            v11 &= ~2u;
            v17[0] = v11;
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
                while ( v6 < v1[31] && (int)PfSnAsyncPrefetchStep(P, &v18, (unsigned int)(1 << v6)) >= 0 )
                  ++v6;
              }
              goto LABEL_20;
            }
          }
          else
          {
            v12 = 1LL;
          }
          if ( (int)PfSnAsyncPrefetchStep(P, &v18, v12) < 0 )
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
    *(_QWORD *)(v13 + 472) = v25;
    v16 = *((_QWORD *)P + 28);
    v25 = 0LL;
    *(_DWORD *)(v16 + 480) = v26;
  }
  PfSnCleanupPrefetchHeader(&v18);
  _InterlockedDecrement(&dword_140E671C0);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v27, 0, v14, v15);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
