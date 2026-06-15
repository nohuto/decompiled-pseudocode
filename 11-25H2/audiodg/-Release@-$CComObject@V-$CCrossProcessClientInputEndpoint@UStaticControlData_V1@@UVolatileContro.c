/*
 * XREFs of ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140083710
 * Callers:
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x140083780 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_140083780.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x140083790 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_140083790.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x1400837B0 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_1400837B0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x1400837D0 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_1400837D0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x1400837F0 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_1400837F0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x140083810 (-Release@-$CComObject@V-$CCrossProcessClientInputEndpoint@UStaticControlData_V1@@UV_ea_140083810.c)
 *     ?Release@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBOA@EAAKXZ @ 0x1400839C0 (-Release@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContr.c)
 *     ?Release@?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPI@EAAKXZ @ 0x1400839E0 (-Release@-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@U_ea_1400839E0.c)
 * Callees:
 *     ??0ModuleLockHelper@ATL@@QEAA@XZ @ 0x14003E4EC (--0ModuleLockHelper@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::Release(
        volatile int *a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 128);
  if ( !v2 )
  {
    ATL::ModuleLockHelper::ModuleLockHelper((ATL::ModuleLockHelper *)&v4);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
