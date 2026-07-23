/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x140705BC8
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1407055FC (DbgkCaptureLiveDump.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v6; // r15d
  int SessionId; // ebx
  _RTL_RUN_ONCE *v9; // rdi
  __int64 v10; // r14
  struct _EX_RUNDOWN_REF *v11; // rbp
  int Ptr; // eax
  __int64 v13; // rdx

  v4 = 1;
  v6 = a2;
  if ( (a2 & 1) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( SessionId != (unsigned int)PsGetSessionIdEx(a3) || SessionId == -1 )
      v4 = 0;
  }
  v9 = &RunOnce;
  v10 = 8LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)v9, a2, a3, a4);
    if ( v11 )
    {
      Ptr = (int)v9[1].Ptr;
      if ( (Ptr & v6) != 0 && ((Ptr & 4) == 0 || v4) )
      {
        guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
        if ( (int)guard_dispatch_icall_no_overrides(DbgkpLkmdSnapData, DbgkpLkmdIsMemoryBlockPresentFromCallback) < 0 )
          guard_dispatch_icall_no_overrides(a1 + 0x4000, v13);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v9, v11);
    }
    v9 += 2;
    --v10;
  }
  while ( v10 );
}
