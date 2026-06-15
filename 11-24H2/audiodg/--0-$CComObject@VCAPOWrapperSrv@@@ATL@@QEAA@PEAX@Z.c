/*
 * XREFs of ??0?$CComObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x140005CCC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140005B90 (-CreateInstance@-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ??0CAPOWrapperSrv@@QEAA@XZ @ 0x140005D28 (--0CAPOWrapperSrv@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CAPOWrapperSrv *__fastcall ATL::CComObject<CAPOWrapperSrv>::CComObject<CAPOWrapperSrv>(CAPOWrapperSrv *a1)
{
  CAPOWrapperSrv::CAPOWrapperSrv(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)a1 + 3) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
