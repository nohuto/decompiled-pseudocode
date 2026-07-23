/*
 * XREFs of ExAllocatePoolSanityChecks @ 0x140BA62F4
 * Callers:
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall ExAllocatePoolSanityChecks(int a1, ULONG_PTR a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rdi
  ULONG_PTR v6; // r8
  unsigned int i; // ecx
  unsigned int v10; // edx
  __int64 result; // rax
  __int64 v12; // rdx

  v5 = a1;
  v6 = (unsigned int)*a3;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 541542722 )
    {
      if ( (MmVerifierData & 1) != 0 )
        CarReportRuleViolationFromNt(194, 156LL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4, 0, a4);
      *a3 = 828662082;
    }
    else
    {
      for ( i = 0; i < 0x20; i += 8 )
      {
        v10 = (unsigned int)v6 >> i;
        if ( (unsigned __int8)(((unsigned int)v6 >> i) - 97) <= 0x19u )
          LOBYTE(v10) = v10 - 32;
        if ( (unsigned __int8)(v10 - 48) <= 9u || (unsigned __int8)(v10 - 65) <= 0x19u )
          goto LABEL_19;
      }
      if ( (MmVerifierData & 1) != 0 )
        CarReportRuleViolationFromNt(194, 157LL, v6, v5 & 0xFFFFFFFFFFFFFF7FuLL, a4, 0, a4);
      *a3 = 845439298;
    }
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      CarReportRuleViolationFromNt(194, 155LL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4, 0, a4);
    *a3 = 811884866;
  }
LABEL_19:
  if ( !a2 && (MmVerifierData & 1) != 0 )
    CarReportRuleViolationFromNt(196, 0LL, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, 0LL, 0, a4);
  result = KeGetCurrentIrql();
  if ( (v5 & 1) != 0 )
  {
    if ( (unsigned __int8)result > 1u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
      {
        v12 = 1LL;
        return CarReportRuleViolationFromNt(196, v12, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, a2, 0, a4);
      }
    }
  }
  else
  {
    v12 = 2LL;
    if ( (unsigned __int8)result > 2u )
    {
      result = (unsigned int)MmVerifierData;
      if ( (MmVerifierData & 1) != 0 )
        return CarReportRuleViolationFromNt(196, v12, KeGetCurrentIrql(), v5 & 0xFFFFFFFFFFFFFF7FuLL, a2, 0, a4);
    }
  }
  return result;
}
