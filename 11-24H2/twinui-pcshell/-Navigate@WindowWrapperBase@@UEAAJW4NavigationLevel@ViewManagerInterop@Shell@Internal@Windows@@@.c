/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180440E30
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b___ @ 0x18043B4C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v5 = &v6;
  *((_QWORD *)&v5 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1c691449c5167e3292e0cc06d01cfa4b___(
           v3,
           CurrentThreadId,
           &v5);
}
