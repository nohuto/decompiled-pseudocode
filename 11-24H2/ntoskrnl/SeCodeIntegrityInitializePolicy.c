/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x140C39B04
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SepInitializeDebugOptions @ 0x140C39BD0 (SepInitializeDebugOptions.c)
 *     SeSecureBootRegisterPolicy @ 0x140C3A930 (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rdx
  __int64 v5; // r9
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v1 = 0;
  v7 = 0;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3
    || (v2 = *(_QWORD *)(v3 + 2904)) == 0
    || (v4 = *(unsigned int *)(v2 + 64), !(_DWORD)v4)
    || (v1 = SeSecureBootRegisterPolicy(v2 + *(unsigned int *)(v2 + 60) + 112LL, v4), v1 >= 0) )
  {
    SepInitializeDebugOptions();
    if ( qword_140F048E0 )
    {
      v1 = guard_dispatch_icall_no_overrides(v2, &v8, &v7, v5);
      if ( v1 >= 0 )
      {
        SeCiStateElements = v8;
        SeCiStateElementCount = v7;
      }
    }
  }
  return (unsigned int)v1;
}
