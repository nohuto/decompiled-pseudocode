/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x140708008
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140707A3C (DbgkCaptureLiveDump.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  int SessionId; // ebx
  union _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  int Ptr; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( SessionId != (unsigned int)PsGetSessionIdEx(a3) || SessionId == -1 )
      v3 = 0;
  }
  v8 = &stru_140E3EBE0;
  v9 = 8LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v11 )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        guard_dispatch_icall_no_overrides(a1 + 0x4000, v10, v12, v13);
        if ( (int)guard_dispatch_icall_no_overrides(
                    DbgkpLkmdSnapData,
                    DbgkpLkmdIsMemoryBlockPresentFromCallback,
                    a1,
                    v11[2].Count) < 0 )
          guard_dispatch_icall_no_overrides(a1 + 0x4000, v15, v16, v17);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v11);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
}
