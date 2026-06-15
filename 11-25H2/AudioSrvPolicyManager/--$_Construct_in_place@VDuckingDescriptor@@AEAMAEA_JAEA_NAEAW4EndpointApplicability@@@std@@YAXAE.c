/*
 * XREFs of ??$_Construct_in_place@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YAXAEAVDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@Z @ 0x18003F2F4
 * Callers:
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18003FA18 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Construct_in_place<DuckingDescriptor,float &,__int64 &,bool &,enum EndpointApplicability &>(
        __int64 a1,
        int *a2,
        __int64 *a3,
        char *a4,
        int *a5)
{
  int v5; // xmm0_4
  __int64 v6; // r8
  int v7; // r10d
  char result; // al

  v5 = *a2;
  v6 = *a3;
  v7 = *a5;
  result = *a4;
  *(_BYTE *)(a1 + 12) = *a4;
  *(_DWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = &DuckingDescriptor::`vftable';
  *(_QWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 24) = v7;
  return result;
}
