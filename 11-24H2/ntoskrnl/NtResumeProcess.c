/*
 * XREFs of NtResumeProcess @ 0x1406F79E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeProcess @ 0x140460798 (PsMultiResumeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtResumeProcess(ULONG_PTR a1)
{
  int v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObpReferenceObjectByHandleWithTag(a1, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( v1 >= 0 )
  {
    v1 = PsMultiResumeProcess((__int64)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return (unsigned int)v1;
}
