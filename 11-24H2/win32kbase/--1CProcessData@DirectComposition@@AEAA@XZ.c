/*
 * XREFs of ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400735D0
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x140073364 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14006FC08 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14007365C (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x140073708 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x140073D14 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400ED0EC (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 */

void __fastcall DirectComposition::CProcessData::~CProcessData(DirectComposition::CProcessData *this)
{
  DirectComposition::CCompClockInfo *v2; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v4; // rsi

  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v4 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 16) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 17) )
        DirectComposition::CConnection::BoostCompositorClock(v4, 0);
      DirectComposition::CConnection::Release(v4);
    }
  }
  v2 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 7);
  if ( v2 )
    DirectComposition::CCompClockInfo::Release(v2);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
