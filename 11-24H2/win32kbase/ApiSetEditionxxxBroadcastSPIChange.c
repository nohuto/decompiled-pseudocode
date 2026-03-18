/*
 * XREFs of ApiSetEditionxxxBroadcastSPIChange @ 0x140193854
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     EditionxxxBroadcastSPIChange @ 0x14023B278 (EditionxxxBroadcastSPIChange.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxBroadcastSPIChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 (*v4)(void); // rax
  __int64 result; // rax

  v2 = a1;
  v3 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
  v4 = *(__int64 (**)(void))(v3 + 3248);
  if ( !v4 )
    return EditionxxxBroadcastSPIChange(v2, v3, 1LL);
  result = v4();
  if ( (int)result >= 0 )
    return EditionxxxBroadcastSPIChange(v2, v3, 1LL);
  return result;
}
