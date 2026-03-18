/*
 * XREFs of ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430
 * Callers:
 *     ?DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z @ 0x14006A918 (-DeBoostIfTime@CLastWokenThread@@QEAAX_J@Z.c)
 *     ?Clear@LastWokenThread@@YAXXZ @ 0x14006ADA0 (-Clear@LastWokenThread@@YAXXZ.c)
 *     ?_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z @ 0x14006B2D8 (-_SetForInput@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x14006B334 (-_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110E88 (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 * Callees:
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 */

__int64 __fastcall ForegroundBoost::SetForegroundPriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rcx

  IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
  v7 = *(_QWORD *)(a1 + 464);
  if ( IsEnabledDeviceUsageNoInline )
    return ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority(v7, a2, a3);
  else
    return ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old(v7, a1, a2, a3);
}
