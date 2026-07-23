/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x1406FBF90
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14036CC90 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     ExAllocateCallBack @ 0x140A84B30 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  unsigned int j; // ebx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v8 = &RunOnce + 2 * i;
    v9 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v9 )
    {
      if ( a1 == v9[1].Count )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v8, v9);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v9);
    }
  }
  v10 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v10 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v10, 0LL) )
    {
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v10, 0);
  return 3221226539LL;
}
