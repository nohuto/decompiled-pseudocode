/*
 * XREFs of _lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_ @ 0x14018AEC0
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140187524 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140271120 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_c7448c75b3dac8478dfa1698e822be3e_::_lambda_c7448c75b3dac8478dfa1698e822be3e_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax

  a1[3] = a5;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
