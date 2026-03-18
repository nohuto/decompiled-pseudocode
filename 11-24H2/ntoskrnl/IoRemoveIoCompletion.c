/*
 * XREFs of IoRemoveIoCompletion @ 0x1402A4220
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x14098B370 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x14098B530 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rdi
  unsigned __int64 v9; // rdx
  ULONG v10; // esi
  __int64 i; // rbx
  __int64 result; // rax
  ULONG_PTR v13; // rdi
  char v14; // al
  ULONG_PTR v15; // rdi
  __int64 v16; // r13
  int v17; // eax
  ULONG_PTR v18; // r15
  ULONG_PTR v19; // r12
  __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v27; // r8
  ULONG_PTR v28; // r15
  signed __int64 v29; // rax
  bool v30; // cc
  signed __int64 v31; // rax
  ULONG_PTR v32; // r8
  ULONG_PTR v33; // r15
  signed __int64 v34; // rax
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  signed __int64 v37; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+30h] [rbp-E8h]
  unsigned __int8 v40; // [rsp+38h] [rbp-E0h]
  __int64 v41; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v42; // [rsp+50h] [rbp-C8h]
  ULONG v43; // [rsp+60h] [rbp-B8h]
  ULONG_PTR v44; // [rsp+68h] [rbp-B0h]
  __int64 v45; // [rsp+70h] [rbp-A8h]
  PLIST_ENTRY *v46; // [rsp+78h] [rbp-A0h]
  _QWORD v47[4]; // [rsp+80h] [rbp-98h] BYREF
  ULONG *v48; // [rsp+A0h] [rbp-78h]
  _OWORD v49[3]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+0h]

  v8 = EntryArray;
  v46 = EntryArray;
  v45 = a2;
  v44 = (ULONG_PTR)a1;
  v47[1] = a1;
  v47[2] = a2;
  v47[3] = EntryArray;
  v48 = a5;
  v42 = 0LL;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v43 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_4;
    }
    v13 = (ULONG_PTR)v8[i];
    if ( v13 == 128 || v13 == 192 || v13 - 257 <= 1 )
      break;
    v14 = *(_BYTE *)(v13 + 16);
    if ( v14 )
    {
      if ( v14 == 2 )
      {
        v19 = *(_QWORD *)(v13 + 56);
        v16 = *(_QWORD *)(v13 + 48);
        LODWORD(v42) = *(_DWORD *)(v13 + 72);
        *((_QWORD *)&v42 + 1) = *(_QWORD *)(v13 + 64);
        BugCheckParameter2a = *(_QWORD *)(v13 + 80);
        CurrentIrql = KeGetCurrentIrql();
        v40 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 96), 0LL) )
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 96));
        }
        else
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v13 + 96));
        }
        *(_BYTE *)(v13 + 104) = 0;
        *(_QWORD *)(v13 + 88) = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 96), 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v13 + 96), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
        __writecr8(v40);
        v27 = BugCheckParameter2a;
        v28 = BugCheckParameter2a - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(BugCheckParameter2a - 48);
          v27 = BugCheckParameter2a;
        }
        v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v29 <= 1;
        v31 = v29 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v28 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v28 + 24) ^ (unsigned __int64)BYTE1(v28)],
              v27,
              1uLL,
              *(_QWORD *)(v28 + 8));
          if ( v31 < 0 )
            KeBugCheckEx(0x18u, 0LL, v27, 2uLL, v31);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v28);
          }
          else
          {
            if ( (*(_BYTE *)(v28 + 26) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v28 - ObpInfoMaskToOffset[*(_BYTE *)(v28 + 26) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v28);
            ObpRemoveObjectRoutine(v28, 0LL);
          }
        }
        v32 = v44;
        v33 = v44 - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v44 - 48);
          v32 = v44;
        }
        v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v34 <= 1;
        v35 = v34 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v33 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v33 + 24) ^ (unsigned __int64)BYTE1(v33)],
              v32,
              1uLL,
              *(_QWORD *)(v33 + 8));
          if ( v35 < 0 )
            KeBugCheckEx(0x18u, 0LL, v32, 2uLL, v35);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v33);
          }
          else
          {
            if ( (*(_BYTE *)(v33 + 26) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v33 - ObpInfoMaskToOffset[*(_BYTE *)(v33 + 26) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v33);
            ObpRemoveObjectRoutine(v33, 0LL);
          }
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v13 - 48);
        v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v36 <= 1;
        v37 = v36 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v13 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v13 - 48) >> 8)],
              v13,
              1uLL,
              *(_QWORD *)(v13 - 40));
          if ( v37 < 0 )
            KeBugCheckEx(0x18u, 0LL, v13, 2uLL, v37);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v13 - 48);
          }
          else
          {
            if ( (*(_BYTE *)(v13 - 22) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v13 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v13 - 22) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v13 - 48);
            ObpRemoveObjectRoutine(v13 - 48, 0LL);
          }
        }
      }
      else
      {
        v19 = *(_QWORD *)(v13 + 32);
        v16 = *(_QWORD *)(v13 + 24);
        LODWORD(v42) = *(_DWORD *)(v13 + 40);
        *((_QWORD *)&v42 + 1) = *(_QWORD *)(v13 + 48);
        IopFreeMiniCompletionPacket(v13);
      }
    }
    else
    {
      v15 = v13 - 168;
      BugCheckParameter2 = *(_QWORD *)(v15 + 96);
      v16 = *(_QWORD *)(v15 + 120);
      v42 = *(_OWORD *)(v15 + 48);
      v17 = *(_DWORD *)(v15 + 16);
      if ( (v17 & 0x2000) == 0 )
      {
        if ( (v17 & 0x8000) == 0 )
          goto LABEL_23;
        v23 = *(_QWORD *)(v15 + 88);
        do
        {
          v24 = v23;
          v25 = ((v23 >> 1) & 3) - 1;
          v9 = v23 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v25);
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 88), v9, v23);
        }
        while ( v24 != v23 );
        if ( !(_DWORD)v25 )
        {
LABEL_23:
          IoFreeIrp((PIRP)v15);
          v19 = BugCheckParameter2;
          goto LABEL_14;
        }
        goto LABEL_85;
      }
      v47[0] = 0LL;
      v41 = 0LL;
      v18 = *(_QWORD *)(v15 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
      memset(v49, 0, sizeof(v49));
      *(_QWORD *)(v15 + 96) = 0LL;
      if ( (_KPROCESS *)v18 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(v15 + 120, (unsigned int)v47, (unsigned int)&v41, v15 + 192, (__int64)&v41);
        v19 = BugCheckParameter2;
        goto LABEL_14;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v18 + 488)) )
      {
        IopDropIrp((PIRP)v15);
        LODWORD(v42) = -1073741536;
        *((_QWORD *)&v42 + 1) = 0LL;
LABEL_85:
        v19 = BugCheckParameter2;
        goto LABEL_14;
      }
      KiStackAttachProcess(v18);
      IopCompleteRequest(v15 + 120, (unsigned int)v47, (unsigned int)&v41, v15 + 192, (__int64)&v41);
      KiUnstackDetachProcess(v49, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v18 + 488));
      v19 = BugCheckParameter2;
    }
LABEL_14:
    v20 = 32LL * (unsigned int)i;
    if ( a6 )
    {
      v21 = v45;
      *(_QWORD *)(v20 + v45) = v16;
      *(_QWORD *)(v20 + v21 + 8) = v19;
      *(_OWORD *)(v20 + v21 + 16) = v42;
    }
    else
    {
      v22 = v45;
      *(_QWORD *)(v20 + v45) = v16;
      *(_QWORD *)(v20 + v22 + 8) = v19;
      *(_OWORD *)(v20 + v22 + 16) = v42;
    }
    v8 = v46;
  }
  v10 = 0;
  result = (unsigned int)v13;
LABEL_4:
  *v48 = v10;
  return result;
}
