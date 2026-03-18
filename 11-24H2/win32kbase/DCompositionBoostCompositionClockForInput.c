/*
 * XREFs of DCompositionBoostCompositionClockForInput @ 0x140073CCC
 * Callers:
 *     ?BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z @ 0x14018FFDC (-BoostRefreshRateForInput@CCompositionRefreshRateBooster@@AEAAXW4TimeoutInterval@1@@Z.c)
 *     ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x14021FC34 (-HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ.c)
 * Callees:
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x140073D14 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DCompositionBoostCompositionClockForInput(int a1)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v3; // rdi
  unsigned int v4; // ebx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v3 = DefaultConnection;
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CConnection::BoostCompositorClock(DefaultConnection, a1);
    DirectComposition::CConnection::Release(v3);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v4;
}
