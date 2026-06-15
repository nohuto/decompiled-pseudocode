/*
 * XREFs of privateCreateSpatialCrossProcessEndpoint @ 0x14008C420
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14008C550 (CreateSpatialCrossProcessEndpointRT.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140088950 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400889E4 (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall privateCreateSpatialCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  CSpatialCrossProcessClientOutputEndpoint *v7; // rdi
  __int64 v8; // rax
  void *v9; // rax
  int v10; // r8d
  CSpatialCrossProcessServerInputEndpoint *v11; // rax
  CSpatialCrossProcessServerInputEndpoint *v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  int v15; // r8d
  CSpatialCrossProcessClientOutputEndpoint *v16; // rax

  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 - *a1;
  if ( *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 == *a1 )
    v8 = *(_QWORD *)GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data4 - a1[1];
  if ( v8 )
  {
    v13 = *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 - *a1;
    if ( *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 == *a1 )
      v13 = *(_QWORD *)GUID_9371e7ff_df2d_4962_9585_40424d054550.Data4 - a1[1];
    if ( v13 )
    {
      v6 = -2147024846;
      goto LABEL_21;
    }
    v14 = (void *)AERTGetDLLRTHeap();
    v16 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate(0x5D8uLL, v14, v15);
    if ( v16 )
      v7 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v16);
    else
      v7 = 0LL;
    if ( !v7 )
    {
LABEL_10:
      v6 = -2147024882;
LABEL_21:
      SpatialCPTraceLoggingErrorHelper("privateCreateSpatialCrossProcessEndpoint", 0x66u, v6);
      return v6;
    }
    (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v9 = (void *)AERTGetDLLRTHeap();
    v11 = (CSpatialCrossProcessServerInputEndpoint *)AERTAllocate(0x5F8uLL, v9, v10);
    if ( v11 )
      v12 = ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(v11);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v7 = v12;
      (*(void (__fastcall **)(CSpatialCrossProcessServerInputEndpoint *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    if ( !v7 )
      goto LABEL_10;
  }
  *(_OWORD *)((char *)v7 + 792) = *a2;
  *a4 = (char *)v7 + 8;
  return v6;
}
