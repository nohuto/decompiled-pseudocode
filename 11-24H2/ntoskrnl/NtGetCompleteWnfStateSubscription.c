/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1408AB260
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1408AB440 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1408AB7FC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription(
        unsigned __int64 Src,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = -1073741811;
  v9 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[3].BasePriority;
  if ( v9 )
  {
    if ( !Src || !a2 )
      goto LABEL_3;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( Src < 0x7FFFFFFF0000LL )
        v14 = Src;
      RtlCopyVolatileMemory(&v17, (const void *)v14, 8uLL);
      v15 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v15 = a2;
      RtlCopyVolatileMemory(v16, (const void *)v15, 8uLL);
      v8 = ExpWnfCompleteThreadSubscriptions(v9, &v17, v16[0]);
      if ( v8 >= 0 )
      {
LABEL_3:
        if ( a6 )
        {
          if ( a6 < 0x1030 )
          {
            v8 = -1073741789;
          }
          else
          {
            v10 = a5;
            if ( (a5 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = a6 + a5 - 1;
            if ( a5 > v11 || v11 >= 0x7FFFFFFF0000LL )
              ExRaiseAccessViolation();
            v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            do
            {
              *(_BYTE *)v10 = *(_BYTE *)v10;
              v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
            }
            while ( v10 != v12 );
            v8 = ExpWnfDeliverThreadNotifications(v9, a5);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread();
  return (unsigned int)v8;
}
