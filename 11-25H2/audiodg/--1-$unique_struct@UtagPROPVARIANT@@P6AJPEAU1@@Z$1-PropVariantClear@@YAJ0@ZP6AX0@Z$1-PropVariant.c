/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x140048F58
 * Callers:
 *     _GetModuleName_::_1_::dtor$1 @ 0x140092E00 (_GetModuleName_--_1_--dtor$1.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::RegisterPropertyChangeNotification_::_1_::dtor$0 @ 0x140092FD6 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--RegisterPropertyChangeNotification_--_1_.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x140093228 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 *     _GetEffectPackDevNodeId_::_1_::dtor$1 @ 0x1400935CE (_GetEffectPackDevNodeId_--_1_--dtor$1.c)
 *     _PublishApoTelemetry_::_1_::dtor$44 @ 0x140094FB5 (_PublishApoTelemetry_--_1_--dtor$44.c)
 *     _PublishApoTelemetry_::_1_::dtor$45 @ 0x140094FC7 (_PublishApoTelemetry_--_1_--dtor$45.c)
 *     _PublishApoTelemetry_::_1_::dtor$46 @ 0x140094FD9 (_PublishApoTelemetry_--_1_--dtor$46.c)
 *     _PublishApoTelemetry_::_1_::dtor$47 @ 0x140094FEB (_PublishApoTelemetry_--_1_--dtor$47.c)
 *     _PublishApoTelemetry_::_1_::dtor$48 @ 0x140094FFD (_PublishApoTelemetry_--_1_--dtor$48.c)
 *     _PublishApoTelemetry_::_1_::dtor$49 @ 0x14009500F (_PublishApoTelemetry_--_1_--dtor$49.c)
 *     _PublishApoTelemetry_::_1_::dtor$50 @ 0x140095021 (_PublishApoTelemetry_--_1_--dtor$50.c)
 *     _PublishApoTelemetry_::_1_::dtor$51 @ 0x140095033 (_PublishApoTelemetry_--_1_--dtor$51.c)
 *     _PublishApoTelemetry_::_1_::dtor$52 @ 0x140095045 (_PublishApoTelemetry_--_1_--dtor$52.c)
 *     _PublishApoTelemetry_::_1_::dtor$53 @ 0x140095057 (_PublishApoTelemetry_--_1_--dtor$53.c)
 *     _PublishApoTelemetry_::_1_::dtor$54 @ 0x140095069 (_PublishApoTelemetry_--_1_--dtor$54.c)
 *     _PublishApoTelemetry_::_1_::dtor$55 @ 0x14009507B (_PublishApoTelemetry_--_1_--dtor$55.c)
 *     _PublishApoTelemetry_::_1_::dtor$56 @ 0x14009508D (_PublishApoTelemetry_--_1_--dtor$56.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
