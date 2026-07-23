/*
 * XREFs of MiFreeEnclaveModules @ 0x1406F68F0
 * Callers:
 *     MiCanDeleteEnclave @ 0x140681954 (MiCanDeleteEnclave.c)
 * Callees:
 *     MiDereferenceEnclaveModule @ 0x1407F7DC4 (MiDereferenceEnclaveModule.c)
 *     DbgkUnMapViewOfSection @ 0x140A25518 (DbgkUnMapViewOfSection.c)
 */

void __fastcall MiFreeEnclaveModules(_QWORD **a1, void *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 == a1 )
      break;
    if ( a2 )
      DbgkUnMapViewOfSection(a2);
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    MiDereferenceEnclaveModule(v4);
  }
}
