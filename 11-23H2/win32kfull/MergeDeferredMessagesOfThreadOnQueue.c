/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C0034F48
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0033720 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C000BD34 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0012810 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C012B930 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r10
  __int64 v5; // rbx
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  bool v9; // zf
  BOOL v10; // eax
  int v11; // ecx
  struct tagQMSG *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *v14; // r9
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+28h] [rbp-50h]

  v2 = *(_QWORD *)(a1 + 432) + 24LL;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 48LL);
  while ( v5 )
  {
    if ( !v4 )
    {
      do
      {
        if ( *(_QWORD *)(v5 + 104) == a1 )
        {
          if ( !IsHiddenByInputService(v5) )
          {
            ++v3;
            LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qiqdd(
                WPP_GLOBAL_Control->AttachedDevice,
                v6,
                v7,
                v3 + *(_DWORD *)(v2 + 16),
                v15,
                v16,
                18,
                (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
                v5,
                *(_QWORD *)(v5 + 136),
                v2,
                *(_DWORD *)(v2 + 20),
                v3 + *(_BYTE *)(v2 + 16));
            }
          }
          RemoveQMsgFromDeferList((struct tagMLIST *)v2, (struct tagQMSG *)v5);
          *(_QWORD *)v5 = *(_QWORD *)v2;
          if ( *(_QWORD *)v2 )
            *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v5;
          v9 = *(_QWORD *)(v2 + 8) == 0LL;
          *(_QWORD *)v2 = v5;
          if ( v9 )
            *(_QWORD *)(v2 + 8) = v5;
          *(_QWORD *)(v5 + 8) = 0LL;
          v5 = v8;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      while ( v5 );
      break;
    }
    if ( *(_QWORD *)(v5 + 104) == a1 )
    {
      if ( *(_DWORD *)(v4 + 48) < *(_DWORD *)(v5 + 48) )
      {
        v10 = IsHiddenByInputService(v5);
        v11 = v3 + 1;
        v12 = (struct tagQMSG *)v5;
        v5 = *(_QWORD *)(v5 + 8);
        if ( v10 )
          v11 = v3;
        v3 = v11;
        RemoveQMsgFromDeferList((struct tagMLIST *)v2, v12);
        *v13 = *(_QWORD *)v4;
        *v14 = v4;
        if ( v4 == *(_QWORD *)(v2 + 8) )
          *(_QWORD *)(v2 + 8) = v13;
        else
          *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v13;
        *(_QWORD *)v4 = v13;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 8);
    }
  }
  *(_DWORD *)(v2 + 16) += v3;
}
