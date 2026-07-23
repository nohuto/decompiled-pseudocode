/*
 * XREFs of RtlpWnfCalculateRetryTime @ 0x180113928
 * Callers:
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004D6B0 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpWnfCalculateRetryTime(__int64 a1)
{
  __int64 *v1; // rdx
  unsigned __int64 v2; // r8
  int i; // r9d
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 72);
  v2 = 0LL;
  for ( i = 1; v1 != (__int64 *)(a1 + 72); v1 = (__int64 *)*v1 )
  {
    if ( (*((_BYTE *)v1 + 60) & 4) != 0 && *((_DWORD *)v1 + 28) )
    {
      if ( !v2 || v2 > v1[13] )
        v2 = v1[13];
      result = *(unsigned int *)(qword_1801CD200 + 68);
      if ( *((_DWORD *)v1 + 29) < (unsigned int)result )
        i = 0;
    }
  }
  *(_QWORD *)(a1 + 136) = v2;
  *(_DWORD *)(a1 + 144) = i;
  return result;
}
