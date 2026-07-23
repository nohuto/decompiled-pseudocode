/*
 * XREFs of PspCallThreadNotifyRoutines @ 0x1408FCCC0
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PspCallThreadNotifyRoutines(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  _RTL_RUN_ONCE *v6; // rbx
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  int Count; // eax
  _RTL_RUN_ONCE *v11; // rbx
  __int64 v12; // rdi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  _RTL_RUN_ONCE *v15; // rbx
  __int64 v16; // rdi
  struct _EX_RUNDOWN_REF *v17; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi

  v4 = a1[206];
  if ( (_BYTE)a2 )
  {
    if ( (_BYTE)a3 )
    {
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v15 = &PspCreateThreadNotifyRoutine;
        v16 = 64LL;
        do
        {
          v17 = ExReferenceCallBackBlock((signed __int64 *)v15, a2, a3, a4);
          v18 = v17;
          if ( v17 )
          {
            if ( (v17[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
            ExDereferenceCallBackBlock((signed __int64 *)v15, v18);
          }
          ++v15;
          --v16;
        }
        while ( v16 );
      }
    }
    else if ( (PspNotifyEnableMask & 8) != 0 )
    {
      v6 = &PspCreateThreadNotifyRoutine;
      v7 = 64LL;
      do
      {
        v8 = ExReferenceCallBackBlock((signed __int64 *)v6, a2, a3, a4);
        v9 = v8;
        if ( v8 )
        {
          Count = v8[2].Count;
          if ( (Count & 1) == 0 && (!v4 || (Count & 2) != 0) )
            guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
          ExDereferenceCallBackBlock((signed __int64 *)v6, v9);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  else if ( (PspNotifyEnableMask & 0x10) != 0 || (PspNotifyEnableMask & 8) != 0 )
  {
    v11 = &PspCreateThreadNotifyRoutine;
    v12 = 64LL;
    do
    {
      v13 = ExReferenceCallBackBlock((signed __int64 *)v11, a2, a3, a4);
      v14 = v13;
      if ( v13 )
      {
        if ( !v4 || (v13[2].Count & 2) != 0 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(a1[68] + 464LL), a1[162]);
        ExDereferenceCallBackBlock((signed __int64 *)v11, v14);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
}
