/*
 * XREFs of NtSuspendThread @ 0x1409BA1C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  char PreviousMode; // r9
  __int64 v5; // rcx
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  ULONG v8; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && PreviousSuspendCount )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousSuspendCount < 0x7FFFFFFF0000LL )
      v5 = (__int64)PreviousSuspendCount;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2,
             (__int64)PsThreadType,
             PreviousMode,
             0x75537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v7 = PsSuspendThread(Object, &v8);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = v8;
    return v7;
  }
  return result;
}
