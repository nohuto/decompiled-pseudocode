/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140C28834
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SepInitializeDebugOptions @ 0x140C28900 (SepInitializeDebugOptions.c)
 *     SeSecureBootRegisterPolicy @ 0x140C29660 (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdx

  v1 = 0;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3
    || (v2 = *(_QWORD *)(v3 + 2904)) == 0
    || (v4 = *(unsigned int *)(v2 + 64), !(_DWORD)v4)
    || (v1 = SeSecureBootRegisterPolicy(v2 + *(unsigned int *)(v2 + 60) + 112LL, v4), v1 >= 0) )
  {
    SepInitializeDebugOptions();
    if ( qword_140F04500 )
    {
      v1 = guard_dispatch_icall_no_overrides(v2);
      if ( v1 >= 0 )
      {
        SeCiStateElements = 0LL;
        SeCiStateElementCount = 0;
      }
    }
  }
  return (unsigned int)v1;
}
