/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800F5BE0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180071E50 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1800728B0 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, unsigned __int16 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)FindNodeOrParent((unsigned __int16 *)a1, a2, &v11) != 1 )
    return 0LL;
  v6 = v11;
  do
  {
    v7 = v6;
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = v9;
  }
  while ( v9 && (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, _QWORD *))(a1 + 72))(a1, a2, v9 + 4) == 2 );
  *a3 = v8;
  return v7 + 4;
}
