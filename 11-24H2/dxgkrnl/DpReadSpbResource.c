/*
 * XREFs of DpReadSpbResource @ 0x140253050
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x140253424 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpReadSpbResource(
        int a1,
        int a2,
        ULONG a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        HANDLE Event,
        PIO_STATUS_BLOCK a7)
{
  HANDLE Ptr; // rbx
  HANDLE v10; // r15
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _EX_RUNDOWN_REF *v13; // rdi
  NTSTATUS File; // ebx
  NTSTATUS v15; // eax
  struct _EX_RUNDOWN_REF *v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  Ptr = Event;
  v10 = Event;
  if ( !a4 && a3 )
  {
    WdLogSingleEntry1(3LL, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 874;
    return result;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    result = 3221225716LL;
    WdLogGlobalForLineNumber = 887;
    return result;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpReadSpbResource, 0, (__int64)&v16);
  if ( (int)result >= 0 )
  {
    v13 = v16;
    if ( !Ptr )
      Ptr = v16[7].Ptr;
    File = ZwReadFile(v16[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, a3, ByteOffset, 0LL);
    if ( File == 259 )
    {
      if ( v10 )
      {
LABEL_16:
        ExReleaseRundownProtection(v13 + 3);
        return (unsigned int)File;
      }
      v15 = KeWaitForSingleObject(v13[8].Ptr, Executive, 0, 0, 0LL);
      File = v15;
      if ( v15 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 956;
        goto LABEL_16;
      }
      File = IoStatusBlock->Status;
    }
    if ( File < 0 )
    {
      WdLogSingleEntry1(2LL, File);
      WdLogGlobalForLineNumber = 973;
    }
    goto LABEL_16;
  }
  return result;
}
