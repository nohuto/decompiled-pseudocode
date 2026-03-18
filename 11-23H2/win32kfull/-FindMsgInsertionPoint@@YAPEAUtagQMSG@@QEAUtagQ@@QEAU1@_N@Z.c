/*
 * XREFs of ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1C0139C50
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B4EF8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B5CC4 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x1C0118DD4 (IsPointerInputClientMessage.c)
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsage @ 0x1C0139D54 (Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsage.c)
 */

struct tagQMSG *__fastcall FindMsgInsertionPoint(struct tagQ *const a1, struct tagQMSG *const a2, char a3)
{
  __int64 *i; // r14
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  CTouchProcessor *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int FrameIdFromPointerMsgId; // ebx

  for ( i = (__int64 *)*((_QWORD *)a1 + 3); i; i = (__int64 *)*i )
  {
    if ( (unsigned int)Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsage() )
    {
      if ( a3 )
      {
        v6 = *((_DWORD *)i + 25);
        if ( (v6 & 0x10) != 0 || (v6 & 0x100) != 0 )
          continue;
      }
    }
    if ( *((_DWORD *)i + 12) > *((_DWORD *)a2 + 12) )
      break;
    if ( IsPointerInputClientMessage(*((_DWORD *)i + 6))
      && IsPointerInputClientMessage(*((_DWORD *)a2 + 6))
      && v7 != 595
      && (_DWORD)v8 != 595 )
    {
      v9 = SGDGetUserSessionState(v8);
      v10 = i[5];
      v11 = *(CTouchProcessor **)(v9 + 3424);
      v13 = SGDGetUserSessionState(v12);
      FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                  *(CTouchProcessor **)(v13 + 3424),
                                  *((_QWORD *)a2 + 5));
      if ( CTouchProcessor::GetFrameIdFromPointerMsgId(v11, v10) > FrameIdFromPointerMsgId )
        break;
    }
  }
  return (struct tagQMSG *)i;
}
