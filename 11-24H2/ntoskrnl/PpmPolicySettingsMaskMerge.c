/*
 * XREFs of PpmPolicySettingsMaskMerge @ 0x1404A2D98
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmPolicySettingsMaskMerge(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  v3 = 2LL;
  v4 = a2 - (_QWORD)a3;
  v5 = a1 - (_QWORD)a3;
  do
  {
    *(_QWORD *)((char *)a3 + v5) = *a3 | *(_QWORD *)((char *)a3 + v4);
    ++a3;
    --v3;
  }
  while ( v3 );
}
