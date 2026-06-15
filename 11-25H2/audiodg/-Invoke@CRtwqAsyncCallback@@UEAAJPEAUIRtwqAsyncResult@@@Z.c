/*
 * XREFs of ?Invoke@CRtwqAsyncCallback@@UEAAJPEAUIRtwqAsyncResult@@@Z @ 0x14004AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRtwqAsyncCallback::Invoke(DWORD *this, struct IRtwqAsyncResult *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = RtwqEndRegisterWorkQueueWithMMCSS(a2, this + 2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    this[3] = 1;
    WakeByAddressSingle(this + 3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
