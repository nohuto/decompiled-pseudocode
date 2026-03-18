/*
 * XREFs of ?CreateInputMessage@CMoveEvent@CMouseProcessor@@UEBAPEAUMouseInputMessage@2@_KAEAVCInputDest@@AEBUInputDeliveryContext@2@@Z @ 0x14021C470
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021B750 (--0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDelivery.c)
 */

struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CMoveEvent::CreateInputMessage(
        CMouseProcessor::CMoveEvent *this,
        __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  CMouseProcessor::MouseInputMessage *v8; // rax
  CMouseProcessor::MouseInputMessage *v9; // rbx

  v8 = (CMouseProcessor::MouseInputMessage *)Win32AllocPoolZInitImpl(256LL, 0x180uLL, 0x504D7270u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  CMouseProcessor::MouseInputMessage::MouseInputMessage(v8, a2, this, a3, a4);
  *((_QWORD *)v9 + 45) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)v9 + 46) = *((_QWORD *)this + 1);
  *((_DWORD *)v9 + 94) = *((_DWORD *)this + 4);
  *((_QWORD *)v9 + 45) = &CMouseProcessor::CMoveEvent::`vftable';
  *((_QWORD *)v9 + 46) = (char *)v9 + 176;
  return v9;
}
