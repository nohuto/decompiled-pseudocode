/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E1B98
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1400B6650 (NtDCompositionConfirmFrame.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x140222888 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x14006D6D4 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x1400E1C60 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1400E1CAC (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x14019DF20 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(char **this)
{
  char *v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rdi
  DirectComposition::CConnection::CFrameStats *v7; // rsi

  DirectComposition::CConnection::DiscardAllCompositionFrames((DirectComposition::CConnection *)this);
  v2 = this[24];
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)this[19];
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)this[2];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    GreDeleteFastMutex(this[2]);
  }
  v5 = this[37];
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  Gre::SectionObj::~SectionObj((Gre::SectionObj *)this);
  v6 = 300LL;
  v7 = (DirectComposition::CConnection::CFrameStats *)(this + 19853);
  do
  {
    v7 = (DirectComposition::CConnection::CFrameStats *)((char *)v7 - 528);
    DirectComposition::CConnection::CFrameStats::~CFrameStats(v7);
    --v6;
  }
  while ( v6 );
  DirectComposition::CChannelGroup::~CChannelGroup((DirectComposition::CChannelGroup *)(this + 3));
}
