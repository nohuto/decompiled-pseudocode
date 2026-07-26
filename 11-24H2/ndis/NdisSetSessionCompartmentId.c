/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1400C8450
 * Callers:
 *     ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400C8400 (-ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x140029740 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x140041870 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400CAF20 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  void *v2; // r14
  unsigned int ThreadSessionId; // ebp
  void *v5; // rdi
  __int64 v6; // r13
  int v7; // r12d
  KIRQL v8; // r15
  char *Pool2; // rbx
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]

  v2 = 0LL;
  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
    v5 = ndisCmValidateCompartmentChange(SessionCompartmentId, a2);
    if ( !v5 )
      return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = ThreadSessionId + 1;
  v7 = 1;
  v8 = KeAcquireSpinLockRaiseToDpc(&qword_14011C9A0);
  NewIrql = v8;
  if ( ThreadSessionId < dword_14011C950 )
  {
    Pool2 = (char *)qword_14011C9F0;
  }
  else
  {
    if ( !_InterlockedCompareExchange(&dword_14011D0E4, 1, 0) )
      KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-300000000LL, 0x7530u, 0x1D4Cu, &Dpc);
    Pool2 = (char *)ExAllocatePool2(66LL, 24 * v6, 1835222094LL);
    if ( !Pool2 )
    {
      KeReleaseSpinLock(&qword_14011C9A0, v8);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v12 = qword_14011C9F0;
    if ( qword_14011C9F0 )
    {
      memmove(Pool2, qword_14011C9F0, 24LL * (unsigned int)dword_14011C950);
      ExFreePoolWithTag(v12, 0);
    }
    memset(&Pool2[24 * dword_14011C950], 0, 24LL * (ThreadSessionId + 1 - dword_14011C950));
    dword_14011C950 = ThreadSessionId + 1;
    v8 = NewIrql;
    qword_14011C9F0 = Pool2;
  }
  if ( *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] )
  {
    v2 = *(void **)&Pool2[24 * ThreadSessionId + 16];
    if ( a2 )
    {
      v7 = a2;
    }
    else
    {
      *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] = 0LL;
      v5 = 0LL;
    }
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 16] = v5;
    *(_DWORD *)&Pool2[24 * ThreadSessionId] = v7;
  }
  else if ( a2 )
  {
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] = v6;
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 16] = v5;
    *(_DWORD *)&Pool2[24 * ThreadSessionId] = a2;
  }
  KeReleaseSpinLock(&qword_14011C9A0, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedAdd(&dword_14011D0EC, 2u);
  return 0LL;
}
