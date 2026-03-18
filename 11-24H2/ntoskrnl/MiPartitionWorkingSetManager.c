/*
 * XREFs of MiPartitionWorkingSetManager @ 0x1406732E0
 * Callers:
 *     <none>
 * Callees:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MiPartitionWorkingSetManager(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  int v4; // eax
  int v5; // edx
  PVOID Object[3]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x2000u;
  KeSetPriorityThread(CurrentThread, 17);
  Object[0] = (PVOID)(a1 + 88);
  Object[1] = &Event;
  Object[2] = (PVOID)(*(_QWORD *)(a1 + 17600) + 96LL);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      break;
    v4 = result - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v5 = 0;
LABEL_7:
      MiWorkingSetManager(a1, v5);
    }
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x2000u;
  return result;
}
