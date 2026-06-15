/*
 * XREFs of ??1?$CAutoPtr@VCConnectionNode@@@ATL@@QEAA@XZ @ 0x14003E518
 * Callers:
 *     _CDeviceGraphObjectCache::CreateConnection_::_1_::dtor$1 @ 0x140092379 (_CDeviceGraphObjectCache--CreateConnection_--_1_--dtor$1.c)
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$1 @ 0x1400936B2 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
