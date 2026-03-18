/*
 * XREFs of _DrainThreadCoreMessagingCompletions2 @ 0x1400600A4
 * Callers:
 *     NtUserDrainThreadCoreMessagingCompletions2 @ 0x14005FFF0 (NtUserDrainThreadCoreMessagingCompletions2.c)
 *     NtUserDrainThreadCoreMessagingCompletions @ 0x140293E90 (NtUserDrainThreadCoreMessagingCompletions.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x140066188 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140287C28 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions2(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 i; // rcx
  int v7; // ecx
  unsigned int j; // eax
  unsigned __int64 v10; // rsi
  const struct tagTHREADINFO **v11; // rax
  const struct tagTHREADINFO *v12; // rdi
  int v13; // ebp
  struct tagWND *v14; // rcx
  int v15; // [rsp+28h] [rbp-50h]
  _FILE_IO_COMPLETION_INFORMATION v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0;
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
    {
      v7 = 5;
LABEL_8:
      UserSetLastError(v7);
      return v4;
    }
    if ( *(_QWORD *)(v5 + 8LL * (unsigned int)i + 1656) )
      break;
  }
  if ( a1 )
  {
    for ( j = 0; j < 2; ++j )
    {
      v10 = j;
      if ( *(_QWORD *)(v5 + 8LL * j + 1656) == a1 )
      {
        if ( j != 2LL )
          goto LABEL_19;
        break;
      }
    }
    v7 = 87;
    goto LABEL_8;
  }
  v10 = 0LL;
LABEL_19:
  v11 = (const struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(i, v5);
  if ( v11 )
    v12 = *v11;
  else
    v12 = 0LL;
  v17 = 0;
  memset(&v16, 0, sizeof(v16));
  v18 = 0LL;
  v13 = 0;
  ZwSetIoCompletionEx(*((_QWORD *)v12 + 202), *((_QWORD *)v12 + 206), 0LL, -2147483647LL, 0, 0LL);
  while ( 1 )
  {
    LOBYTE(v15) = 0;
    if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v12 + 202), &v16, 1LL, &v17, &v18, v15) )
      break;
    if ( ((__int64)v16.ApcContext & 0x80000000) != 0 )
    {
      if ( LODWORD(v16.ApcContext) != 0x80000000 )
        break;
      v13 = 1;
    }
    else
    {
      if ( v16.ApcContext >= (PVOID)2
        || (v14 = (struct tagWND *)*((_QWORD *)v12 + (__int64)v16.ApcContext + 207)) == 0LL )
      {
        BroadcastCoreMessagingApcContextError(v12, (unsigned __int64)v16.ApcContext);
        break;
      }
      xxxHandleCoreMessagingQueueCompletion(v14, &v16, v10);
    }
  }
  if ( v13 )
    ZwAssociateWaitCompletionPacket(
      *((_QWORD *)v12 + 205),
      *((_QWORD *)v12 + 202),
      *((_QWORD *)v12 + 204),
      0LL,
      0xFFFFFFFF80000000uLL,
      0,
      0LL,
      0LL);
  return 1;
}
