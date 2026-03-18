/*
 * XREFs of DCompositionForceRender @ 0x1400E8CF8
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E8D3C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DCompositionForceRender(__int64 a1)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    v3 = DirectComposition::CConnection::ForceRender(DefaultConnection);
    DirectComposition::CConnection::Release(v2, v4);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
