/*
 * XREFs of ?DxgkpGetSessionIdFromTargetedSession@@YAK_K@Z @ 0x1401FA97C
 * Callers:
 *     ?OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140199BF4 (-OnPathFailedOrInvalidate@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkpGetSessionIdFromTargetedSession(__int64 a1)
{
  __int64 result; // rax

  if ( a1 == 0x200000000LL )
    return *(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 122) + 144LL);
  if ( a1 == 0x100000000LL )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  if ( a1 != 0x300000000LL )
    return (unsigned int)a1;
  return result;
}
