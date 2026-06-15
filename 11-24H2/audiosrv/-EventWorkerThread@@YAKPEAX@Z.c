/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x180065B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall EventWorkerThread(PVOID Parameter)
{
  HRESULT result; // eax
  unsigned __int64 v2; // rbx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  result = CoInitializeEx(0LL, 0);
  if ( !result )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->AddRef)(g_DeviceEnumerator);
    while ( 1 )
    {
      do
      {
        CompletionKey = 0LL;
        NumberOfBytesTransferred = 0;
        Overlapped = 0LL;
      }
      while ( !GetQueuedCompletionStatus(
                 g_WorkerEventPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) );
      if ( NumberOfBytesTransferred == -1 )
        break;
      v2 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
    }
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->Release)(g_DeviceEnumerator);
    CoUninitialize();
    return 0;
  }
  return result;
}
