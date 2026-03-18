/*
 * XREFs of ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1402DF154
 * Callers:
 *     _lambda_947f1e7f3cd2cfe4f04f18e4940370e8_::_lambda_invoker_cdecl_ @ 0x1402EB660 (_lambda_947f1e7f3cd2cfe4f04f18e4940370e8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402EBDC0 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402EC544 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceTimerNotification(
        InteractiveControlManager *this,
        unsigned int a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _WORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v2 = a2;
  v3 = (__int64 *)((char *)this + 40);
  v4 = 5LL;
  do
  {
    v5 = *v3;
    if ( *v3 && v2 == *(_QWORD *)(v5 + 352) )
    {
      if ( !*(_DWORD *)(v5 + 232) )
        *(_DWORD *)(v5 + 376) = 1;
      *(_DWORD *)(v5 + 380) = 1;
      *(_QWORD *)(v5 + 352) = 0LL;
      InteractiveControlDevice::FlushBufferedInput((InteractiveControlDevice *)v5, 0x80u);
      v7[0] = *(_WORD *)(v5 + 392);
      v7[1] = 0;
      v8 = 0;
      v9 = 1LL;
      InteractiveControlDevice::SendHapticFeedbackOutput(
        (InteractiveControlDevice *)v5,
        (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)v7);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  return 0LL;
}
