/*
 * XREFs of ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x180226EC8
 * Callers:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1800F43B0 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 * Callees:
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800F3FE8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x18022FDD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::AdvanceInertiaToTimeInertiaModifier(
        CMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  double v8; // xmm0_8
  float v9; // xmm0_4
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v16; // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+5Ch] [rbp-25h] BYREF
  int v18; // [rsp+60h] [rbp-21h] BYREF
  int v19; // [rsp+64h] [rbp-1Dh] BYREF
  const wchar_t *v20; // [rsp+68h] [rbp-19h] BYREF
  CMotion *v21; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp+Fh] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1)) )
  {
    if ( *((_DWORD *)this + 24) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    if ( *((float *)this + 12) > *(float *)(*((_QWORD *)this + 1) + 96LL) )
    {
      v9 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 8LL))(this);
      if ( v9 != 0.0 )
        *(float *)(*((_QWORD *)this + 1) + 32LL) = v9 + *(float *)(*((_QWORD *)this + 1) + 32LL);
    }
  }
  v8 = (*(double (__fastcall **)(_QWORD, __int64, struct CExpressionValueStack *, __int64))(**((_QWORD **)this + 3)
                                                                                          + 16LL))(
         *((_QWORD *)this + 3),
         v6,
         a2,
         a3);
  if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 2LL) )
  {
    v16 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                       *((_QWORD *)this + 3),
                       v22);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), v23);
    v11 = *((_DWORD *)this + 9);
    v17 = *(_DWORD *)(v10 + 8);
    v18 = *((_DWORD *)this + 12);
    v19 = LODWORD(v8);
    v20 = ScrollAxisToString(v11);
    v21 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1803DA38C,
      v13,
      v14,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  return *(float *)&v8;
}
