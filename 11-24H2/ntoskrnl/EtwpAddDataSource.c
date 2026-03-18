/*
 * XREFs of EtwpAddDataSource @ 0x14083A384
 * Callers:
 *     EtwpAddNotificationEvent @ 0x140833DC4 (EtwpAddNotificationEvent.c)
 *     EtwpQueueNotification @ 0x14083A16C (EtwpQueueNotification.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddDataSource(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD *)(a1 + 800);
  if ( !result )
  {
    result = ExAllocatePool2(0x40uLL);
    v3 = (_QWORD *)result;
    if ( result )
    {
      v4 = (_QWORD *)(result + 24);
      v4[1] = v4;
      *v4 = v4;
      v3[2] = 0LL;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 800), (signed __int64)v3, 0LL);
      if ( v5 )
      {
        ExFreePoolWithTag(v3, 0);
        return v5;
      }
      return (__int64)v3;
    }
  }
  return result;
}
