/*
 * XREFs of ?ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA?AW4HealthEvaluationResult@234@W45234@@Z @ 0x18005683C
 * Callers:
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004EF98 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ResolveHealthResultWithTolerance(
        __int64 a1,
        unsigned __int16 a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // r8
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  SystemTimeAsFileTime = 0LL;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v4 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v5 = (unsigned __int64 *)(a1 + 168);
  if ( *(_WORD *)(a1 + 162) != a2 || (v6 = *v5) == 0 )
  {
    *(_WORD *)(a1 + 162) = a2;
    v6 = v4;
    *(_BYTE *)(a1 + 176) = 0;
    *v5 = v4;
    *(_BYTE *)(a1 + 253) = 1;
  }
  v7 = *(_BYTE *)(a1 + 176);
  if ( v7 != 0xFF )
  {
    ++v7;
    *(_BYTE *)(a1 + 253) = 1;
    *(_BYTE *)(a1 + 176) = v7;
  }
  if ( a2 != 2 && ((unsigned int)v6 + (v6 & 0xFFFFFFFF00000000uLL) + 144000000000LL > v4 || v7 <= 3u) )
    return *(unsigned __int16 *)(a1 + 160);
  return a2;
}
