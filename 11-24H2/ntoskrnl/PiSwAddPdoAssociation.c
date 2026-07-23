/*
 * XREFs of PiSwAddPdoAssociation @ 0x140A81554
 * Callers:
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwAddPdoAssociation(__int64 a1, void *a2, void *a3)
{
  unsigned int v6; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx

  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x30uLL, 0x57706E50u);
  if ( Pool2 )
  {
    PsReferenceSiloContext(a2);
    PsReferenceSiloContext(a3);
    Pool2[4] = a2;
    Pool2[5] = a3;
    v8 = *(_QWORD **)(a1 + 136);
    if ( *v8 != a1 + 128
      || (*Pool2 = a1 + 128,
          Pool2[1] = v8,
          *v8 = Pool2,
          *(_QWORD *)(a1 + 136) = Pool2,
          v9 = Pool2 + 2,
          v10 = (_QWORD *)qword_140F89FB8,
          *(__int64 **)qword_140F89FB8 != &PiSwGlobalPdoAssociationList) )
    {
      __fastfail(3u);
    }
    *v9 = &PiSwGlobalPdoAssociationList;
    v9[1] = v10;
    *v10 = v9;
    qword_140F89FB8 = (__int64)v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
