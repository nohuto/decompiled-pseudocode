/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x140154700
 * Callers:
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x14008EA90 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x140154910 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x140154968 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  int v5; // ebp
  __int64 v6; // r10
  __int64 v7; // r14
  __int64 v8; // rdx
  char v9; // r12
  char v10; // r13
  __int64 UserSessionState; // rax
  __int64 v12; // r9
  bool v13; // zf
  int v14; // eax
  int v15; // ecx
  struct tagQMSG *v16; // rdx
  _QWORD *v17; // r9
  __int64 v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]

  result = a1;
  v4 = *(_QWORD *)(a1 + 472) + 24LL;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 32LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 48LL);
  while ( v7 )
  {
    if ( !v6 )
    {
      do
      {
        if ( *(_QWORD *)(v7 + 104) == result )
        {
          if ( !(unsigned int)IsHiddenByInputService(v7, a2, a3) )
          {
            ++v5;
            v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
            v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
              WPP_RECORDER_AND_TRACE_SF_qiqdd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v9,
                v10,
                *(_QWORD *)(UserSessionState + 69416),
                v18,
                v19,
                0x18u,
                (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids);
            }
          }
          RemoveQMsgFromDeferList((struct tagMLIST *)v4, (struct tagQMSG *)v7);
          *(_QWORD *)v7 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
            *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v7;
          v13 = *(_QWORD *)(v4 + 8) == 0LL;
          *(_QWORD *)v4 = v7;
          if ( v13 )
            *(_QWORD *)(v4 + 8) = v7;
          *(_QWORD *)(v7 + 8) = 0LL;
          v7 = v12;
          result = a1;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 8);
        }
      }
      while ( v7 );
      break;
    }
    if ( *(_QWORD *)(v7 + 104) == result )
    {
      if ( *(_DWORD *)(v6 + 48) < *(_DWORD *)(v7 + 48) )
      {
        v14 = IsHiddenByInputService(v7, a2, a3);
        v15 = v5 + 1;
        v16 = (struct tagQMSG *)v7;
        v7 = *(_QWORD *)(v7 + 8);
        if ( v14 )
          v15 = v5;
        v5 = v15;
        RemoveQMsgFromDeferList((struct tagMLIST *)v4, v16);
        *a2 = *(_QWORD *)v6;
        *v17 = v6;
        if ( v6 == *(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = a2;
        else
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = a2;
        *(_QWORD *)v6 = a2;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 8);
      }
      result = a1;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  *(_DWORD *)(v4 + 16) += v5;
  return result;
}
