/*
 * XREFs of ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x1400445D8
 * Callers:
 *     ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x1400444C0 (-UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ.c)
 *     ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z @ 0x140054F98 (-RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRtwqAsyncCallback@@QEAA@XZ @ 0x140058804 (--0CRtwqAsyncCallback@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CreateRtwqAsyncCallback(struct CRtwqAsyncCallback **a1)
{
  CRtwqAsyncCallback *v2; // rax
  struct CRtwqAsyncCallback *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CRtwqAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    v3 = CRtwqAsyncCallback::CRtwqAsyncCallback(v2);
    *a1 = v3;
    if ( v3 )
      return 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
