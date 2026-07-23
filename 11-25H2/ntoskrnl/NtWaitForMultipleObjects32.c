/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1409C3020
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __cdecl NtWaitForMultipleObjects32(
        ULONG Count,
        LONG Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  __int64 v8; // rbx
  unsigned int v9; // ecx
  char PreviousMode; // r10
  LARGE_INTEGER *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  PLARGE_INTEGER v15; // [rsp+40h] [rbp-248h]
  _QWORD v16[2]; // [rsp+50h] [rbp-238h] BYREF
  _QWORD v17[64]; // [rsp+60h] [rbp-228h] BYREF

  v8 = Count;
  v15 = Timeout;
  memset_0(v17, 0, sizeof(v17));
  v9 = 0;
  v16[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = Timeout;
  if ( PreviousMode )
  {
    if ( Timeout )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
        v12 = (__int64)Timeout;
      v16[0] = *(_QWORD *)v12;
      v11 = (LARGE_INTEGER *)v16;
      v15 = (PLARGE_INTEGER)v16;
    }
    v13 = v8;
    if ( 4 * v8 && ((unsigned __int64)&Handles[v13] > 0x7FFFFFFF0000LL || &Handles[v13] < Handles) )
      v11 = v15;
  }
  while ( v9 < (unsigned int)v8 )
  {
    v17[v9] = Handles[v9];
    ++v9;
  }
  return ObWaitForMultipleObjects(v8, (__int64)v17, PreviousMode, WaitType, PreviousMode, Alertable, v11);
}
