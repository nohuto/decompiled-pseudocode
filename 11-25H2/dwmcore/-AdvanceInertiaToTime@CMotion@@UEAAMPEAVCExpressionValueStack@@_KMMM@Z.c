/*
 * XREFs of ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1800F43B0
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1800F4020 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 * Callees:
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800F3FE8 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1800F4280 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x180226EC8 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::AdvanceInertiaToTime(
        CMotion *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6)
{
  bool v6; // zf
  float *v7; // rdi
  float v11; // xmm6_4
  double v12; // xmm0_8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const wchar_t *v17; // [rsp+60h] [rbp-68h] BYREF
  CMotion *v18; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v19[24]; // [rsp+70h] [rbp-58h] BYREF

  v6 = *((_QWORD *)this + 3) == 0LL;
  v7 = (float *)((char *)this + 52);
  *((float *)this + 22) = a4;
  v11 = 0.0;
  *((float *)this + 12) = fmaxf(a6, *((float *)this + 12));
  *((float *)this + 15) = a5;
  if ( v6 )
  {
    v12 = (*(double (__fastcall **)(CMotion *))(*(_QWORD *)this + 16LL))(this);
    v11 = *(float *)&v12;
    *v7 = (*(float (__fastcall **)(CMotion *))(*(_QWORD *)this + 32LL))(this);
  }
  if ( *((_QWORD *)this + 3) )
  {
    v11 = CMotion::AdvanceInertiaToTimeInertiaModifier(this, a2, a3);
    *v7 = *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 32LL))(
                       *((_QWORD *)this + 3),
                       v19)
                   + 8);
  }
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v17 = ScrollAxisToString(*((_DWORD *)this + 9));
    v18 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&unk_1803DA43D,
      v15,
      v16,
      (__int64)&v18,
      &v17);
  }
  return v11;
}
