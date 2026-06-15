/*
 * XREFs of ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E460
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ @ 0x18002DA28 (WPP_SF_.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EventWorkerThread(PVOID Parameter)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rbx
  _QWORD *v4; // rcx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_d348b498182a30faac5c0f5541390975_Traceguids);
        v4 = WPP_GLOBAL_Control;
      }
      if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
        WPP_SF_d(v4[2], 11LL, &WPP_d348b498182a30faac5c0f5541390975_Traceguids, v1);
    }
    AudPolicyLogError("EventWorkerThread", 146, v1);
    return v1;
  }
  else
  {
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
    CoUninitialize();
    return 0LL;
  }
}
