/*
 * XREFs of ?SnapWindow_@CSnapComponentTelemetry@@QEBAXPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x18022D9FC
 * Callers:
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1800CCD20 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1801C4710 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindow_(
        CSnapComponentTelemetry *this,
        HWND a2,
        const struct tagRECT *a3,
        int a4)
{
  const struct _tlgProvider_t *v7; // rax
  unsigned int v8; // ecx
  float top; // xmm1_4
  __m128i v10; // xmm0
  int v11; // ecx
  unsigned __int32 v12; // [rsp+50h] [rbp-20h] BYREF
  float v13; // [rsp+54h] [rbp-1Ch] BYREF
  float v14; // [rsp+58h] [rbp-18h] BYREF
  float left; // [rsp+5Ch] [rbp-14h] BYREF
  HWND v16[2]; // [rsp+60h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v17; // [rsp+80h] [rbp+10h] BYREF

  v17 = this;
  v7 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = a3->bottom - a3->top;
    top = (float)a3->top;
    LODWORD(v17) = a4;
    v16[0] = a2;
    v10 = _mm_cvtsi32_si128(v8);
    v11 = a3->right - a3->left;
    v14 = top;
    v12 = _mm_cvtepi32_ps(v10).m128_u32[0];
    v13 = (float)v11;
    left = (float)a3->left;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_180812E6B,
      0LL,
      0LL,
      (__int64)v16,
      (__int64)&left,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v17);
  }
}
