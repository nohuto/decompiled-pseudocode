/*
 * XREFs of ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x1800494CC
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180054E80 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800573D4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004B0B8 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005BA8C (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
    ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper((ContentDeliveryManager::Background::CorrelationVectorWrapper *)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, v3 + 4, v3);
  return a1;
}
