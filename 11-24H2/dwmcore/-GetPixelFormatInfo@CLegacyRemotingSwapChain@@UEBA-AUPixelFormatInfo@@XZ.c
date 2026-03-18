/*
 * XREFs of ?GetPixelFormatInfo@CLegacyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802CC080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CLegacyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8);
  }
  else
  {
    a2[2] = 0;
    *a2 = 87;
    a2[1] = 3;
  }
  return a2;
}
