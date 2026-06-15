/*
 * XREFs of ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@UEAAKXZ @ 0x140083830
 * Callers:
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@W7EAAKXZ @ 0x1400838A0 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_1400838A0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBKI@EAAKXZ @ 0x1400838B0 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_1400838B0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLA@EAAKXZ @ 0x1400838D0 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_1400838D0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBLI@EAAKXZ @ 0x1400838F0 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_1400838F0.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBNI@EAAKXZ @ 0x140083910 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_140083910.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WBPA@EAAKXZ @ 0x140083930 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_140083930.c)
 *     ?Release@?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@WCAA@EAAKXZ @ 0x140083950 (-Release@-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@U_ea_140083950.c)
 * Callees:
 *     ??0ModuleLockHelper@ATL@@QEAA@XZ @ 0x14003E4EC (--0ModuleLockHelper@ATL@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::Release(
        volatile int *a1)
{
  unsigned int v2; // edi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 130);
  if ( !v2 )
  {
    ATL::ModuleLockHelper::ModuleLockHelper((ATL::ModuleLockHelper *)&v4);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
