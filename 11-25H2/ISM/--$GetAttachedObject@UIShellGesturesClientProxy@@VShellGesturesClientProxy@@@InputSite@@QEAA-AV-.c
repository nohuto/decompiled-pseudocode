/*
 * XREFs of ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x180093714
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??$As@UIShellGesturesClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellGesturesClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A5BC (--$As@UIShellGesturesClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ?InternalAddRef@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18007AA3C (-InternalAddRef@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IShellGesturesClientProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  *a2 = (v3 - 8) & -(__int64)(v3 != 0);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalAddRef(a2);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a2;
}
