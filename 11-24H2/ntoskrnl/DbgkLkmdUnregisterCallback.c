/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x140707F60
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x1402C9C50 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int i; // edi
  union _RTL_RUN_ONCE *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  for ( i = 0; i < 8; ++i )
  {
    v3 = &stru_140E3EBE0 + 2 * i;
    v4 = ExReferenceCallBackBlock((signed __int64 *)v3);
    v5 = v4;
    if ( v4 )
    {
      if ( a1 == v4[1].Count && ExCompareExchangeCallBack((signed __int64 *)v3, 0LL, (__int64)v4) )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v3, v5);
        ExWaitForRundownProtectionRelease(v5);
        ExFreePoolWithTag(v5, 0);
        return 0LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v3, v5);
    }
  }
  return 3221226021LL;
}
