/*
 * XREFs of CmpNotifyChangeKey @ 0x1409391FC
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404F1ECC (Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpLogNotificationRegister @ 0x1407C6E50 (CmpLogNotificationRegister.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
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
  _QWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 Pool2; // rax
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  __int64 *QuantumTarget; // rdx
  _QWORD *v24; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v27; // rdx
  __int64 **v28; // rcx
  void **p_SListFaultAddress; // rax
  unsigned int v31; // ebx
  signed __int32 v32[8]; // [rsp+0h] [rbp-58h] BYREF

  v8 = a4;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v31 = -1073741444;
    goto LABEL_35;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v13 )
    goto LABEL_3;
  v17 = (unsigned __int16)*((_DWORD *)a2 + 14);
  if ( !(unsigned int)Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
    || v17 == 4
    || (v18 = 0LL, v17 == 2) )
  {
    v18 = 1LL;
  }
  Pool2 = ExAllocatePool2(v18 + 256);
  v13 = Pool2;
  if ( !Pool2 )
  {
    v31 = -1073741670;
LABEL_35:
    CmpFreePostBlock(a2);
    return v31;
  }
  *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(Pool2 + 48) = ((*(_DWORD *)(Pool2 + 48) ^ (a3 ^ *(_DWORD *)(Pool2 + 48)) & 0x3FFFFFFF) & 0x3FFFFFFF ^ (v8 << 30)) & 0x7FFFFFFF;
  *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
  *(_QWORD *)(a1 + 16) = Pool2;
  *(_QWORD *)(Pool2 + 40) = a1;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(Pool2 + 56));
  v12 = v14 + 1592;
  while ( 1 )
  {
    v20 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
      break;
    v12 = *(_QWORD *)v12;
    LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(v20 + 32) + 8LL) & 0x7FE00000;
    if ( (unsigned int)v11 > (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x7FE00000u) )
    {
      *(_QWORD *)v13 = v12;
      **(_QWORD **)(v12 + 8) = v13;
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(v12 + 8);
      *(_QWORD *)(v12 + 8) = v13;
      goto LABEL_3;
    }
  }
  *(_QWORD *)v12 = v13;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = v12;
LABEL_3:
  v15 = (_QWORD *)(v13 + 16);
  v16 = *(_QWORD *)(v13 + 16);
  if ( *(_QWORD *)(v16 + 8) != v13 + 16 )
    goto LABEL_4;
  *a2 = v16;
  a2[1] = v15;
  *(_QWORD *)(v16 + 8) = a2;
  v21 = a2 + 4;
  *v15 = a2;
  if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
  {
    a2[5] = a2 + 4;
    *v21 = v21;
  }
  else
  {
    v11 = *(_QWORD **)(a7 + 40);
    if ( *v11 != a7 + 32 )
      goto LABEL_4;
    *v21 = a7 + 32;
    a2[5] = v11;
    *v11 = v21;
    *(_QWORD *)(a7 + 40) = v21;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = 1;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v11);
    }
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v32, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v27 = KeGetCurrentThread();
    v28 = (__int64 **)(a2 + 2);
    p_SListFaultAddress = &v27[1].SListFaultAddress;
    if ( _bittest((const signed __int32 *)a2 + 14, 0x10u) )
    {
      QuantumTarget = (__int64 *)*p_SListFaultAddress;
      if ( *((void ***)*p_SListFaultAddress + 1) == p_SListFaultAddress )
      {
        *v28 = QuantumTarget;
        a2[3] = p_SListFaultAddress;
        QuantumTarget[1] = (__int64)v28;
        *p_SListFaultAddress = v28;
LABEL_27:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        goto LABEL_30;
      }
    }
    else
    {
      QuantumTarget = (__int64 *)v27[1].QuantumTarget;
      if ( (void **)*QuantumTarget == p_SListFaultAddress )
      {
        *v28 = (__int64 *)p_SListFaultAddress;
        a2[3] = QuantumTarget;
        *QuantumTarget = (__int64)v28;
        p_SListFaultAddress[1] = v28;
        goto LABEL_27;
      }
    }
LABEL_4:
    __fastfail(3u);
  }
  v22 = (_QWORD *)qword_140FD75C8;
  QuantumTarget = &CmpAsyncKernelPostList;
  v24 = a2 + 2;
  if ( *(__int64 **)qword_140FD75C8 != &CmpAsyncKernelPostList )
    goto LABEL_4;
  *v24 = &CmpAsyncKernelPostList;
  a2[3] = v22;
  *v22 = v24;
  qword_140FD75C8 = (__int64)(a2 + 2);
LABEL_30:
  if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x2000000) != 0 )
    CmpLogNotificationRegister(
      (__int64)a2,
      *(_QWORD *)(a1 + 8),
      *((_DWORD *)a2 + 14),
      v8,
      HIWORD(*((_DWORD *)a2 + 14)) & 1);
  if ( *(int *)(v13 + 48) >= 0 )
    return 259LL;
  CmpPostNotify(v13, (__int64)QuantumTarget, v12, 0x10Cu, 1, 0LL, 0LL);
  return 0LL;
}
