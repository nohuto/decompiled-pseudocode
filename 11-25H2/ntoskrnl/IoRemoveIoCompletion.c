/*
 * XREFs of IoRemoveIoCompletion @ 0x14029E4A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletion @ 0x140999EC0 (NtRemoveIoCompletion.c)
 *     NtRemoveIoCompletionEx @ 0x14099A080 (NtRemoveIoCompletionEx.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
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
  __int64 v11; // r9
  __int64 i; // rbx
  __int64 result; // rax
  ULONG_PTR v14; // rdi
  char v15; // al
  ULONG_PTR v16; // rdi
  __int64 v17; // r13
  int v18; // eax
  unsigned __int64 v19; // r15
  ULONG_PTR v20; // r12
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
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
  void *retaddr; // [rsp+118h] [rbp+0h]

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
    v14 = (ULONG_PTR)v8[i];
    if ( v14 == 128 || v14 == 192 || v14 - 257 <= 1 )
      break;
    v15 = *(_BYTE *)(v14 + 16);
    if ( v15 )
    {
      if ( v15 == 2 )
      {
        v20 = *(_QWORD *)(v14 + 56);
        v17 = *(_QWORD *)(v14 + 48);
        LODWORD(v42) = *(_DWORD *)(v14 + 72);
        *((_QWORD *)&v42 + 1) = *(_QWORD *)(v14 + 64);
        BugCheckParameter2a = *(_QWORD *)(v14 + 80);
        CurrentIrql = KeGetCurrentIrql();
        v40 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 96), 0LL) )
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v14 + 96));
        }
        else
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)(v14 + 96));
        }
        *(_BYTE *)(v14 + 104) = 0;
        *(_QWORD *)(v14 + 88) = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 96), 0LL);
        else
          KiReleaseSpinLockInstrumented(v14 + 96, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
        __writecr8(v40);
        v27 = BugCheckParameter2a;
        v28 = BugCheckParameter2a - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(BugCheckParameter2a - 48, 0, 1u, 0x746C6644u);
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
            ObpDeferObjectDeletion(v28, v9, v27, v11);
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
          ObpPushStackInfo(v44 - 48, 0, 1u, 0x746C6644u);
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
            ObpDeferObjectDeletion(v33, v9, v32, v11);
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
          ObpPushStackInfo(v14 - 48, 0, 1u, 0x746C6644u);
        v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v30 = v36 <= 1;
        v37 = v36 - 1;
        if ( v30 )
        {
          if ( *(_QWORD *)(v14 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)],
              v14,
              1uLL,
              *(_QWORD *)(v14 - 40));
          if ( v37 < 0 )
            KeBugCheckEx(0x18u, 0LL, v14, 2uLL, v37);
          if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
          {
            ObpDeferObjectDeletion(v14 - 48, v9, v32, v11);
          }
          else
          {
            if ( (*(_BYTE *)(v14 - 22) & 0x40) != 0
              && *(_BYTE *)(*(_QWORD *)(v14 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v14 - 22) & 0x7F]) + 24LL) )
            {
              ObpHandleRevocationBlockRemoveObject();
            }
            if ( ObpTraceFlags )
              ObpDeregisterObject(v14 - 48);
            ObpRemoveObjectRoutine(v14 - 48, 0LL);
          }
        }
      }
      else
      {
        v20 = *(_QWORD *)(v14 + 32);
        v17 = *(_QWORD *)(v14 + 24);
        LODWORD(v42) = *(_DWORD *)(v14 + 40);
        *((_QWORD *)&v42 + 1) = *(_QWORD *)(v14 + 48);
        IopFreeMiniCompletionPacket(v14);
      }
    }
    else
    {
      v16 = v14 - 168;
      BugCheckParameter2 = *(_QWORD *)(v16 + 96);
      v17 = *(_QWORD *)(v16 + 120);
      v42 = *(_OWORD *)(v16 + 48);
      v18 = *(_DWORD *)(v16 + 16);
      if ( (v18 & 0x2000) == 0 )
      {
        if ( (v18 & 0x8000) == 0 )
          goto LABEL_23;
        v24 = *(_QWORD *)(v16 + 88);
        do
        {
          v25 = v24;
          v11 = ((v24 >> 1) & 3) - 1;
          v9 = v24 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v11);
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 88), v9, v24);
        }
        while ( v25 != v24 );
        if ( !(_DWORD)v11 )
        {
LABEL_23:
          IoFreeIrp((PIRP)v16);
          v20 = BugCheckParameter2;
          goto LABEL_14;
        }
        goto LABEL_85;
      }
      v47[0] = 0LL;
      v41 = 0LL;
      v19 = *(_QWORD *)(v16 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
      memset(v49, 0, sizeof(v49));
      *(_QWORD *)(v16 + 96) = 0LL;
      if ( (_KPROCESS *)v19 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(v16 + 120, (unsigned int)v47, (unsigned int)&v41, v16 + 192, (__int64)&v41);
        v20 = BugCheckParameter2;
        goto LABEL_14;
      }
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v19 + 488)) )
      {
        IopDropIrp((PIRP)v16, *(_QWORD *)(v16 + 192));
        LODWORD(v42) = -1073741536;
        *((_QWORD *)&v42 + 1) = 0LL;
LABEL_85:
        v20 = BugCheckParameter2;
        goto LABEL_14;
      }
      KiStackAttachProcess((_KPROCESS *)v19, 0, (__int64)v49);
      IopCompleteRequest(v16 + 120, (unsigned int)v47, (unsigned int)&v41, v16 + 192, (__int64)&v41);
      KiUnstackDetachProcess((__int64)v49, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v19 + 488));
      v20 = BugCheckParameter2;
    }
LABEL_14:
    v21 = 32LL * (unsigned int)i;
    if ( a6 )
    {
      v22 = v45;
      *(_QWORD *)(v21 + v45) = v17;
      *(_QWORD *)(v21 + v22 + 8) = v20;
      *(_OWORD *)(v21 + v22 + 16) = v42;
    }
    else
    {
      v23 = v45;
      *(_QWORD *)(v21 + v45) = v17;
      *(_QWORD *)(v21 + v23 + 8) = v20;
      *(_OWORD *)(v21 + v23 + 16) = v42;
    }
    v8 = v46;
  }
  v10 = 0;
  result = (unsigned int)v14;
LABEL_4:
  *v48 = v10;
  return result;
}
