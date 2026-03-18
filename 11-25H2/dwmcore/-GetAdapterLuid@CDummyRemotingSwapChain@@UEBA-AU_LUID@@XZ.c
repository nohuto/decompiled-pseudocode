/*
 * XREFs of ?GetAdapterLuid@CDummyRemotingSwapChain@@UEBA?AU_LUID@@XZ @ 0x1802CFDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDummyRemotingSwapChain::GetAdapterLuid(CDummyRemotingSwapChain *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*((_QWORD *)this + 6) + 936LL);
  return result;
}
