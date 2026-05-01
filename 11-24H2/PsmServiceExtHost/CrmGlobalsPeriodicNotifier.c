/*
 * XREFs of CrmGlobalsPeriodicNotifier @ 0x1800309D0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmRegistrationNotify @ 0x18002F240 (CrmRegistrationNotify.c)
 *     CrmRegistrationReadyQueueRemove @ 0x18002F678 (CrmRegistrationReadyQueueRemove.c)
 */

__int64 __fastcall CrmGlobalsPeriodicNotifier(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 v3; // rbx
  int v4; // r15d
  __int64 v5; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax

  v2 = 0;
  v3 = a2 + 432;
  v4 = 0;
  v5 = a2 + 416;
  do
  {
    WaitForSingleObject(*(HANDLE *)(a2 + 464), 0x7530u);
    CempLockAcquireExclusive(v5);
    do
    {
      v7 = *(_QWORD *)(v3 + 8);
      v8 = *(_QWORD *)v3;
      if ( (v7 & 1) != 0 )
      {
        if ( !v8 )
          break;
        v8 ^= v3;
      }
      if ( !v8 )
        break;
      if ( (*(_QWORD *)(v3 + 8) & 1LL) != 0 )
        v9 = v7 == 1 ? 0LL : v7 ^ (v3 | 1);
      else
        v9 = *(_QWORD *)(v3 + 8);
      v10 = v9 - 24;
      CrmRegistrationReadyQueueRemove(v9 - 24, 1);
      if ( (unsigned int)CrmRegistrationNotify(*(_QWORD *)(v10 + 48), v10, 0) )
        *(_QWORD *)(v10 + 128) = CempQueryUnbiasedInterruptTimeMs64();
      ++v2;
    }
    while ( !v2 );
    v11 = *(_QWORD *)v3;
    if ( (*(_BYTE *)(v3 + 8) & 1) == 0 )
      goto LABEL_11;
    if ( v11 )
    {
      v11 ^= v3;
LABEL_11:
      if ( v11 )
        goto LABEL_13;
    }
    *(_DWORD *)(a2 + 480) = 0;
    v4 = 1;
LABEL_13:
    *(_DWORD *)(v5 + 8) = 0;
    result = RtlReleaseSRWLockExclusive(v5);
  }
  while ( !v4 );
  return result;
}
