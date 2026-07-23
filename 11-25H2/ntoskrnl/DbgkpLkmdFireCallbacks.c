/*
 * XREFs of DbgkpLkmdFireCallbacks @ 0x1406FC128
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406FBB5C (DbgkCaptureLiveDump.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DbgkpLkmdFireCallbacks(__int64 a1, int a2, __int64 a3)
{
  char v3; // si
  int SessionId; // ebx
  _RTL_RUN_ONCE *v8; // rdi
  __int64 v9; // r14
  struct _EX_RUNDOWN_REF *v10; // rbp
  int Ptr; // eax

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    if ( SessionId != (unsigned int)PsGetSessionIdEx(a3) || SessionId == -1 )
      v3 = 0;
  }
  v8 = &RunOnce;
  v9 = 8LL;
  do
  {
    v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
    if ( v10 )
    {
      Ptr = (int)v8[1].Ptr;
      if ( (Ptr & a2) != 0 && ((Ptr & 4) == 0 || v3) )
      {
        guard_dispatch_icall_no_overrides(a1 + 0x4000);
        if ( (int)guard_dispatch_icall_no_overrides(DbgkpLkmdSnapData) < 0 )
          guard_dispatch_icall_no_overrides(a1 + 0x4000);
      }
      ExDereferenceCallBackBlock((signed __int64 *)v8, v10);
    }
    v8 += 2;
    --v9;
  }
  while ( v9 );
}
