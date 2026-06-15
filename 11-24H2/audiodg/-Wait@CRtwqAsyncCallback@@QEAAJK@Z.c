/*
 * XREFs of ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x140044348
 * Callers:
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x1400441C0 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wait@?$slim_event_t@$0A@@wil@@QEAA_NK@Z @ 0x14004438C (-wait@-$slim_event_t@$0A@@wil@@QEAA_NK@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::Wait(CRtwqAsyncCallback *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)wil::slim_event_t<0>::wait((char *)this + 12) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF1,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
