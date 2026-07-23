/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1408F38C0
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspCallThreadNotifyRoutines(__int64 a1, char a2, char a3)
{
  __int64 v3; // r15
  _RTL_RUN_ONCE *v5; // rbx
  __int64 v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  int Count; // eax
  _RTL_RUN_ONCE *v10; // rbx
  __int64 v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rsi
  _RTL_RUN_ONCE *v14; // rbx
  __int64 v15; // rdi
  struct _EX_RUNDOWN_REF *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rsi

  v3 = *(_QWORD *)(a1 + 1648);
  if ( a2 )
  {
    if ( a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v14 = &PspCreateThreadNotifyRoutine;
        v15 = 64LL;
        do
        {
          v16 = ExReferenceCallBackBlock((signed __int64 *)v14);
          v17 = v16;
          if ( v16 )
          {
            if ( (v16[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 464LL));
            ExDereferenceCallBackBlock((signed __int64 *)v14, v17);
          }
          ++v14;
          --v15;
        }
        while ( v15 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v5 = &PspCreateThreadNotifyRoutine;
      v6 = 64LL;
      do
      {
        v7 = ExReferenceCallBackBlock((signed __int64 *)v5);
        v8 = v7;
        if ( v7 )
        {
          Count = v7[2].Count;
          if ( (Count & 1) == 0 && (!v3 || (Count & 2) != 0) )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 464LL));
          ExDereferenceCallBackBlock((signed __int64 *)v5, v8);
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v10 = &PspCreateThreadNotifyRoutine;
    v11 = 64LL;
    do
    {
      v12 = ExReferenceCallBackBlock((signed __int64 *)v10);
      v13 = v12;
      if ( v12 )
      {
        if ( !v3 || (v12[2].Count & 2) != 0 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 464LL));
        ExDereferenceCallBackBlock((signed __int64 *)v10, v13);
      }
      ++v10;
      --v11;
    }
    while ( v11 );
  }
}
