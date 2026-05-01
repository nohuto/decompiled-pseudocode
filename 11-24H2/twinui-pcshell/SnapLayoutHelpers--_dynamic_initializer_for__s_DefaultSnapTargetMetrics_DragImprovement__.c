/*
 * XREFs of SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics_DragImprovement__ @ 0x1801DD200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SnapLayoutHelpers::_dynamic_initializer_for__s_DefaultSnapTargetMetrics_DragImprovement__()
{
  __int64 result; // rax
  __int128 v1; // [rsp+0h] [rbp-30h]
  __int128 v2; // [rsp+10h] [rbp-20h]
  __int128 v3; // [rsp+20h] [rbp-10h]

  result = 138LL;
  LODWORD(v3) = 138;
  *(_QWORD *)((char *)&v3 + 4) = 0x3DCCCCCD0000008ALL;
  *(_QWORD *)&v2 = 0x8A0000008ALL;
  *(_QWORD *)&v1 = 0x8A0000008ALL;
  HIDWORD(v3) = 1036831949;
  *((_QWORD *)&v2 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  *((_QWORD *)&v1 + 1) = 0x3DCCCCCD3DCCCCCDLL;
  xmmword_1808C96C8 = v3;
  xmmword_1808C96D8 = v2;
  xmmword_1808C96E8 = v1;
  return result;
}
