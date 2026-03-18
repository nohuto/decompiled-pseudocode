/*
 * XREFs of RIMStartDeviceRead @ 0x1400D8254
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x14005B744 (RIMStartDeviceSpecificRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMStartDeviceRead(struct _IO_STATUS_BLOCK *ApcContext, __int64 a2, void *a3, ULONG a4)
{
  NTSTATUS v5; // eax
  union _LARGE_INTEGER v7; // [rsp+68h] [rbp+10h] BYREF

  v7.QuadPart = 0LL;
  v5 = ZwReadFile(ApcContext[13].Pointer, 0LL, rimInputApc, ApcContext, ApcContext + 15, a3, a4, &v7, 0LL);
  ApcContext[16].Status = v5;
  if ( v5 >= 0 )
    ApcContext[143].Information = MEMORY[0xFFFFF78000000014];
  return (unsigned int)ApcContext[16].Status;
}
