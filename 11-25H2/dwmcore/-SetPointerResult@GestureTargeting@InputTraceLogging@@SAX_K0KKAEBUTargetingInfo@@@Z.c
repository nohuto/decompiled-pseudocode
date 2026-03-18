/*
 * XREFs of ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x18017F840
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@335543444443@Z @ 0x180001A30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U1@U1@U3@U3@U2.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA764 (-InteractionFurtherProcessingForInput@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA780 (-InteractionInputTransparency@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA7C4 (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x1801CA924 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z @ 0x1801CA974 (-InteractionHoverSource@InputTraceLogging@@CA_NPEBVCInteraction@@@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1801CAD60 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::SetPointerResult(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        const struct TargetingInfo *a5)
{
  const struct CInteraction *v9; // rbx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  const char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  const char *v18; // rax
  int v19; // ecx
  int v20; // [rsp+CCh] [rbp-6Ch] BYREF
  int v21; // [rsp+D0h] [rbp-68h] BYREF
  void *InputHandle; // [rsp+D8h] [rbp-60h]
  __int64 v23; // [rsp+E0h] [rbp-58h]
  const char *v24; // [rsp+E8h] [rbp-50h] BYREF
  const char *v25; // [rsp+F0h] [rbp-48h] BYREF
  const struct CInteraction *v26; // [rsp+F8h] [rbp-40h] BYREF
  const struct CInteraction *v27; // [rsp+100h] [rbp-38h] BYREF
  const char *v28; // [rsp+108h] [rbp-30h] BYREF
  __int64 v29; // [rsp+110h] [rbp-28h] BYREF
  __int64 v30; // [rsp+118h] [rbp-20h] BYREF

  v9 = (const struct CInteraction *)((*((_QWORD *)a5 + 1) - 72LL) & -(__int64)(*((_QWORD *)a5 + 1) != 0LL));
  v10 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v10 > 4u
    && (*((_DWORD *)v10 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x800LL) == *((_QWORD *)v10 + 3) )
  {
    if ( v9 )
      v11 = *((_QWORD *)v9 + 214);
    else
      v11 = 0LL;
    v23 = v11;
    InputTraceLogging::InteractionHoverSource(v9);
    InputTraceLogging::InteractionInputTransparency(v9);
    InputTraceLogging::InteractionFurtherProcessingForInput(v9);
    if ( v9 )
      InputHandle = CInteraction::GetInputHandle(v9);
    else
      InputHandle = v12;
    v24 = InputTraceLogging::InteractionDefaultToString(v9);
    v13 = InputTraceLogging::InteractionSourceTypeToString(v9);
    v17 = *(_DWORD *)a5;
    v25 = v13;
    v26 = v9;
    v27 = v9;
    if ( v17 )
    {
      v19 = v17 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
          v18 = "Release";
        else
          v18 = "UNKNOWN";
      }
      else
      {
        v18 = "Drop";
        if ( *((_QWORD *)a5 + 1) != v14 )
          v18 = "Send";
      }
    }
    else
    {
      v18 = "Buffer";
    }
    v28 = v18;
    v20 = a4;
    v21 = a3;
    v29 = a2;
    v30 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v15,
      (__int64)&unk_1803D60AD,
      v15,
      v16,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v21,
      (__int64)&v20,
      &v28,
      (__int64)&v27,
      (__int64)&v26,
      &v25,
      &v24);
  }
}
