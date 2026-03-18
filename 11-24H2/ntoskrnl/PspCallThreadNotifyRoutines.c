/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1408A66B0
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r15
  union _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  __int64 v9; // r9
  struct _EX_RUNDOWN_REF *v10; // rsi
  int Count; // eax
  union _RTL_RUN_ONCE *v12; // rbx
  __int64 v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // rax
  __int64 v15; // r9
  struct _EX_RUNDOWN_REF *v16; // rsi
  union _RTL_RUN_ONCE *v17; // rbx
  __int64 v18; // rdi
  struct _EX_RUNDOWN_REF *v19; // rax
  __int64 v20; // r9
  struct _EX_RUNDOWN_REF *v21; // rsi

  v3 = a1[206];
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v17 = &PspCreateThreadNotifyRoutine;
        v18 = 64LL;
        do
        {
          v19 = ExReferenceCallBackBlock((signed __int64 *)v17);
          v21 = v19;
          if ( v19 )
          {
            if ( (v19[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162], a2, v20);
            ExDereferenceCallBackBlock((signed __int64 *)v17, v21);
          }
          ++v17;
          --v18;
        }
        while ( v18 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v6 = &PspCreateThreadNotifyRoutine;
      v7 = 64LL;
      do
      {
        v8 = ExReferenceCallBackBlock((signed __int64 *)v6);
        v10 = v8;
        if ( v8 )
        {
          Count = v8[2].Count;
          if ( (Count & 1) == 0 && (!v3 || (Count & 2) != 0) )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162], a2, v9);
          ExDereferenceCallBackBlock((signed __int64 *)v6, v10);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v12 = &PspCreateThreadNotifyRoutine;
    v13 = 64LL;
    do
    {
      v14 = ExReferenceCallBackBlock((signed __int64 *)v12);
      v16 = v14;
      if ( v14 )
      {
        if ( !v3 || (v14[2].Count & 2) != 0 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162], 0LL, v15);
        ExDereferenceCallBackBlock((signed __int64 *)v12, v16);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
}
