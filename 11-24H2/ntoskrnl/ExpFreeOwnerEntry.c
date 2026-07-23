/*
 * XREFs of ExpFreeOwnerEntry @ 0x14031EC90
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall ExpFreeOwnerEntry(__int64 a1)
{
  signed __int64 result; // rax
  ULONG_PTR v3; // rdi
  char v4; // si
  KIRQL v5; // bp
  _QWORD *v6; // r14
  _DWORD *v7; // rsi
  signed __int64 v8; // rax
  bool v9; // cc
  __int64 Pool2; // rax
  volatile signed __int64 *v11; // rcx
  _QWORD *v12; // rcx
  __int64 **v13; // rsi
  __int64 *v14; // rcx
  __int64 **v15; // rsi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( (result & 2) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v3 & 3) != 0 )
  {
    goto LABEL_16;
  }
  if ( v3 )
  {
    if ( (result & 1) == 0 )
    {
LABEL_9:
      v7 = (_DWORD *)(a1 + 8);
      if ( (result & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 1508));
        *v7 &= ~4u;
        result = (unsigned int)*v7;
        v7 = (_DWORD *)(a1 + 8);
      }
      if ( (result & 2) != 0 )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v3 - 48);
        v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v9 = v8 <= 1;
        result = v8 - 1;
        if ( v9 )
        {
          if ( *(_QWORD *)(v3 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v3 - 48) >> 8)],
              v3,
              3uLL,
              *(_QWORD *)(v3 - 40));
          if ( result < 0 )
            KeBugCheckEx(0x18u, 0LL, v3, 4uLL, result);
          result = ObpDeferObjectDeletion(v3 - 48);
          v7 = (_DWORD *)(a1 + 8);
        }
        *v7 &= ~2u;
      }
      goto LABEL_16;
    }
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    if ( PspAlwaysTrackIoBoosting )
    {
      v4 = 1;
      Pool2 = ExAllocatePool2(0x40uLL, 0x70uLL, 0x736F6F42u);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
        v6[12] = KeGetCurrentThread();
        v6[13] = 0LL;
      }
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 1552));
    }
    if ( *(_DWORD *)(v3 + 1504) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 1504));
      if ( !v4 )
      {
LABEL_8:
        result = *(_DWORD *)(a1 + 8) & 0xFFFFFFFE;
        *(_DWORD *)(a1 + 8) = result;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(v3 + 1504) )
      {
        if ( v6 )
        {
          v12 = *(_QWORD **)(v3 + 1544);
          if ( *v12 != v3 + 1536 )
LABEL_38:
            __fastfail(3u);
          *v6 = v3 + 1536;
          v6[1] = v12;
          *v12 = v6;
          *(_QWORD *)(v3 + 1544) = v6;
        }
      }
      else
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0x736F6F42u);
        v13 = (__int64 **)(v3 + 1520);
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 == (__int64 *)v13 )
            break;
          v18 = *v14;
          if ( (__int64 **)v14[1] != v13 || *(__int64 **)(v18 + 8) != v14 )
            goto LABEL_38;
          *v13 = (__int64 *)v18;
          *(_QWORD *)(v18 + 8) = v13;
          ExFreePoolWithTag(v14, 0x736F6F42u);
        }
        v15 = (__int64 **)(v3 + 1536);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v17 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
            goto LABEL_38;
          *v15 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
      }
    }
    else if ( !v4 )
    {
      goto LABEL_8;
    }
    v11 = (volatile signed __int64 *)(v3 + 1552);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v11, 0LL);
    else
      KiReleaseSpinLockInstrumented(v11, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
    goto LABEL_8;
  }
LABEL_16:
  *(_QWORD *)a1 = 0LL;
  return result;
}
