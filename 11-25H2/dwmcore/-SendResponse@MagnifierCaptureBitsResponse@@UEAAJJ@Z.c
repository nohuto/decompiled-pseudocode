/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18021A370
 * Callers:
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18021A2A0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800E77DC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x180219A0C (McTemplateU0xxq_EventWriteTransfer.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2)
{
  CChannelContext *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10 = 17;
  v11 = 0LL;
  v12 = 0LL;
  v4 = (CChannelContext *)*((_QWORD *)this + 5);
  DWORD1(v11) = a2;
  v5 = CChannelContext::PostMessageToChannel(v4, (const struct MIL_MESSAGE *)&v10);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x7Bu, 0LL);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    LODWORD(v9) = a2;
    McTemplateU0xxq_EventWriteTransfer(
      v6,
      &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 247) + 2720LL),
      *((_QWORD *)this + 248),
      v9);
  }
  return v7;
}
