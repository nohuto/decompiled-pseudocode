/*
 * XREFs of ??$make_shared@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YA?AV?$shared_ptr@VCXvmPowerReferenceManager@@@0@$$QEBU_GUID@@0@Z @ 0x18010364C
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180016D04 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YAXAEAVCXvmPowerReferenceManager@@$$QEBU_GUID@@1@Z @ 0x180103504 (--$_Construct_in_place@VCXvmPowerReferenceManager@@$$CBU_GUID@@$$CBU2@@std@@YAXAEAVCXvmPowerRefe.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CXvmPowerReferenceManager,_GUID const,_GUID const>(
        _QWORD *a1,
        struct _GUID *a2,
        struct _GUID *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = operator new(0x70uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<CXvmPowerReferenceManager>::`vftable';
    std::_Construct_in_place<CXvmPowerReferenceManager,_GUID const,_GUID const>(v6 + 4, a2, a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  return a1;
}
