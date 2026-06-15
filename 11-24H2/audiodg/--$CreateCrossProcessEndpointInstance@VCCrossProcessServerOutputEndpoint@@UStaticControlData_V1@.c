/*
 * XREFs of ??$CreateCrossProcessEndpointInstance@VCCrossProcessServerOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x1400536F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0?$CComObject@V?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400537F0 (--0-$CComObject@V-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     ??1?$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056A2C (--1-$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateCrossProcessEndpointInstance<CCrossProcessServerOutputEndpoint,StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        _OWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  int v7; // r8d
  _OWORD *v8; // rax
  _OWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _OWORD *v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = (void *)AERTGetDLLRTHeap();
  v8 = AERTAllocate(0x268uLL, v6, v7);
  v14 = v8;
  if ( v8 )
    v9 = (_OWORD *)ATL::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::CComObject<CCrossProcessServerOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(v8);
  else
    v9 = 0LL;
  v14 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    v9[14] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_OWORD *, __int64, __int64))v9)(v9, a2, a3);
    v11 = v10;
    if ( v10 >= 0 )
    {
      ATL::CComPtrBase<CAudioDeviceGraph>::~CComPtrBase<CAudioDeviceGraph>(&v14);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
        (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v9 + 16LL))(v9);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
