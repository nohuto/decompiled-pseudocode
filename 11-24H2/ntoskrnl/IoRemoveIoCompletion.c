/*
 * XREFs of IoRemoveIoCompletion @ 0x1402D3950
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x140975980 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x140975B40 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     IopDropIrp @ 0x1403B3CD0 (IopDropIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
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
  ULONG_PTR v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  __int64 result; // rax
  ULONG_PTR v15; // rdi
  char v16; // al
  ULONG_PTR v17; // rdi
  __int64 v18; // r13
  int v19; // eax
  unsigned __int64 v20; // r15
  ULONG_PTR v21; // r12
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v27; // r8
  ULONG_PTR v28; // r15
  signed __int64 v29; // rax
  bool v30; // cc
  signed __int64 v31; // rax
  ULONG_PTR v32; // r15
  signed __int64 v33; // rax
  signed __int64 v34; // rax
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2a; // [rsp+30h] [rbp-E8h]
  unsigned __int8 v41; // [rsp+38h] [rbp-E0h]
  __int64 v42; // [rsp+48h] [rbp-D0h] BYREF
  __int128 v43; // [rsp+50h] [rbp-C8h]
  ULONG v44; // [rsp+60h] [rbp-B8h]
  ULONG_PTR v45; // [rsp+68h] [rbp-B0h]
  __int64 v46; // [rsp+70h] [rbp-A8h]
  PLIST_ENTRY *v47; // [rsp+78h] [rbp-A0h]
  _QWORD v48[4]; // [rsp+80h] [rbp-98h] BYREF
  ULONG *v49; // [rsp+A0h] [rbp-78h]
  _OWORD v50[3]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 retaddr; // [rsp+118h] [rbp+0h]

  v8 = EntryArray;
  v47 = EntryArray;
  v46 = a2;
  v45 = (ULONG_PTR)a1;
  v48[1] = a1;
  v48[2] = a2;
  v48[3] = EntryArray;
  v49 = a5;
  v43 = 0LL;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v44 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_4;
    }
    v15 = (ULONG_PTR)v8[i];
    if ( v15 == 128 || v15 == 192 || v15 - 257 <= 1 )
      break;
    v16 = *(_BYTE *)(v15 + 16);
    if ( v16 )
    {
      if ( v16 == 2 )
      {
        v21 = *(_QWORD *)(v15 + 56);
        v18 = *(_QWORD *)(v15 + 48);
        LODWORD(v43) = *(_DWORD *)(v15 + 72);
        *((_QWORD *)&v43 + 1) = *(_QWORD *)(v15 + 64);
        BugCheckParameter2a = *(_QWORD *)(v15 + 80);
        CurrentIrql = KeGetCurrentIrql();
        v41 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 96), 0LL) )
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v15 + 96), v9, v11, v12);
        }
        else
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v15 + 96));
        }
        *(_BYTE *)(v15 + 104) = 0;
        *(_QWORD *)(v15 + 88) = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 96), 0LL);
        else
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v15 + 96), retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v41);
        __writecr8(v41);
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
        v11 = v45;
        v32 = v45 - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v45 - 48);
          v11 = v45;
        }
        v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v33 <= 1;
        v34 = v33 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v32 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)],
              v11,
              1uLL,
              *(_QWORD *)(v32 + 8));
          if ( v34 < 0 )
            KeBugCheckEx(0x18u, 0LL, v11, 2uLL, v34);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v32);
          }
          else
          {
            if ( (*(_BYTE *)(v32 + 26) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v32 - ObpInfoMaskToOffset[*(_BYTE *)(v32 + 26) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v32);
            ObpRemoveObjectRoutine(v32, 0LL);
          }
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v15 - 48);
        v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v35 <= 1;
        v36 = v35 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v15 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)],
              v15,
              1uLL,
              *(_QWORD *)(v15 - 40));
          if ( v36 < 0 )
            KeBugCheckEx(0x18u, 0LL, v15, 2uLL, v36);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v15 - 48);
          }
          else
          {
            if ( (*(_BYTE *)(v15 - 22) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v15 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v15 - 22) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v15 - 48);
            ObpRemoveObjectRoutine(v15 - 48, 0LL);
          }
        }
      }
      else
      {
        v21 = *(_QWORD *)(v15 + 32);
        v18 = *(_QWORD *)(v15 + 24);
        LODWORD(v43) = *(_DWORD *)(v15 + 40);
        *((_QWORD *)&v43 + 1) = *(_QWORD *)(v15 + 48);
        IopFreeMiniCompletionPacket(v15);
      }
    }
    else
    {
      v17 = v15 - 168;
      BugCheckParameter2 = *(_QWORD *)(v17 + 96);
      v18 = *(_QWORD *)(v17 + 120);
      v43 = *(_OWORD *)(v17 + 48);
      v19 = *(_DWORD *)(v17 + 16);
      if ( (v19 & 0x2000) == 0 )
      {
        if ( (v19 & 0x8000) == 0 )
          goto LABEL_23;
        v25 = *(_QWORD *)(v17 + 88);
        do
        {
          v11 = v25;
          v12 = ((v25 >> 1) & 3) - 1;
          v9 = v25 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v12);
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 88), v9, v25);
        }
        while ( v11 != v25 );
        if ( !(_DWORD)v12 )
        {
LABEL_23:
          IoFreeIrp((PIRP)v17);
          v21 = BugCheckParameter2;
          goto LABEL_14;
        }
        goto LABEL_85;
      }
      v48[0] = 0LL;
      v42 = 0LL;
      v20 = *(_QWORD *)(v17 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
      memset(v50, 0, sizeof(v50));
      *(_QWORD *)(v17 + 96) = 0LL;
      if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(v17 + 120, (unsigned int)v48, (unsigned int)&v42, v17 + 192, (__int64)&v42);
        v21 = BugCheckParameter2;
        goto LABEL_14;
      }
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 488)) )
      {
        IopDropIrp((PIRP)v17);
        LODWORD(v43) = -1073741536;
        *((_QWORD *)&v43 + 1) = 0LL;
LABEL_85:
        v21 = BugCheckParameter2;
        goto LABEL_14;
      }
      KiStackAttachProcess((_KPROCESS *)v20, 0, (__int64)v50);
      IopCompleteRequest(v17 + 120, (unsigned int)v48, (unsigned int)&v42, v17 + 192, (__int64)&v42);
      KiUnstackDetachProcess((__int64)v50, 0, v37, v38);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 488));
      v21 = BugCheckParameter2;
    }
LABEL_14:
    v22 = 32LL * (unsigned int)i;
    if ( a6 )
    {
      v23 = v46;
      *(_QWORD *)(v22 + v46) = v18;
      *(_QWORD *)(v22 + v23 + 8) = v21;
      *(_OWORD *)(v22 + v23 + 16) = v43;
    }
    else
    {
      v24 = v46;
      *(_QWORD *)(v22 + v46) = v18;
      *(_QWORD *)(v22 + v24 + 8) = v21;
      *(_OWORD *)(v22 + v24 + 16) = v43;
    }
    v8 = v47;
  }
  v10 = 0;
  result = (unsigned int)v15;
LABEL_4:
  *v49 = v10;
  return result;
}
