/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10
 * Callers:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x14019F908 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224304 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400707A0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1400E1CAC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140135D0C (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  DirectComposition::CBatch *v3; // rcx
  DirectComposition::CBatch *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rbx
  DirectComposition::CBatch *v7; // rcx
  DirectComposition::CBatch *v8; // rbx
  PSLIST_ENTRY v9; // rax
  DirectComposition::CBatch *v10; // r8
  DirectComposition::CBatch **v11; // rcx
  DirectComposition::CBatch *v12; // rax
  DirectComposition::CBatch *v13; // r9
  DirectComposition::CBatch **v14; // rdx
  DirectComposition::CBatch *v15; // rax
  DirectComposition::CBatch *v16; // rbx
  DirectComposition::CEvent *v17; // rcx

  v2 = 0;
  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 2));
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  Gre::SectionObj::~SectionObj(this);
  v3 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = *(DirectComposition::CBatch **)v3;
      DirectComposition::CBatch::ReturnToApplication(v3, 0);
      v3 = v4;
    }
    while ( v4 );
  }
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = *(DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v8;
    }
    while ( v8 );
  }
  v9 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
  v10 = 0LL;
  v11 = (DirectComposition::CBatch **)v9;
  if ( v9 )
  {
    do
    {
      v12 = v11[3];
      v13 = *v11;
      if ( v12 )
      {
        v14 = (DirectComposition::CBatch **)*((_QWORD *)v12 + 3);
        *((_QWORD *)v12 + 3) = 0LL;
        v15 = v11[3];
        v11[3] = 0LL;
        *v11 = v15;
      }
      else
      {
        v14 = v11;
      }
      *v14 = v10;
      v10 = (DirectComposition::CBatch *)v11;
      v11 = (DirectComposition::CBatch **)v13;
    }
    while ( v13 );
  }
  if ( v10 )
  {
    do
    {
      v16 = *(DirectComposition::CBatch **)v10;
      DirectComposition::CBatch::ReturnToApplication(v10, 0);
      v10 = v16;
    }
    while ( v16 );
  }
  if ( v2 )
    DirectComposition::CChannelGroup::OnConnectionDisconnected((DirectComposition::CConnection *)((char *)this + 24));
  v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
  if ( v17 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v17);
    *((_QWORD *)this + 11) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
}
