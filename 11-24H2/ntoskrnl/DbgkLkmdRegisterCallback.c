/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x140705A30
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14040EA64 (ExCompareExchangeCallBack.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     ExAllocateCallBack @ 0x140A85D20 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int i; // ebx
  _RTL_RUN_ONCE *v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  unsigned int j; // ebx

  v4 = a3;
  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v9 = &RunOnce + 2 * i;
    v10 = ExReferenceCallBackBlock((signed __int64 *)v9, a2, a3, a4);
    if ( v10 )
    {
      if ( a1 == v10[1].Count )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v9, v10);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v9, v10);
    }
  }
  v11 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v11 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v11, 0LL) )
    {
      *((_DWORD *)&RunOnce + 4 * j + 2) = v4;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v11, 0);
  return 3221226539LL;
}
