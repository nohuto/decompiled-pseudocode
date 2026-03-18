/*
 * XREFs of ?GetPresentCount@CLegacySwapChain@@UEBAIXZ @ 0x1801DC580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::GetPresentCount(CLegacySwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 33);
  v3 = 0;
  if ( !v1 )
    return 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 120LL))(v1, &v3);
  return v3;
}
