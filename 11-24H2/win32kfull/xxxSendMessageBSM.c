/*
 * XREFs of xxxSendMessageBSM @ 0x1401171C0
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1401322C0 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x140238840 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ExchangeW32ThreadLock @ 0x140117394 (ExchangeW32ThreadLock.c)
 *     ?TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z @ 0x1401173C0 (-TraceLoggingBroadcastSystemMessage@@YAXPEBUtagWND@@I_KKK@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140118208 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _QWORD *i; // rdi
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h]
  _QWORD v23[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+58h] [rbp-8h]

  v10 = 0;
  TraceLoggingBroadcastSystemMessage(a1, a2, a3, *(_DWORD *)a5, *((_DWORD *)a5 + 1));
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  v13 = PtiCurrent(v12, v11);
  v23[0] = *((_QWORD *)v13 + 48);
  *((_QWORD *)v13 + 48) = v23;
  v23[1] = 0LL;
  v24 = UserDereferenceObject;
  v15 = PtiCurrent((__int64)v13, v14);
  v21[0] = *((_QWORD *)v15 + 48);
  *((_QWORD *)v15 + 48) = v21;
  v21[1] = 0LL;
  v22 = UserDereferenceObject;
  v18 = *(_QWORD **)(W32GetUserSessionState(v15, v16) + 63560);
LABEL_3:
  if ( !v18 )
  {
    if ( v22 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v21, v17);
      v22 = -1LL;
    }
    if ( v24 != -1 )
      PopAndFreeW32ThreadLock((__int64)v23, v17);
    return v10;
  }
  ObfReferenceObject(v18);
  ExchangeW32ThreadLock(v18, v23);
  for ( i = (_QWORD *)v18[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v18 = (_QWORD *)v18[1];
      goto LABEL_3;
    }
    ObfReferenceObject(i);
    ExchangeW32ThreadLock(i, v21);
    v10 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v10 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  if ( v22 != -1 )
  {
    PopAndFreeW32ThreadLock((__int64)v21, v17);
    v22 = -1LL;
  }
  if ( v24 != -1 )
    PopAndFreeW32ThreadLock((__int64)v23, v17);
  return 0LL;
}
