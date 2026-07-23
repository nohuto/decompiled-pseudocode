/*
 * XREFs of __ft_has_proxy @ 0x1801445DC
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x1801441D0 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ft_has_proxy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (a2 & 0x40) == 0 )
    return 0LL;
  *(_QWORD *)a4 = a2;
  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 4) & 0xFFFFF0FF | 0x400;
  return 1LL;
}
