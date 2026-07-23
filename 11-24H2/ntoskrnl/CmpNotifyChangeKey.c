/*
 * XREFs of CmpNotifyChangeKey @ 0x140AE6344
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CmpLogNotificationRegister @ 0x1407D6B24 (CmpLogNotificationRegister.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpNotifyChangeKey(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  __int64 Pool2; // rax
  __int64 *v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v26; // rdx
  __int64 **v27; // rcx
  void **p_SListFaultAddress; // rax
  __int64 *QuantumTarget; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-58h] BYREF

  v8 = a4;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v13 = -1073741444;
LABEL_9:
    CmpFreePostBlock(a2);
    return v13;
  }
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v14 )
  {
    v16 = (unsigned __int16)*((_DWORD *)a2 + 14);
    if ( v16 == 4 || (v17 = 0LL, v16 == 2) )
      v17 = 1LL;
    Pool2 = ExAllocatePool2(v17 + 256, 0x58uLL, 0x626E4D43u);
    v14 = Pool2;
    if ( !Pool2 )
    {
      v13 = -1073741670;
      goto LABEL_9;
    }
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(Pool2 + 48) = ((*(_DWORD *)(Pool2 + 48) ^ (a3 ^ *(_DWORD *)(Pool2 + 48)) & 0x3FFFFFFF) & 0x3FFFFFFF ^ (v8 << 30)) & 0x7FFFFFFF;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(a1 + 16) = Pool2;
    *(_QWORD *)(Pool2 + 40) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(Pool2 + 56));
    v20 = (__int64 *)(v15 + 1592);
    v11 = *(_QWORD *)(v15 + 1592);
    if ( v11 )
    {
      v12 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v20 = (__int64 *)v11;
        if ( ((*(_DWORD *)(*(_QWORD *)(v11 + 32) + 8LL) >> 21) & 0x3FFu) > (unsigned int)v12 )
          break;
        v11 = *(_QWORD *)v11;
        if ( !v11 )
          goto LABEL_14;
      }
      *(_QWORD *)v14 = v11;
      **(_QWORD **)(v11 + 8) = v14;
      *(_QWORD *)(v14 + 8) = *(_QWORD *)(v11 + 8);
      *(_QWORD *)(v11 + 8) = v14;
    }
    else
    {
LABEL_14:
      *v20 = v14;
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 8) = v20;
    }
  }
  v21 = (_QWORD *)(v14 + 16);
  v22 = *(_QWORD *)(v14 + 16);
  if ( *(_QWORD *)(v22 + 8) != v14 + 16 )
    goto LABEL_41;
  *a2 = v22;
  a2[1] = v21;
  *(_QWORD *)(v22 + 8) = a2;
  v23 = a2 + 4;
  *v21 = a2;
  if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
  {
    a2[5] = a2 + 4;
    *v23 = v23;
  }
  else
  {
    v11 = *(_QWORD *)(a7 + 40);
    if ( *(_QWORD *)v11 != a7 + 32 )
      goto LABEL_41;
    *v23 = a7 + 32;
    a2[5] = v11;
    *(_QWORD *)v11 = v23;
    *(_QWORD *)(a7 + 40) = v23;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
    }
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v32, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v26 = KeGetCurrentThread();
    v27 = (__int64 **)(a2 + 2);
    p_SListFaultAddress = &v26[1].SListFaultAddress;
    if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
    {
      QuantumTarget = (__int64 *)*p_SListFaultAddress;
      if ( *((void ***)*p_SListFaultAddress + 1) == p_SListFaultAddress )
      {
        *v27 = QuantumTarget;
        a2[3] = p_SListFaultAddress;
        QuantumTarget[1] = (__int64)v27;
        *p_SListFaultAddress = v27;
LABEL_31:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        goto LABEL_36;
      }
    }
    else
    {
      QuantumTarget = (__int64 *)v26[1].QuantumTarget;
      if ( (void **)*QuantumTarget == p_SListFaultAddress )
      {
        *v27 = (__int64 *)p_SListFaultAddress;
        a2[3] = QuantumTarget;
        *QuantumTarget = (__int64)v27;
        p_SListFaultAddress[1] = v27;
        goto LABEL_31;
      }
    }
LABEL_41:
    __fastfail(3u);
  }
  v30 = (_QWORD *)qword_140FD85E0;
  QuantumTarget = &CmpAsyncKernelPostList;
  v31 = a2 + 2;
  if ( *(__int64 **)qword_140FD85E0 != &CmpAsyncKernelPostList )
    goto LABEL_41;
  *v31 = &CmpAsyncKernelPostList;
  a2[3] = v30;
  *v30 = v31;
  qword_140FD85E0 = (__int64)(a2 + 2);
LABEL_36:
  if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x2000000) != 0 )
    CmpLogNotificationRegister(
      (__int64)a2,
      *(_QWORD *)(a1 + 8),
      *((_DWORD *)a2 + 14),
      v8,
      HIWORD(*((_DWORD *)a2 + 14)) & 1);
  if ( *(int *)(v14 + 48) >= 0 )
    return 259LL;
  CmpPostNotify(v14, (__int64)QuantumTarget, v12, 0x10Cu, 1, 0LL, 0LL);
  return 0LL;
}
