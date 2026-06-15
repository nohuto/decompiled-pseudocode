/*
 * XREFs of ?ReleaseStreamConnection@@YAJPEAX@Z @ 0x180107250
 * Callers:
 *     AudioServerReleaseStreamConnection @ 0x18010AEC0 (AudioServerReleaseStreamConnection.c)
 *     STREAMCONNECTION_rundown @ 0x18010BAC0 (STREAMCONNECTION_rundown.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ReleaseStreamConnection(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *a1 = 0LL;
  v2 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  operator delete(a1, (const struct std::nothrow_t *)0x10);
  return 0LL;
}
