/*
 * XREFs of NtResumeProcess @ 0x1406EC100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeProcess @ 0x1404621A4 (PsMultiResumeProcess.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( v1 >= 0 )
  {
    v1 = PsMultiResumeProcess((__int64)Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
