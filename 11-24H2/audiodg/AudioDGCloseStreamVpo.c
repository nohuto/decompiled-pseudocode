/*
 * XREFs of AudioDGCloseStreamVpo @ 0x14006D7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioDGCloseStreamVpo(__int64 a1, _QWORD *a2)
{
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  *a2 = 0LL;
  return 0LL;
}
