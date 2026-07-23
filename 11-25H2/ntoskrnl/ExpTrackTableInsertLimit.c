/*
 * XREFs of ExpTrackTableInsertLimit @ 0x140649430
 * Callers:
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 * Callees:
 *     ExpPlFindLimitEntry @ 0x1402FE01C (ExpPlFindLimitEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     ExpPlGrowTableIfNeeded @ 0x140649074 (ExpPlGrowTableIfNeeded.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14069CBC0 (ZwCreateWnfStateName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpTrackTableInsertLimit(__int64 a1)
{
  _QWORD *v2; // rbx
  int v3; // esi
  unsigned int *Pool2; // rdi
  __int64 v5; // rsi
  _WNF_STATE_NAME *v6; // r14
  __int64 v7; // r8
  unsigned int *v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int i; // esi
  __int64 v13; // rbp
  _QWORD *v14; // r15
  _QWORD *v15; // r14
  __int64 LimitEntry; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int j; // edx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  unsigned int k; // ebx
  void *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  _WNF_STATE_NAME StateName; // [rsp+58h] [rbp-30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = ExpPlGrowTableIfNeeded();
  if ( v3 >= 0 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v5 = 0LL;
      *Pool2 = *(_DWORD *)(a1 + 4);
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 4) )
      {
        v6 = (_WNF_STATE_NAME *)ExAllocatePool2(0x40uLL);
        v7 = 14LL * (unsigned int)v5;
        *(_QWORD *)&Pool2[v7 + 2] = v6;
        if ( !v6 )
        {
          v3 = -1073741670;
          goto LABEL_23;
        }
        v6[1] = (_WNF_STATE_NAME)*(unsigned int *)(48 * v5 + a1 + 8);
        v8 = &Pool2[v7 + 6];
        v9 = (__int64 *)(48 * v5 + a1 + 24);
        v10 = 2LL;
        do
        {
          *((_QWORD *)v8 - 1) = *(v9 - 1);
          v11 = *v9;
          v9 += 2;
          *(_QWORD *)v8 = v11;
          v8 += 6;
          --v10;
        }
        while ( v10 );
        StateName = 0LL;
        if ( ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeSystem, 0, 0LL, 4u, &unk_140E28D50) >= 0 )
          v6[8] = StateName;
        v5 = (unsigned int)(v5 + 1);
      }
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      for ( i = 0; i < *Pool2; ++i )
      {
        v13 = 14LL * i;
        v14 = *(_QWORD **)&Pool2[v13 + 2];
        v15 = v14 + 1;
        LimitEntry = ExpPlFindLimitEntry(*((_DWORD *)v14 + 2));
        if ( LimitEntry )
        {
          *v15 = v2;
          v2 = v14 + 1;
          *(_QWORD *)&Pool2[v13 + 2] = LimitEntry;
        }
        else
        {
          StateName = (_WNF_STATE_NAME)(*v15 & (-1LL << (BYTE4(ExPoolLimitState) & 0x1F)));
          v17 = qword_140E28D48;
          v18 = (37
               * (BYTE2(StateName.Data[1])
                + 37
                * (BYTE1(StateName.Data[1])
                 + 37
                 * (LOBYTE(StateName.Data[1])
                  + 37
                  * (HIBYTE(StateName.Data[0])
                   + 37
                   * (BYTE2(StateName.Data[0])
                    + 37 * (BYTE1(StateName.Data[0]) + 37 * (LOBYTE(StateName.Data[0]) + 11623883)))))))
               + HIBYTE(StateName.Data[1])) & (unsigned int)((HIDWORD(ExPoolLimitState) >> 5) - 1);
          *v14 = *(_QWORD *)(qword_140E28D48 + 8 * v18);
          *(_QWORD *)(v17 + 8 * v18) = v14;
          LODWORD(ExPoolLimitState) = ExPoolLimitState + 1;
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeGenericCallDpcEx((__int64)ExpLimitInsertDpc, (__int64)Pool2);
      for ( j = 0; j < *Pool2; *(_QWORD *)&Pool2[14 * v20 + 2] = 0LL )
        v20 = j++;
      v3 = 0;
      while ( v2 )
      {
        v21 = v2 - 1;
        v2 = (_QWORD *)*v2;
        ExFreePoolWithTag(v21, 0);
      }
LABEL_23:
      for ( k = 0; k < *Pool2; ++k )
      {
        v23 = *(void **)&Pool2[14 * k + 2];
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v3;
}
