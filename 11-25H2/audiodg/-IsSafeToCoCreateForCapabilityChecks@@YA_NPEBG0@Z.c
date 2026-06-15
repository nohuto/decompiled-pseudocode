/*
 * XREFs of ?IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z @ 0x140065DC0
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016780 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     <none>
 */

char __fastcall IsSafeToCoCreateForCapabilityChecks(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  int *i; // rbx
  __int64 j; // rdi

  for ( i = (int *)&off_1400C3430; i != &dword_1400C3478; i += 6 )
  {
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)i, a1) )
    {
      for ( j = 0LL; (unsigned int)j < i[2]; j = (unsigned int)(j + 1) )
      {
        if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)i + 2) + 8 * j), a2) )
          return 0;
      }
    }
  }
  return 1;
}
