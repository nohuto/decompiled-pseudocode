/*
 * XREFs of RtlFlsGetValue @ 0x1800D9840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFlsGetValue(int a1, _QWORD *a2)
{
  _QWORD *FlsData; // rax
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax

  FlsData = NtCurrentTeb()->FlsData;
  if ( (unsigned int)(a1 - 1) > 0xFEE )
    return 3221225485LL;
  if ( !FlsData )
    return 3221225632LL;
  v4 = a1 + 16;
  _BitScanReverse((unsigned int *)&a1, a1 + 16);
  v5 = v4 ^ (unsigned int)(1 << a1);
  v6 = FlsData[(unsigned int)(a1 - 4) + 2];
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 8 * v5 + 8);
  else
    v7 = 0LL;
  *a2 = v7;
  return 0LL;
}
