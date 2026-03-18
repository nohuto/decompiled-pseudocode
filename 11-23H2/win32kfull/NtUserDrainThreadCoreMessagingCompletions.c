/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions @ 0x1C011E5A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E784 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserDrainThreadCoreMessagingCompletions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  PERESOURCE *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rdi
  int v17; // esi
  unsigned int v18; // eax
  int v19; // eax
  int v21; // [rsp+28h] [rbp-50h]
  _OWORD v22[3]; // [rsp+40h] [rbp-38h] BYREF
  int v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v4, v3, v5, v6);
  v8 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  if ( *(_QWORD *)(v9 + 1504) )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v23 = 0;
    memset(v22, 0, 32);
    v24 = 0LL;
    v16 = (_QWORD *)v15;
    v17 = 0;
    ZwSetIoCompletionEx(*(_QWORD *)(v15 + 1464), *(_QWORD *)(v15 + 1496), 0LL, 2LL, 0, 0LL);
    do
    {
      while ( 1 )
      {
        LOBYTE(v21) = 0;
        v18 = ZwRemoveIoCompletionEx(v16[183], v22, 1LL, &v23, &v24, v21);
        v19 = xxxHandleQueueCompletion(v16, v18, v22, 0LL);
        if ( v19 != 3 )
          break;
        v17 = 1;
      }
    }
    while ( v19 == 4 );
    if ( v17 )
      ZwAssociateWaitCompletionPacket(v16[186], v16[183], v16[185], 0LL, 1LL, 0, 0LL, 0LL);
    v8 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
