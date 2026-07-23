/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x1406FC080
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int i; // edi
  _RTL_RUN_ONCE *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  for ( i = 0; i < 8; ++i )
  {
    v3 = &RunOnce + 2 * i;
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
