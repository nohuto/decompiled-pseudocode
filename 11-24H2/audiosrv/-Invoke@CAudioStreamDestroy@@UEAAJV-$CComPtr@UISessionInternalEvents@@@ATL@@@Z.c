/*
 * XREFs of ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800514E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStreamDestroy::Invoke(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         (*(_QWORD *)(a1 + 8) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 8) != 0LL),
         (*(_QWORD *)(a1 + 16) + 8LL) & -(__int64)(*(_QWORD *)(a1 + 16) != 0LL));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
