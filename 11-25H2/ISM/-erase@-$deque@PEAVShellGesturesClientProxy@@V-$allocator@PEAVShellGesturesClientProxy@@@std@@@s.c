/*
 * XREFs of ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x18009429C
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x1800825EC (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180094D7C (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x180156E54 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClient.c)
 */

_QWORD *__fastcall std::deque<ShellGesturesClientProxy *>::erase(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  _QWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  _BYTE v17[24]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a4 + 16);
  v7 = v5 - qword_180246F38;
  v8 = v6 - v5;
  if ( v6 == v5 )
  {
    *a2 = ShellGesturesProcessor::s_clients;
    a2[2] = v5;
  }
  else
  {
    v12[1] = 0LL;
    v13[1] = 0LL;
    v15[1] = 0LL;
    v12[0] = ShellGesturesProcessor::s_clients;
    v12[2] = v6;
    v13[0] = ShellGesturesProcessor::s_clients;
    v15[0] = ShellGesturesProcessor::s_clients;
    if ( v7 >= qword_180246F38 + qword_180246F40 - v6 )
    {
      v16 = v5;
      v14 = qword_180246F38 + qword_180246F40;
      ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>)(
        v17,
        v12,
        v13,
        v15);
      v9 = qword_180246F40;
      v10 = qword_180246F38;
      do
      {
        if ( !--v9 )
          v10 = 0LL;
        --v8;
      }
      while ( v8 );
      qword_180246F38 = v10;
    }
    else
    {
      v14 = v5;
      v16 = qword_180246F38;
      ((void (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>)(
        v17,
        v15,
        v13,
        v12);
      v9 = qword_180246F40;
      v10 = qword_180246F38;
      do
      {
        if ( --v9 )
          ++v10;
        else
          v10 = 0LL;
        qword_180246F38 = v10;
        --v8;
      }
      while ( v8 );
    }
    qword_180246F40 = v9;
    *a2 = ShellGesturesProcessor::s_clients;
    a2[2] = v10 + v7;
  }
  a2[1] = 0LL;
  return a2;
}
