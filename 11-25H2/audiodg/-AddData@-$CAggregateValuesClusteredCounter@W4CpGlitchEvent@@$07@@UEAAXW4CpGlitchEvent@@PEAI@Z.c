/*
 * XREFs of ?AddData@?$CAggregateValuesClusteredCounter@W4CpGlitchEvent@@$07@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x140037A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateValuesClusteredCounter<enum CpGlitchEvent,8>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = *a3;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 4LL * a2 + 48), result);
  }
  return result;
}
