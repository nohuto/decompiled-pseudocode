/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801E5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?destroy@?$__func@V_lambda_81eca81a5f016c5fce8d0d67dcd13009_@@$$A6AJK@Z@__function@wistd@@UEAAXXZ @ 0x1801FB3E0 (-destroy@-$__func@V_lambda_81eca81a5f016c5fce8d0d67dcd13009_@@$$A6AJK@Z@__function@wistd@@UEAAXX.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fc54455db8508194f7ff9532d98440e7___ @ 0x1802E28B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_fc54455db8508194f7ff9532d98440e7___.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_ @ 0x1802E2E5C (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--_lambda_945e3f99e324f0975fc3b8cf1a6859ea_.c)
 */

void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v2; // rcx
  int v3; // eax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  if ( *((_QWORD *)this + 68) )
  {
    lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_(v4, &v6, (char *)this + 544);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_fc54455db8508194f7ff9532d98440e7___(v2, v4);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x103D,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v3);
    wistd::__function::__func<_lambda_81eca81a5f016c5fce8d0d67dcd13009_,long (unsigned long)>::destroy(v4);
  }
}
