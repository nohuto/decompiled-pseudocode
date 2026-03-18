/*
 * XREFs of DpSpbResourceIoControl @ 0x14018AB50
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x14024C5F4 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpSpbResourceIoControl(
        int a1,
        int a2,
        ULONG a3,
        ULONG a4,
        PVOID InputBuffer,
        ULONG OutputBufferLength,
        PVOID OutputBuffer,
        HANDLE Event,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  PVOID Ptr; // rbx
  __int64 result; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  NTSTATUS Status; // ebx
  NTSTATUS v14; // eax
  struct _EX_RUNDOWN_REF *v15; // [rsp+50h] [rbp-38h] BYREF

  v15 = 0LL;
  Ptr = Event;
  if ( !InputBuffer && a4 )
  {
    WdLogSingleEntry1(3LL, a4);
    WdLogGlobalForLineNumber = 1272;
    return 3221225485LL;
  }
  if ( !OutputBuffer && OutputBufferLength )
  {
    WdLogSingleEntry1(3LL, OutputBufferLength);
    WdLogGlobalForLineNumber = 1286;
    return 3221225485LL;
  }
  if ( !IoStatusBlock )
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 3221225716LL;
    WdLogGlobalForLineNumber = 1299;
    return result;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpSpbResourceIoControl, 0, (__int64)&v15);
  if ( (int)result >= 0 )
  {
    v12 = v15;
    if ( !Event )
      Ptr = v15[7].Ptr;
    Status = ZwDeviceIoControlFile(
               v15[5].Ptr,
               Ptr,
               0LL,
               0LL,
               IoStatusBlock,
               a3,
               InputBuffer,
               a4,
               OutputBuffer,
               OutputBufferLength);
    if ( Status == 259 )
    {
      if ( Event )
      {
LABEL_20:
        ExReleaseRundownProtection(v12 + 3);
        return (unsigned int)Status;
      }
      v14 = KeWaitForSingleObject(v12[8].Ptr, Executive, 0, 0, 0LL);
      Status = v14;
      if ( v14 )
      {
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 1370;
        goto LABEL_20;
      }
      Status = IoStatusBlock->Status;
    }
    if ( Status < 0 )
    {
      WdLogSingleEntry1(2LL, Status);
      WdLogGlobalForLineNumber = 1387;
    }
    goto LABEL_20;
  }
  return result;
}
