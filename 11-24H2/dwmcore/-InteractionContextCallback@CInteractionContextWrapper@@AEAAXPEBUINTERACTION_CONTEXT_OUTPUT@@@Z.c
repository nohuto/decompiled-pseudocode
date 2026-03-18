/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801257B0
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18021E100 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801259D4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801263A8 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x180126680 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18012B45C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  int v11; // eax
  int v12; // [rsp+80h] [rbp-80h] BYREF
  int v13; // [rsp+84h] [rbp-7Ch] BYREF
  int v14; // [rsp+88h] [rbp-78h] BYREF
  int v15; // [rsp+8Ch] [rbp-74h] BYREF
  int v16; // [rsp+90h] [rbp-70h] BYREF
  int v17; // [rsp+94h] [rbp-6Ch] BYREF
  int v18; // [rsp+98h] [rbp-68h] BYREF
  int v19; // [rsp+9Ch] [rbp-64h] BYREF
  int v20; // [rsp+A0h] [rbp-60h] BYREF
  int v21; // [rsp+A4h] [rbp-5Ch] BYREF
  CInteractionContextWrapper *v22; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-40h]
  __int128 v25; // [rsp+D0h] [rbp-30h]
  __int128 v26; // [rsp+E0h] [rbp-20h]
  __int128 v27; // [rsp+F0h] [rbp-10h]

  *((_BYTE *)this + 80) |= 1u;
  v3 = *((_OWORD *)a2 + 1);
  v23 = *(_OWORD *)a2;
  v4 = *((_OWORD *)a2 + 2);
  v24 = v3;
  v5 = *((_OWORD *)a2 + 3);
  v25 = v4;
  v6 = *((_OWORD *)a2 + 4);
  v26 = v5;
  v27 = v6;
  CInteractionContextWrapper::_UpdateInteractionOutput(
    this,
    (const struct INTERACTION_CONTEXT_OUTPUT *)&v23,
    (CInteractionContextWrapper *)((char *)this + 24));
  if ( (*(unsigned __int8 (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 88LL))(this) )
    CInteractionContextWrapper::AddBufferedOutput(
      this,
      *((_DWORD *)this + 53),
      *((_DWORD *)this + 55),
      *((_QWORD *)this + 28),
      (const struct INTERACTION_CONTEXT_OUTPUT *)&v23);
  v10 = v23;
  if ( (_DWORD)v23 == 1 )
  {
    *((_BYTE *)this + 84) = 1;
    *((_BYTE *)this + 148) = 1;
    if ( (unsigned int)dword_1803F8D18 <= 4 )
      return;
    if ( (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
    {
      v15 = *((_DWORD *)this + 11);
      v16 = HIDWORD(v27);
      v17 = v26;
      v18 = HIDWORD(v25);
      v19 = DWORD2(v25);
      v20 = v27;
      v21 = HIDWORD(v26);
      v12 = HIDWORD(v24);
      v13 = DWORD2(v24);
      v14 = DWORD1(v24);
      v22 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned int)&unk_1803CF858,
        v8,
        v9,
        (__int64)&v22,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
  if ( (unsigned int)dword_1803F8D18 > 4 && (byte_1803F8D28 & 2) != 0 && (qword_1803F8D30 & 2) == qword_1803F8D30 )
  {
    v11 = *((_BYTE *)this + 80) & 1;
    v12 = v10;
    v14 = v11;
    v13 = DWORD1(v23);
    v22 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      (unsigned int)&unk_1803CF7D2,
      v8,
      v9,
      (__int64)&v22,
      (__int64)&v12,
      (__int64)&v13,
      (__int64)&v14);
  }
}
