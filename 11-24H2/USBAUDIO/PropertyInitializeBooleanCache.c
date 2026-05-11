/*
 * XREFs of PropertyInitializeBooleanCache @ 0x140032FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyInitializeBooleanCache(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _DWORD *, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           1LL,
           a3 + 3,
           *a3,
           129,
           &v4);
}
