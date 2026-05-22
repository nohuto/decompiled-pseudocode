/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031770
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x1800F3A70 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x1800F3A80 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180031388 (-DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180031A2C (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180031AC8 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x18003BAA4 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052600 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800995B4 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800996C4 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B5DC (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F3870 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  unsigned __int64 v5; // rcx
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rsi
  float *v12; // rax
  float *v13; // rax
  int v14; // edi
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  unsigned __int64 v17; // [rsp+20h] [rbp-39h] BYREF
  int v18; // [rsp+28h] [rbp-31h] BYREF
  int v19; // [rsp+30h] [rbp-29h] BYREF
  void *v20; // [rsp+38h] [rbp-21h] BYREF
  _OWORD v21[4]; // [rsp+40h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v18 = 0;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v18);
  if ( (v18 & *(_DWORD *)a2) == 0 && v18 )
    return 2147549443LL;
  v21[0] = 0LL;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 21) || *((_QWORD *)this + 11) || *((_QWORD *)this + 12) )
    goto LABEL_11;
  v5 = *((_QWORD *)this + 13) - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  if ( !v5 )
    v5 = *((_QWORD *)this + 14);
  if ( v5 )
  {
LABEL_11:
    InputTraceLogging::ISM::DeliverInput(a2);
    v7 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x100003B) != 0 )
    {
      if ( *((_QWORD *)this + 15) )
      {
        v8 = DWMInputTarget::AddDwmInputRoutingData(this, a2);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x148,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v8,
            v17);
          return v9;
        }
        v7 = *(_DWORD *)a2;
      }
      else
      {
        *(_QWORD *)((char *)a2 + 244) = 0LL;
        *(_QWORD *)((char *)a2 + 236) = 1065353216LL;
        *((_QWORD *)a2 + 32) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 276) = 1065353216LL;
        *((_DWORD *)a2 + 74) = 1065353216;
        *((_DWORD *)a2 + 63) = 0;
        *((_QWORD *)a2 + 33) = 0LL;
        *((_DWORD *)a2 + 68) = 0;
        *(_QWORD *)((char *)a2 + 284) = 0LL;
        *((_DWORD *)a2 + 73) = 0;
      }
    }
    if ( v7 == 0x4000 )
    {
      v10 = *((_QWORD *)this + 15);
      if ( v10 )
      {
        if ( !*(_BYTE *)(v10 + 480) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x172,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            v6);
        v11 = v10 + 48;
        *((_QWORD *)a2 + 4) = *(_QWORD *)(LegacyInputSinkData::GetCompositionInputQueue(v10 + 48, 1LL) + 8);
        LegacyInputSinkData::GetTransform(v11, v21);
        if ( *((_BYTE *)a2 + 60) )
        {
          v17 = _mm_unpacklo_ps(
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 11)),
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12))).m128_u64[0];
          v12 = (float *)CInputTransform::ScreenPointToRelative(&v19, &v17, v21);
          v17 = __PAIR64__((int)v12[1], (int)*v12);
          *(_QWORD *)((char *)a2 + 52) = v17;
        }
        if ( *((_BYTE *)a2 + 80) )
        {
          v17 = _mm_unpacklo_ps(
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
                  (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
          v13 = (float *)CInputTransform::ScreenPointToRelative(&v19, &v17, v21);
          v17 = __PAIR64__((int)v13[1], (int)*v13);
          *(_QWORD *)((char *)a2 + 52) = v17;
        }
      }
    }
    InputEventPayloadBuffer::InputEventPayloadBuffer(&v19, 5LL, a2);
    v14 = NonBamoInputDeliveryServer::DeliverInput((DWMInputTarget *)((char *)this + 80), v20, v19);
    InputETW::InputTarget::DeliverInputReport(a2);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x198,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)(unsigned int)v14,
        v17);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v20, v16);
      return (unsigned int)v14;
    }
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v20, v15);
  }
  return 0LL;
}
