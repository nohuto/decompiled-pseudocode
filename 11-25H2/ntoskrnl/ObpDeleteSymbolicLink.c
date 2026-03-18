/*
 * XREFs of ObpDeleteSymbolicLink @ 0x140A60F30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeleteSymbolicLink(__int64 a1)
{
  void *v2; // rcx

  if ( (*(_DWORD *)(a1 + 28) & 0x10) == 0 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
