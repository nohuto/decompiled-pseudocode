/*
 * XREFs of CreateKModule @ 0x140155974
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140155D78 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x140175A60 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x140099960 (--$-0$00X@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     GetModuleParameters @ 0x140155B00 (GetModuleParameters.c)
 *     ??0KModule@@QEAA@AEBU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140156560 (--0KModule@@QEAA@AEBU_GUID@@$$QEAV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     BuildServicePath @ 0x1401728D0 (BuildServicePath.c)
 */

__int64 __fastcall CreateKModule(__int64 a1, __int64 *a2)
{
  unsigned int ModuleParameters; // ebx
  PVOID PoolWithTag; // rax
  int v6; // edx
  __int64 v7; // rax
  PCUNICODE_STRING Source; // [rsp+30h] [rbp-18h] BYREF
  void *v10[2]; // [rsp+38h] [rbp-10h] BYREF

  Source = 0LL;
  ModuleParameters = GetModuleParameters(a1);
  if ( !ModuleParameters )
  {
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::unique_ptr<KnobCollection,KFreePool<KnobCollection>>(v10);
    ModuleParameters = BuildServicePath(Source);
    if ( !ModuleParameters )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x62694C4Eu);
      if ( PoolWithTag && (v7 = KModule::KModule(PoolWithTag, a1, v10)) != 0 )
      {
        *a2 = v7;
        ModuleParameters = 0;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            1,
            22,
            (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
        }
        ModuleParameters = -1073741670;
      }
    }
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(v10, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&Source, 0LL);
  return ModuleParameters;
}
