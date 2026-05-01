/*
 * XREFs of ?SetImageLocationNoLock@WindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x180433DDC
 * Callers:
 *     ?SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x180433D70 (-SetImageLocation@WindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ @ 0x180434000 (-v_ApproveWinRtActivation@WindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf___ @ 0x180432868 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf.c)
 */

void __fastcall WindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 556)
    && (*(float *)(a1 + 696) != *a2
     || *(float *)(a1 + 700) != a2[1]
     || *(float *)(a1 + 704) != a2[2]
     || *(float *)(a1 + 708) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      *(_QWORD *)v7 = a1;
      *(_QWORD *)&v7[2] = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_252ce29f5e8510ed4347ad254221abdf___(
             v5,
             CurrentThreadId,
             (__int128 *)v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x18A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
    }
  }
  *(_OWORD *)(a1 + 680) = *(_OWORD *)a2;
}
