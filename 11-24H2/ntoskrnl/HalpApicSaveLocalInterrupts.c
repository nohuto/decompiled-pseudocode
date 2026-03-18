/*
 * XREFs of HalpApicSaveLocalInterrupts @ 0x140574D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicSaveLocalInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax

  v4 = 0;
  v5 = (_DWORD *)(a2 + 64);
  do
  {
    *(v5 - 16) = guard_dispatch_icall_no_overrides(16 * v4 + 512, a2, a3, a4);
    *(v5 - 8) = guard_dispatch_icall_no_overrides(16 * v4 + 256, v6, v7, v8);
    v12 = guard_dispatch_icall_no_overrides(16 * v4++ + 384, v9, v10, v11);
    *v5++ = v12;
  }
  while ( v4 < 8 );
  return 0LL;
}
