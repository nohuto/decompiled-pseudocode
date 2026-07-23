/*
 * XREFs of MmWaitMultipleForCacheManagerPrefetch @ 0x1403529EC
 * Callers:
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmWaitMultipleForCacheManagerPrefetch(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v5; // esi
  __int64 Pool; // rax
  _OWORD *v8; // rbx
  struct _KWAIT_BLOCK *WaitBlockArray; // r14
  __int64 v10; // rdi
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // r9
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v17; // r10
  __int64 **v18; // r10
  _OWORD P[2]; // [rsp+40h] [rbp-118h] BYREF
  struct _KWAIT_BLOCK v20; // [rsp+60h] [rbp-F8h] BYREF

  v3 = a2 + 1;
  if ( !a3 )
    v3 = a2;
  v5 = a2;
  memset(P, 0, sizeof(P));
  if ( a2 > 3 )
  {
    Pool = MiAllocatePool(0x40uLL, 56 * v3, 1633118541);
    v8 = (_OWORD *)Pool;
    if ( Pool )
    {
      WaitBlockArray = (struct _KWAIT_BLOCK *)(Pool + 8 * v3);
      goto LABEL_7;
    }
    v5 = 3;
  }
  WaitBlockArray = &v20;
  v8 = P;
LABEL_7:
  while ( 1 )
  {
    v10 = 0LL;
LABEL_8:
    if ( (unsigned int)v10 < v5 )
      break;
    if ( a3 )
    {
      *((_QWORD *)v8 + v10) = a3;
      LODWORD(v10) = v10 + 1;
    }
    if ( KeWaitForMultipleObjects(v10, (PVOID *)v8, WaitAny, WrVirtualMemory, 0, 0, 0LL, WaitBlockArray) == (_DWORD)v10 - 1
      && a3 )
    {
      if ( v8 != P )
        ExFreePoolWithTag(v8, 0);
      return (unsigned int)(v3 - 1);
    }
  }
  v11 = *(__int64 **)(a1 + 8 * v10);
  v12 = 0LL;
  do
  {
    v13 = (__int64 *)*v11;
    while ( 1 )
    {
      if ( *((_DWORD *)v11 + 54) == *((_DWORD *)v11 + 53) )
        goto LABEL_15;
      v14 = v11 + 28;
      v15 = (__int64 *)v11[28];
      if ( !*((_DWORD *)v15 + 9) )
        break;
      if ( (__int64 *)v15[1] != v14
        || (v17 = *v15, *(__int64 **)(*v15 + 8) != v15)
        || (*v14 = v17, *(_QWORD *)(v17 + 8) = v14, v18 = (__int64 **)v11[29], *v18 != v14) )
      {
        __fastfail(3u);
      }
      *v15 = (__int64)v14;
      v15[1] = (__int64)v18;
      *v18 = v15;
      v11[29] = (__int64)v15;
      ++*((_DWORD *)v11 + 54);
    }
    v12 = v15 + 4;
    if ( v15 != (__int64 *)-32LL )
      goto LABEL_14;
LABEL_15:
    v11 = v13;
  }
  while ( v13 );
  if ( v12 )
  {
LABEL_14:
    *((_QWORD *)v8 + v10) = v12;
    v10 = (unsigned int)(v10 + 1);
    goto LABEL_8;
  }
  MmWaitForCacheManagerPrefetch(*(PVOID *)(a1 + 8 * v10));
  if ( v8 != P )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
