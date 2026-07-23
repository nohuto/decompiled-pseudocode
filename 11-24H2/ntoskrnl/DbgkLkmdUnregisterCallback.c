/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x140705B20
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  _RTL_RUN_ONCE *v6; // rsi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  for ( i = 0; i < 8; ++i )
  {
    v6 = &RunOnce + 2 * i;
    v7 = ExReferenceCallBackBlock((signed __int64 *)v6, a2, a3, a4);
    v8 = v7;
    if ( v7 )
    {
      if ( a1 == v7[1].Count && ExCompareExchangeCallBack((signed __int64 *)v6, 0LL, (__int64)v7) )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v6, v8);
        ExWaitForRundownProtectionRelease(v8);
        ExFreePoolWithTag(v8, 0);
        return 0LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v6, v8);
    }
  }
  return 3221226021LL;
}
