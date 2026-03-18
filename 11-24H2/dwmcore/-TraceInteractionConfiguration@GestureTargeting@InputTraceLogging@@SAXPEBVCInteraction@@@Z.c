/*
 * XREFs of ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x18009281C
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x180092400 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180194A88 (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1802026B8 (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x18025887C (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180092C54 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444@Z @ 0x180213CCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180213CCC.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(const struct CInteraction *a1)
{
  int v1; // esi
  int *v3; // r15
  int *v4; // r12
  int *v5; // r13
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  const struct _tlgProvider_t *v10; // rax
  int v11; // r9d
  int v12; // r8d
  int *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+C0h] [rbp-80h] BYREF
  int v19; // [rsp+C4h] [rbp-7Ch] BYREF
  int v20; // [rsp+C8h] [rbp-78h] BYREF
  int v21; // [rsp+CCh] [rbp-74h] BYREF
  int v22; // [rsp+D0h] [rbp-70h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  int v24; // [rsp+D8h] [rbp-68h] BYREF
  int v25; // [rsp+DCh] [rbp-64h] BYREF
  int v26; // [rsp+E0h] [rbp-60h] BYREF
  int v27; // [rsp+E4h] [rbp-5Ch] BYREF
  int v28; // [rsp+E8h] [rbp-58h] BYREF
  int v29; // [rsp+ECh] [rbp-54h] BYREF
  int v30; // [rsp+F0h] [rbp-50h] BYREF
  int v31; // [rsp+F4h] [rbp-4Ch] BYREF
  int v32; // [rsp+F8h] [rbp-48h] BYREF
  const struct CInteraction *v33; // [rsp+100h] [rbp-40h] BYREF
  int *v34; // [rsp+160h] [rbp+20h] BYREF
  int v35; // [rsp+168h] [rbp+28h] BYREF
  int v36; // [rsp+170h] [rbp+30h] BYREF
  int v37; // [rsp+178h] [rbp+38h] BYREF

  v1 = 0;
  if ( *((_DWORD *)a1 + 118) )
    v3 = (int *)*((_QWORD *)a1 + 56);
  else
    v3 = 0LL;
  if ( *((_DWORD *)a1 + 158) )
    v4 = (int *)*((_QWORD *)a1 + 76);
  else
    v4 = 0LL;
  if ( *((_DWORD *)a1 + 198) )
    v5 = (int *)*((_QWORD *)a1 + 96);
  else
    v5 = 0LL;
  if ( *((_DWORD *)a1 + 238) )
    v34 = (int *)*((_QWORD *)a1 + 116);
  else
    v34 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = (_DWORD *)((char *)a1 + 1636);
  v9 = 3LL;
  do
  {
    if ( *((_BYTE *)v8 - 4) )
    {
      v6 |= *v8 & v8[1];
      v7 |= v8[1];
    }
    v8 += 3;
    --v9;
  }
  while ( v9 );
  v10 = InputTraceLogging::Provider();
  v12 = (int)v10;
  if ( *(_DWORD *)v10 > 4u
    && (*((_DWORD *)v10 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x800LL) == *((_QWORD *)v10 + 3) )
  {
    v13 = v34;
    v14 = *((_DWORD *)a1 + 250);
    v22 = v7;
    v23 = v6;
    v24 = v14;
    if ( v34 )
    {
      LODWORD(v34) = v34[1];
      v35 = *v13;
      v15 = v13[2];
    }
    else
    {
      LODWORD(v34) = 0;
      v15 = 0;
      v35 = 0;
    }
    v25 = v15;
    v26 = *((_DWORD *)a1 + 238);
    if ( v5 )
    {
      v36 = v5[1];
      v37 = *v5;
      v16 = v5[2];
    }
    else
    {
      v36 = 0;
      v16 = 0;
      v37 = 0;
    }
    v27 = v16;
    v28 = *((_DWORD *)a1 + 198);
    if ( v4 )
    {
      v18 = v4[1];
      v19 = *v4;
      v17 = v4[2];
    }
    else
    {
      v18 = 0;
      v17 = 0;
      v19 = 0;
    }
    v29 = v17;
    v30 = *((_DWORD *)a1 + 158);
    if ( v3 )
    {
      v1 = v3[2];
      v20 = v3[1];
      v21 = *v3;
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    v32 = *((_DWORD *)a1 + 118);
    v31 = v1;
    v33 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1803CB674,
      v12,
      v11,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
}
