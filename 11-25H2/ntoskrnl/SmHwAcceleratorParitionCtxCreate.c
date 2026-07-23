/*
 * XREFs of SmHwAcceleratorParitionCtxCreate @ 0x14078D518
 * Callers:
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14078D0CC (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExAcquireRundownProtectionEx @ 0x14036CEA0 (ExAcquireRundownProtectionEx.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     InterlockedPushListSList @ 0x1406A8670 (InterlockedPushListSList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SmHwInitializeAccelDescriptor @ 0x14078D9FC (SmHwInitializeAccelDescriptor.c)
 */

__int64 __fastcall SmHwAcceleratorParitionCtxCreate(_QWORD *a1, __int64 a2, int a3)
{
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // rbp
  BOOLEAN v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // esi
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  char *v15; // rax
  char *v16; // rbx
  _SLIST_ENTRY *v17; // r12
  _SLIST_ENTRY *v18; // r14
  _SLIST_ENTRY *v19; // r15
  _SLIST_ENTRY *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  _SLIST_ENTRY *v25; // [rsp+28h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v26; // [rsp+38h] [rbp-40h]
  unsigned int Count; // [rsp+88h] [rbp+10h]
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v29 = 0LL;
  v3 = (struct _EX_RUNDOWN_REF *)(a2 + 32);
  v4 = a3;
  v26 = (struct _EX_RUNDOWN_REF *)(a2 + 32);
  v6 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 32));
  v10 = v6;
  if ( !v6 )
  {
    v11 = -1073741431;
    goto LABEL_12;
  }
  if ( (_DWORD)v4 )
  {
    v9 = v4;
  }
  else
  {
    LOBYTE(v7) = 1;
    v12 = AccelShareAddressSpaceWithResource(*(_QWORD *)(a2 + 16), v7, &v29);
    v9 = 0LL;
    v11 = v12;
    if ( v12 < 0 )
      goto LABEL_12;
  }
  v13 = *(unsigned int *)(a2 + 64);
  Count = ((int)v13 + *(_DWORD *)(a2 + 4 * v9 + 48) - 1) / (unsigned int)v13;
  v14 = (Count * v13 * *(unsigned int *)(a2 + 4 * v9 + 56) + 95) & 0xFFFFFFFFFFFFFFF0uLL;
  v23 = ((unsigned int)(*(_DWORD *)(a2 + 40) * *(_DWORD *)(a2 + 64)) + 47LL) & 0xFFFFFFFFFFFFFFF0uLL;
  v24 = v23 * Count;
  v15 = (char *)SmAllocEx(v14 + v24, 1665232243LL, *(_DWORD *)(a2 + 44) | 0x80000000);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x50uLL);
    v17 = (_SLIST_ENTRY *)&v16[v14];
    *((_DWORD *)v16 + 14) = Count;
    v18 = (_SLIST_ENTRY *)((char *)v17 + v23);
    *((_QWORD *)v16 + 4) = a2;
    v19 = (_SLIST_ENTRY *)(v16 + 80);
    *((_DWORD *)v16 + 15) = v4;
    v20 = v17;
    v21 = v29;
    *((_QWORD *)v16 + 6) = 0LL;
    *((_QWORD *)v16 + 5) = v21;
    v25 = (_SLIST_ENTRY *)((char *)v17 + v24);
    if ( (_SLIST_ENTRY *)((char *)v17 + v23) < v25 )
    {
      do
      {
        v20->Next = v18;
        *((_QWORD *)&v20->Next + 1) = v16;
        v20[1].Next = v19;
        SmHwInitializeAccelDescriptor(v20, a2, (unsigned int)v4);
        v20 = v18;
        v18 = (_SLIST_ENTRY *)((char *)v18 + v23);
        v19 = (_SLIST_ENTRY *)((char *)v19 + (unsigned int)(*(_DWORD *)(a2 + 64) * *(_DWORD *)(a2 + 4 * v4 + 56)));
      }
      while ( v18 < v25 );
    }
    v20->Next = 0LL;
    *((_QWORD *)&v20->Next + 1) = v16;
    v20[1].Next = v19;
    SmHwInitializeAccelDescriptor(v20, a2, (unsigned int)v4);
    InterlockedPushListSList((PSLIST_HEADER)v16 + 1, v17, v20, Count);
    ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)v16 + 6, Count);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v16 + 4) + 68LL));
    v10 = 0;
    v29 = 0LL;
    v3 = v26;
    *a1 = v16;
    v11 = 0;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_12:
  if ( v29 )
    AccelStopSharingAddressSpaceWithResource(v29, v7, v8, v9);
  if ( v10 )
    ExReleaseRundownProtection_0(v3);
  return v11;
}
