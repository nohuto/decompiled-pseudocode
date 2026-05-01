/*
 * XREFs of ?SetImageLocationNoLock@UwpWindowWrapper@@AEAAXURect@Foundation@Windows@@@Z @ 0x1801B5D28
 * Callers:
 *     ?SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1801B5C60 (-SetImageLocation@UwpWindowWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ @ 0x1801B5CE0 (-v_ApproveWinRtActivation@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___ @ 0x1801B5DE8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0.c)
 */

void __fastcall UwpWindowWrapper::SetImageLocationNoLock(__int64 a1, float *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 556)
    && (*(float *)(a1 + 704) != *a2
     || *(float *)(a1 + 708) != a2[1]
     || *(float *)(a1 + 712) != a2[2]
     || *(float *)(a1 + 716) != a2[3]) )
  {
    if ( *(_QWORD *)(a1 + 296) )
    {
      *(_QWORD *)v7 = a1;
      v8 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0bf3ef6290d6e5ef57ffd26b9b28bf0___(
             v5,
             CurrentThreadId,
             v7);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1B7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
    }
  }
  *(_OWORD *)(a1 + 688) = *(_OWORD *)a2;
}
