/*
 * XREFs of ?GetAdapterLuid@CLegacyRemotingSwapChain@@UEBA?AU_LUID@@XZ @ 0x1802CBFE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CLegacyRemotingSwapChain::GetAdapterLuid(CLegacyRemotingSwapChain *this, _QWORD *a2)
{
  __int64 v2; // r8
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    *a2 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v2 + 88LL))(*((_QWORD *)this + 8), v5);
  else
    *a2 = *(_QWORD *)(*((_QWORD *)this + 7) + 936LL);
  return (struct _LUID)a2;
}
