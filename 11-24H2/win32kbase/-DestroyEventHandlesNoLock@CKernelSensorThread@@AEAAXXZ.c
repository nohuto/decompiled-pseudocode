/*
 * XREFs of ?DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ @ 0x14014C79C
 * Callers:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14014C75C (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKernelSensorThread::DestroyEventHandlesNoLock(CKernelSensorThread *this)
{
  HANDLE *v1; // rbx
  __int64 v2; // rdi

  v1 = (HANDLE *)((char *)this + 48);
  v2 = 5LL;
  do
  {
    if ( *v1 )
    {
      ZwClose(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
