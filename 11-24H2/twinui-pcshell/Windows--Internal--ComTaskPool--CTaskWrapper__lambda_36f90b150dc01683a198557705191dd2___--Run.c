/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run @ 0x1804D36B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_36f90b150dc01683a198557705191dd2___::Run(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v4 = 0xFFFFFFFFLL;
  v5 = 1;
  return (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 256))(v1, &v4);
}
