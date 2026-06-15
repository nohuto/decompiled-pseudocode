/*
 * XREFs of ??$_Construct_in_place@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YAXAEAVDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEAV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x18002E30C
 * Callers:
 *     _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002F0F0 (_lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Construct_in_place<DeactivatableDuckingDescriptor,IDuckingController * &,std::shared_ptr<DuckingDescriptor> &>(
        __int64 a1,
        _QWORD *a2)
{
  return DeactivatableDuckingDescriptor::DeactivatableDuckingDescriptor(a1, *a2);
}
