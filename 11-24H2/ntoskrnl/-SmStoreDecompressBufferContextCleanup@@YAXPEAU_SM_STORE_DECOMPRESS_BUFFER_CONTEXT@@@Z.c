/*
 * XREFs of ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x1404753A8
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 * Callees:
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404C7018 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorWaitForRequest @ 0x14060E02C (SmHwAcceleratorWaitForRequest.c)
 */

void __fastcall SmStoreDecompressBufferContextCleanup(struct _SM_STORE_DECOMPRESS_BUFFER_CONTEXT *a1)
{
  unsigned int v1; // edi
  char v3; // [rsp+40h] [rbp+8h] BYREF
  char v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( *((_DWORD *)a1 + 9) )
    {
      do
        SmHwAcceleratorWaitForRequest(*((_QWORD *)a1 + 1), v1++, 0, (unsigned int)&v4, (__int64)&v3);
      while ( v1 < *((_DWORD *)a1 + 9) );
    }
    SmHwAcceleratorPartitionMgrFreeDescriptor(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
  }
}
