/*
 * XREFs of ??$CreateCrossProcessEndpointInstance@VCCrossProcessClientOutputEndpoint@@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJU_GUID@@AEBU0@PEAPEAX@Z @ 0x140080470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??1?$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140056A2C (--1-$CComPtrBase@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComObject@V?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@@ATL@@QEAA@PEAX@Z @ 0x1400807DC (--0-$CComObject@V-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateCrossProcessEndpointInstance<CCrossProcessClientOutputEndpoint,StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        _OWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  int v7; // r8d
  _OWORD *v8; // rax
  _OWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _OWORD *v16; // [rsp+48h] [rbp+20h] BYREF

  v6 = (void *)AERTGetDLLRTHeap();
  v8 = AERTAllocate(0x248uLL, v6, v7);
  v16 = v8;
  if ( v8 )
    v9 = (_OWORD *)ATL::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>::CComObject<CCrossProcessClientOutputEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>>(v8);
  else
    v9 = 0LL;
  v16 = v9;
  if ( !v9 )
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 20LL;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  v9[14] = *a1;
  v10 = (**(__int64 (__fastcall ***)(_OWORD *, __int64, __int64))v9)(v9, a2, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 23LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
      (const char *)v12);
    goto LABEL_10;
  }
  v11 = 0;
LABEL_10:
  ATL::CComPtrBase<CAudioDeviceGraph>::~CComPtrBase<CAudioDeviceGraph>((__int64 *)&v16);
  return v11;
}
