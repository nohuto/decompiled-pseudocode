/*
 * XREFs of ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025828
 * Callers:
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x140025190 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 *     ?Release@CCompositionFrame@@UEAAJXZ @ 0x140025230 (-Release@CCompositionFrame@@UEAAJXZ.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x140025460 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1400204B4 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x140025168 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBuffer(CTokenManager *this, struct CLegacyTokenBuffer *a2)
{
  struct CLegacyTokenBuffer *v3; // rbx
  struct CLegacyTokenBuffer **v4; // rax
  __int64 v5; // rdx

  v3 = a2;
  CLegacyTokenBuffer::Reset(a2);
  CTokenManager::AcquireTokenManagerLock(this);
  if ( *((_DWORD *)this + 46) <= 3u )
  {
    v4 = (struct CLegacyTokenBuffer **)((char *)this + 168);
    v5 = *((_QWORD *)this + 21);
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *((_QWORD *)v3 + 1) = v4;
    *(_QWORD *)(v5 + 8) = v3;
    *v4 = v3;
    ++*((_DWORD *)this + 46);
    v3 = 0LL;
  }
  CTokenManager::ReleaseTokenManagerLock(this);
  if ( v3 )
    CLegacyTokenBuffer::`scalar deleting destructor'(v3);
}
