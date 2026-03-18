/*
 * XREFs of HalpApicStartProcessor @ 0x140569290
 * Callers:
 *     <none>
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicStartProcessor(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9

  if ( (a4 & 0xFFF00FFF) != 0 )
    return 3221225485LL;
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
  if ( !HalpApicX2Mode )
    a2 <<= 24;
  guard_dispatch_icall_no_overrides(a2, 50432LL, v11, v12);
  KeStallExecutionProcessor(0xAu);
  guard_dispatch_icall_no_overrides(a2, 34048LL, v13, v14);
  KeStallExecutionProcessor(0xC8u);
  v15 = (a4 & 0xFF000 | 0x600000u) >> 12;
  guard_dispatch_icall_no_overrides(a2, v15, v16, v17);
  KeStallExecutionProcessor(0xC8u);
  guard_dispatch_icall_no_overrides(v19, v18, v20, v21);
  KeStallExecutionProcessor(0x64u);
  guard_dispatch_icall_no_overrides(a2, v15, v22, v23);
  KeStallExecutionProcessor(0xC8u);
  return 0LL;
}
