/*
 * XREFs of ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1C00338F8
 * Callers:
 *     ?OnProcessDestruction@CProcessData@DirectComposition@@SAXPEAU_W32PROCESS@@@Z @ 0x1C00338AC (-OnProcessDestruction@CProcessData@DirectComposition@@SAXPEAU_W32PROCESS@@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C020A144 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0008CE0 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0032288 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C00335E4 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C003394C (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C020A1A8 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C020A82C (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

void __fastcall DirectComposition::CProcessData::~CProcessData(DirectComposition::CProcessData *this, unsigned int a2)
{
  DirectComposition::CCompClockInfo *v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rdi

  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)this);
    v5 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 16) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 17) )
        DirectComposition::CConnection::BoostCompositorClock(v5, 0);
      DirectComposition::CConnection::Release(v5, a2);
    }
  }
  v3 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 7);
  if ( v3 )
    DirectComposition::CCompClockInfo::Release(v3, a2);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
