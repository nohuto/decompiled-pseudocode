/*
 * XREFs of ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x1802C3E58
 * Callers:
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180171C74 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?PrePresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1801C0FE4 (-PrePresent@CLegacySwapChain@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDevice::NotifyNoSequencePresent(CD3DDevice *this, struct _LUID a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9

  v3 = *((_QWORD *)this + 152);
  v4 = *((_QWORD *)this + 153);
  while ( v3 != v4 )
  {
    if ( *(_QWORD *)(v3 + 8) == a2 && *(_DWORD *)(v3 + 16) == a3 )
      ++*(_DWORD *)(v3 + 20);
    v3 += 24LL;
  }
}
