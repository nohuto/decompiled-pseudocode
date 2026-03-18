/*
 * XREFs of ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x140097EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x14000F2E4 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x140098D84 (-CreateUnBindToken@CToken@@SAJPEAVCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::AddUnBindToken(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  int v3; // ebx
  struct CToken *v4; // rsi
  struct CToken *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = CToken::CreateUnBindToken(a2, &v6);
  if ( v3 >= 0 )
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v4 = v6;
    v3 = CTokenManager::AddTokenToQueue(this, v6);
    if ( v3 < 0 )
    {
      (*(void (__fastcall **)(struct CToken *))(*(_QWORD *)v4 + 56LL))(v4);
      (**(void (__fastcall ***)(struct CToken *, __int64))v4)(v4, 1LL);
    }
    CTokenManager::ReleaseTokenManagerLock(this);
  }
  return (unsigned int)v3;
}
