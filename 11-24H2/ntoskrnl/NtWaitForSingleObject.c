/*
 * XREFs of NtWaitForSingleObject @ 0x140847020
 * Callers:
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x140954694 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1408470A0 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int v3; // r9d
  int PreviousMode; // edx
  __int64 v5; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = Alertable;
  v7 = 0LL;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  if ( Timeout && (_BYTE)PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Timeout < 0x7FFFFFFF0000LL )
      v5 = (__int64)Timeout;
    v7 = *(_QWORD *)v5;
    Timeout = (PLARGE_INTEGER)&v7;
  }
  return ObWaitForSingleObject((int)Handle, PreviousMode, (unsigned __int8)PreviousMode, v3, Timeout);
}
