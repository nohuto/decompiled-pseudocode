/*
 * XREFs of EtwpAddDataSource @ 0x140834E58
 * Callers:
 *     EtwpQueueNotification @ 0x140834C40 (EtwpQueueNotification.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    result = ExAllocatePool2(0x40uLL, 0x28uLL, 0x53777445u);
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
