/*
 * XREFs of ?EnsurePlacementReportedInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x18004EF78
 * Callers:
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x180048138 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ??$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA_KAEB_K@Z @ 0x1800481FC (--$SetPlacementEventValueMember@_K@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEA.c)
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18004F6B0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::EnsurePlacementReportedInfoRead(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  bool v3; // cf
  _DWORD *v4; // rdi
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 252) )
  {
    v2 = (const WCHAR *)((char *)this + 216);
    *(_WORD *)((char *)this + 251) = 256;
    v3 = *((_QWORD *)this + 30) < 8uLL;
    v4 = (_DWORD *)((char *)this + 104);
    pcbData = 36;
    if ( !v3 )
      v2 = *(const WCHAR **)v2;
    if ( RegGetValueW(HKEY_CURRENT_USER, v2, L"PlacementReported", 8u, 0LL, (char *)this + 104, &pcbData)
      || pcbData <= 4
      || *(_BYTE *)v4 != 4 )
    {
      *v4 = 0;
      *(_BYTE *)v4 = 4;
      *((_OWORD *)this + 7) = 0LL;
      *((_OWORD *)this + 8) = 0LL;
    }
  }
}
