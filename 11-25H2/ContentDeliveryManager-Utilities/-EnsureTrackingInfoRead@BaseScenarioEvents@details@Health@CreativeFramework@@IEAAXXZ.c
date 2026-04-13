/*
 * XREFs of ?EnsureTrackingInfoRead@BaseScenarioEvents@details@Health@CreativeFramework@@IEAAXXZ @ 0x18004EE78
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18004F4B0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::EnsureTrackingInfoRead(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  bool v3; // cf
  _DWORD *v4; // rdi
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 250) )
  {
    v2 = (const WCHAR *)((char *)this + 216);
    *(_WORD *)((char *)this + 249) = 256;
    v3 = *((_QWORD *)this + 30) < 8uLL;
    v4 = (_DWORD *)((char *)this + 8);
    pcbData = 92;
    if ( !v3 )
      v2 = *(const WCHAR **)v2;
    if ( RegGetValueW(HKEY_CURRENT_USER, v2, 0LL, 8u, 0LL, (char *)this + 8, &pcbData)
      || pcbData <= 4
      || *(_BYTE *)v4 != 4 )
    {
      *v4 = 0;
      *(_BYTE *)v4 = 4;
      memset_0((char *)this + 16, 0, 0x58uLL);
    }
  }
}
