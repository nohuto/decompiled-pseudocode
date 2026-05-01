/*
 * XREFs of CrmPolicyComparisonPairsGet @ 0x180078CEC
 * Callers:
 *     CrmActivityStart @ 0x18002D8A0 (CrmActivityStart.c)
 * Callees:
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall CrmPolicyComparisonPairsGet(int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r14

  v2 = 0;
  v5 = 0LL;
  v6 = 8LL;
  do
  {
    v7 = v5 + 88LL * *a1;
    if ( *(_DWORD *)((char *)&CrmAcResourceConditionPolicyTable + v7 + 12) )
    {
      v8 = *(unsigned int *)((char *)&CrmAcResourceConditionPolicyTable + v7 + 12);
      memcpy_0((void *)(a2 + 16LL * v2), (char *)&CrmAcResourceConditionPolicyTable + v7 + 16, 16 * v8);
      do
      {
        ++v2;
        --v8;
      }
      while ( v8 );
    }
    ++a1;
    v5 += 272LL;
    --v6;
  }
  while ( v6 );
  return v2;
}
