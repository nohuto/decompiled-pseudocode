/*
 * XREFs of ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x140098200
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x140098AB4 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

_BOOL8 __fastcall CTokenManager::GetAnalogSurfaceUpdates(
        CTokenManager *this,
        __int64 a2,
        unsigned int a3,
        struct CSM_SURFACE_UPDATE_ *a4,
        struct CToken *a5)
{
  unsigned int *v5; // rdi
  BOOL v6; // esi
  unsigned int v10; // edx
  CTokenQueue *v11; // rcx
  bool Updates; // al
  struct CToken *v13; // rdi
  void *v14; // rcx
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = (unsigned int *)a5;
  v6 = 0;
  v16 = 0;
  if ( a5 )
    *(_DWORD *)a5 = 0;
  CTokenManager::AcquireTokenManagerLock(this);
  v11 = (CTokenManager *)((char *)this + 360);
  if ( *(CTokenQueue **)v11 == v11 )
    goto LABEL_7;
  a5 = 0LL;
  Updates = CTokenQueue::ReleaseAnalogTokensAndGetUpdates(v11, v10, a4, a3, &v16, v5, &a5);
  v13 = a5;
  v6 = Updates;
  if ( a5 )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 152LL))(this);
    *((_QWORD *)this + 42) = v13;
  }
  if ( !v16 )
  {
LABEL_7:
    v14 = (void *)*((_QWORD *)this + 10);
    if ( v14 )
      ZwClearEvent(v14);
  }
  CTokenManager::ReleaseTokenManagerLock(this);
  return v6;
}
