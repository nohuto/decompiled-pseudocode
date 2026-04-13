/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180029330
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18003F3D0 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18003F410 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x18003F450 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18004B350 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800573D4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?do_grouping@?$numpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18005D0C0 (-do_grouping@-$numpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2.c)
 *     ?Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBD@Z @ 0x180069C14 (-Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@GU-$char_tr.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x18003E0D4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, void *a2)
{
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  std::string::assign(a1, a2);
  return a1;
}
