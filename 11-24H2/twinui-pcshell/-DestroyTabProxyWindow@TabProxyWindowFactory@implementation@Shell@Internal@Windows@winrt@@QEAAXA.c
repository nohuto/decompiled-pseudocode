/*
 * XREFs of ?DestroyTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@@Z @ 0x18015EF18
 * Callers:
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18015E9F0 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18015EADC (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___ @ 0x18015EFD8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::DestroyTabProxyWindow(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  DWORD v5; // eax
  const char *v6; // r9
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, *a2);
  v5 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 32), 0xFFFFFFFF, 0);
  if ( v5 != 258 && v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAE4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v6);
  v13 = a2;
  *(_QWORD *)v10 = *(_QWORD *)(a1 + 48);
  v11 = &v13;
  CurrentThreadId = GetCurrentThreadId();
  v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d01e05628e7c62b77a3bad017b515331___(
         v8,
         CurrentThreadId,
         v10);
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v9);
}
