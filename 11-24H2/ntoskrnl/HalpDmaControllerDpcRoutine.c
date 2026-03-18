/*
 * XREFs of HalpDmaControllerDpcRoutine @ 0x1404AEC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpDmaControllerDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 && *(_QWORD *)(a2 + 8) )
  {
    v4 = *(_QWORD *)(v2 + 360);
    if ( v4 && (*(_DWORD *)(v4 + 12) & 1) != 0 )
    {
      v3 = 3LL;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 32);
      if ( v5 )
        v3 = 3 - (unsigned int)(v5 != 2);
    }
    guard_dispatch_icall_no_overrides(v2, *(_QWORD *)(*(_QWORD *)(v2 + 352) + 48LL), *(_QWORD *)(a2 + 16), v3);
  }
}
