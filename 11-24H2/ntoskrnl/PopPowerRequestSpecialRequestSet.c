/*
 * XREFs of PopPowerRequestSpecialRequestSet @ 0x140A14F84
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140A14DA0 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x14088E750 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x14088E7A0 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestSet(__int64 a1, int a2, ULONG_PTR a3)
{
  char v3; // r14
  int v5; // ebx
  PVOID v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = 0;
  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v5 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = PsChargeProcessWakeCounter((__int64)Object);
      LOBYTE(v8) = 1;
      v9 = v7;
      PopAcquirePowerRequestPushLock(v8);
      if ( *(_QWORD *)(a1 + 136) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = v6;
        v5 = 0;
        *(_QWORD *)(a1 + 144) = v9;
      }
      PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
      if ( v3 )
      {
        if ( v9 )
          PsReleaseProcessWakeCounter(v9);
        ObfDereferenceObjectWithTag(v6, 0x72506F50u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
