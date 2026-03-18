/*
 * XREFs of ExpFreeOwnerEntry @ 0x14029C030
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall ExpFreeOwnerEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  ULONG_PTR v6; // rdi
  char v7; // si
  KIRQL v8; // bp
  _QWORD *v9; // r14
  __int64 v10; // rdx
  _DWORD *v11; // rsi
  signed __int64 v12; // rax
  bool v13; // cc
  __int64 Pool2; // rax
  volatile signed __int64 *v15; // rcx
  _QWORD *v16; // rcx
  __int64 **v17; // rsi
  __int64 *v18; // rcx
  __int64 **v19; // rsi
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  if ( (result & 2) != 0 )
  {
    v6 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v6 & 3) != 0 )
  {
    goto LABEL_16;
  }
  if ( v6 )
  {
    if ( (result & 1) == 0 )
    {
LABEL_9:
      v10 = a1;
      v11 = (_DWORD *)(a1 + 8);
      if ( (result & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 1508));
        *v11 &= ~4u;
        result = (unsigned int)*v11;
        v11 = (_DWORD *)(a1 + 8);
      }
      if ( (result & 2) != 0 )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v6 - 48);
        v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v13 = v12 <= 1;
        result = v12 - 1;
        if ( v13 )
        {
          if ( *(_QWORD *)(v6 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v6 - 48) >> 8)],
              v6,
              3uLL,
              *(_QWORD *)(v6 - 40));
          if ( result < 0 )
            KeBugCheckEx(0x18u, 0LL, v6, 4uLL, result);
          result = ObpDeferObjectDeletion(v6 - 48, v10, a3, a4);
          v11 = (_DWORD *)(a1 + 8);
        }
        *v11 &= ~2u;
      }
      goto LABEL_16;
    }
    v7 = 0;
    v8 = 0;
    v9 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v7 = 1;
      Pool2 = ExAllocatePool2(0x40uLL);
      v9 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
        v9[12] = KeGetCurrentThread();
        v9[13] = 0LL;
      }
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 1552));
    }
    if ( *(_DWORD *)(v6 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 1504));
      if ( !v7 )
      {
LABEL_8:
        result = *(_DWORD *)(a1 + 8) & 0xFFFFFFFE;
        *(_DWORD *)(a1 + 8) = result;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v6 + 1504) )
      {
        if ( v9 )
        {
          v16 = *(_QWORD **)(v6 + 1544);
          if ( *v16 != v6 + 1536 )
LABEL_38:
            __fastfail(3u);
          *v9 = v6 + 1536;
          v9[1] = v16;
          *v16 = v9;
          *(_QWORD *)(v6 + 1544) = v9;
        }
      }
      else
      {
        if ( v9 )
          ExFreePoolWithTag(v9, 0x736F6F42u);
        v17 = (__int64 **)(v6 + 1520);
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 == (__int64 *)v17 )
            break;
          v22 = *v18;
          if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v22 + 8) != v18 )
            goto LABEL_38;
          *v17 = (__int64 *)v22;
          *(_QWORD *)(v22 + 8) = v17;
          ExFreePoolWithTag(v18, 0x736F6F42u);
        }
        v19 = (__int64 **)(v6 + 1536);
        while ( 1 )
        {
          v20 = *v19;
          if ( *v19 == (__int64 *)v19 )
            break;
          v21 = *v20;
          if ( (__int64 **)v20[1] != v19 || *(__int64 **)(v21 + 8) != v20 )
            goto LABEL_38;
          *v19 = (__int64 *)v21;
          *(_QWORD *)(v21 + 8) = v19;
          ExFreePoolWithTag(v20, 0x736F6F42u);
        }
      }
    }
    else if ( !v7 )
    {
      goto LABEL_8;
    }
    v15 = (volatile signed __int64 *)(v6 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v15, 0LL);
    else
      KiReleaseSpinLockInstrumented(v15, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8(v8);
    goto LABEL_8;
  }
LABEL_16:
  *(_QWORD *)a1 = 0LL;
  return result;
}
