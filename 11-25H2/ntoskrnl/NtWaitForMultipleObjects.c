/*
 * XREFs of NtWaitForMultipleObjects @ 0x14099B630
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // r14
  char PreviousMode; // bl
  LARGE_INTEGER *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  PLARGE_INTEGER v14; // [rsp+40h] [rbp-248h]
  __int64 v15; // [rsp+48h] [rbp-240h] BYREF
  _BYTE v16[512]; // [rsp+50h] [rbp-238h] BYREF

  v8 = Count;
  v14 = Timeout;
  memset_0(v16, 0, sizeof(v16));
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = Timeout;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
        v11 = (__int64)Timeout;
      v15 = *(_QWORD *)v11;
      v10 = (LARGE_INTEGER *)&v15;
      v14 = (PLARGE_INTEGER)&v15;
    }
    v12 = v8;
    if ( 8 * v8 && (&Handles[v12] < Handles || (unsigned __int64)&Handles[v12] > 0x7FFFFFFF0000LL) )
      v10 = v14;
  }
  memmove(v16, Handles, 8 * v8);
  return ObWaitForMultipleObjects(v8, (__int64)v16, PreviousMode, WaitType, PreviousMode, Alertable, v10);
}
