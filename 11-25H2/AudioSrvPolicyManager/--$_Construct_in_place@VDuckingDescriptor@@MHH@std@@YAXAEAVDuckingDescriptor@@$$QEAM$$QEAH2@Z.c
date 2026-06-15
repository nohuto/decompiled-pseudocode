/*
 * XREFs of ??$_Construct_in_place@VDuckingDescriptor@@MHH@std@@YAXAEAVDuckingDescriptor@@$$QEAM$$QEAH2@Z @ 0x18002E31C
 * Callers:
 *     ??$make_shared@VDuckingDescriptor@@MHH@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEAH1@Z @ 0x18002E8C4 (--$make_shared@VDuckingDescriptor@@MHH@std@@YA-AV-$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Construct_in_place<DuckingDescriptor,float,int,int>(__int64 a1, int *a2, int *a3, int *a4)
{
  int v4; // eax
  int v5; // xmm0_4
  __int64 v6; // r9
  bool result; // al

  v4 = *a4;
  v5 = *a2;
  v6 = *a3;
  result = v4 != 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 12) = result;
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = &DuckingDescriptor::`vftable';
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}
