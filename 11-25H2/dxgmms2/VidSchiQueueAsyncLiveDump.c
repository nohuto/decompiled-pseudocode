/*
 * XREFs of VidSchiQueueAsyncLiveDump @ 0x140050348
 * Callers:
 *     VidSchiCompletePendingFlip @ 0x140027F68 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

__int64 __fastcall VidSchiQueueAsyncLiveDump(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  char *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v11, (unsigned __int64 *)(a1 + 6864), 1, 1);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
  v4 = a1 + 6904;
  v5 = -1073741801;
  v6 = *(_QWORD *)(a1 + 6904);
  v7 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(a1 + 6928));
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a2 + 32);
    v8 = v7 + 8;
    v9 = *(_QWORD **)(a1 + 6912);
    if ( *v9 != v4 )
      __fastfail(3u);
    *v8 = v4;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 6912) = v8;
    ++*(_DWORD *)(a1 + 6920);
    if ( v6 == v4 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 6872), NormalWorkQueue);
    return 0;
  }
  return v5;
}
