/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x140048C58
 * Callers:
 *     _GetModuleName_::_1_::dtor$1 @ 0x140092862 (_GetModuleName_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification_::_1_::dtor$0 @ 0x140092A38 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RegisterPropertyChangeNotification_--_1_.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x140092C88 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 *     _GetEffectPackDevNodeId_::_1_::dtor$1 @ 0x14009302E (_GetEffectPackDevNodeId_--_1_--dtor$1.c)
 *     _PublishApoTelemetry_::_1_::dtor$44 @ 0x140094A27 (_PublishApoTelemetry_--_1_--dtor$44.c)
 *     _PublishApoTelemetry_::_1_::dtor$45 @ 0x140094A39 (_PublishApoTelemetry_--_1_--dtor$45.c)
 *     _PublishApoTelemetry_::_1_::dtor$46 @ 0x140094A4B (_PublishApoTelemetry_--_1_--dtor$46.c)
 *     _PublishApoTelemetry_::_1_::dtor$47 @ 0x140094A5D (_PublishApoTelemetry_--_1_--dtor$47.c)
 *     _PublishApoTelemetry_::_1_::dtor$48 @ 0x140094A6F (_PublishApoTelemetry_--_1_--dtor$48.c)
 *     _PublishApoTelemetry_::_1_::dtor$49 @ 0x140094A81 (_PublishApoTelemetry_--_1_--dtor$49.c)
 *     _PublishApoTelemetry_::_1_::dtor$50 @ 0x140094A93 (_PublishApoTelemetry_--_1_--dtor$50.c)
 *     _PublishApoTelemetry_::_1_::dtor$51 @ 0x140094AA5 (_PublishApoTelemetry_--_1_--dtor$51.c)
 *     _PublishApoTelemetry_::_1_::dtor$52 @ 0x140094AB7 (_PublishApoTelemetry_--_1_--dtor$52.c)
 *     _PublishApoTelemetry_::_1_::dtor$53 @ 0x140094AC9 (_PublishApoTelemetry_--_1_--dtor$53.c)
 *     _PublishApoTelemetry_::_1_::dtor$54 @ 0x140094ADB (_PublishApoTelemetry_--_1_--dtor$54.c)
 *     _PublishApoTelemetry_::_1_::dtor$55 @ 0x140094AED (_PublishApoTelemetry_--_1_--dtor$55.c)
 *     _PublishApoTelemetry_::_1_::dtor$56 @ 0x140094AFF (_PublishApoTelemetry_--_1_--dtor$56.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
