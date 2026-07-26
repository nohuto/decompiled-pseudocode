/*
 * XREFs of ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8
 * Callers:
 *     KLoaderRegisterModule @ 0x1400DC8B0 (KLoaderRegisterModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1400658F0 (WPP_RECORDER_SF__guid_d.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14009138C (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x140135A50 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     CreateKModule @ 0x14014ACA4 (CreateKModule.c)
 *     ?Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z @ 0x14014B51C (-Open@DriverService@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ReferenceBootCriticalDriver@DriverService@@QEAAXXZ @ 0x14014B818 (-ReferenceBootCriticalDriver@DriverService@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1401675C0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x140167720 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall KLoader::RegisterModule(
        KLoader *this,
        struct _DRIVER_OBJECT *a2,
        const struct _UNICODE_STRING *a3,
        void *a4,
        const struct _KLOADER_MODULE_CHARACTERISTICS *a5)
{
  const struct _KLOADER_MODULE_CHARACTERISTICS *v5; // r13
  struct KPushLockBase *v6; // r14
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // r9
  struct KModule *ModuleByGuidLocked; // rax
  struct KModule *v12; // rsi
  const struct _KLOADER_MODULE_CHARACTERISTICS *v13; // r15
  unsigned int v14; // esi
  unsigned int KModule; // eax
  struct KPushLockBase **Value; // rcx
  void **v17; // rax
  const struct _KLOADER_MODULE_CHARACTERISTICS *v18; // rdi
  unsigned int v19; // ebx
  const struct _KLOADER_MODULE_CHARACTERISTICS *v20; // [rsp+48h] [rbp-41h]
  struct KModule *v21; // [rsp+50h] [rbp-39h]
  struct KModule *v22; // [rsp+58h] [rbp-31h]
  __int128 v23; // [rsp+68h] [rbp-21h] BYREF
  KLockThisExclusive v24; // [rsp+78h] [rbp-11h] BYREF
  const struct _KLOADER_MODULE_CHARACTERISTICS *v25; // [rsp+E8h] [rbp+5Fh]
  struct _DRIVER_OBJECT *v26; // [rsp+F0h] [rbp+67h]
  const struct _KLOADER_MODULE_CHARACTERISTICS *v27; // [rsp+F8h] [rbp+6Fh] BYREF
  void *v28; // [rsp+100h] [rbp+77h]

  v28 = a4;
  v27 = (const struct _KLOADER_MODULE_CHARACTERISTICS *)a3;
  v26 = a2;
  v5 = a5;
  v6 = qword_14011CB28;
  if ( *(_DWORD *)a5 < 0x30u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        10,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        *(_DWORD *)a5);
    }
    return 3221225476LL;
  }
  if ( !*((_WORD *)a5 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 11;
LABEL_11:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        1,
        v8,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( !*((_QWORD *)a5 + 5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 12;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
  KLockThisExclusive::KLockThisExclusive(&v24, qword_14011CB28);
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked((KLoader *)v6, (const struct _GUID *)((char *)v5 + 4), v9, v10);
  v27 = ModuleByGuidLocked;
  v12 = ModuleByGuidLocked;
  *(_QWORD *)&v23 = ModuleByGuidLocked;
  v13 = ModuleByGuidLocked;
  v25 = ModuleByGuidLocked;
  a5 = ModuleByGuidLocked;
  v20 = ModuleByGuidLocked;
  v21 = ModuleByGuidLocked;
  v22 = ModuleByGuidLocked;
  if ( !ModuleByGuidLocked )
  {
    if ( ndisKLoaderAreBootDriversLoaded )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
          (__int64)v5 + 4);
      v14 = -1073741637;
LABEL_23:
      KLockHolder::~KLockHolder(&v24);
      return v14;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        (__int64)v5 + 4);
    v23 = *(_OWORD *)((char *)v5 + 4);
    KModule = CreateKModule((__int64)&v23, (__int64 *)&v27);
    v14 = KModule;
    if ( KModule )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xFu,
          (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
          (__int64)v5 + 4,
          KModule);
      goto LABEL_23;
    }
    Value = (struct KPushLockBase **)v6[2].m_Lock.Value;
    if ( *Value != &v6[1] )
      __fastfail(3u);
    v12 = v27;
    v13 = v27;
    v25 = v27;
    a5 = v27;
    v20 = v27;
    *(_QWORD *)v27 = v6 + 1;
    *((_QWORD *)v13 + 1) = Value;
    *Value = (struct KPushLockBase *)v13;
    v6[2].m_Lock.Value = (unsigned __int64)v13;
    ModuleByGuidLocked = v13;
    *(_QWORD *)&v23 = v13;
    *((_BYTE *)v13 + 136) = 1;
    v21 = v13;
    v22 = v13;
  }
  ++*((_DWORD *)ModuleByGuidLocked + 4);
  KLockHolder::~KLockHolder(&v24);
  v17 = (void **)Rtl::DuplicateUnicodeString(&v27, (char *)v5 + 24, 1651067982LL);
  wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=((void **)v13 + 5, v17);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&v27, 0LL);
  if ( *((_QWORD *)v25 + 5) )
  {
    v18 = a5;
    v19 = DriverService::Open(
            (const struct _KLOADER_MODULE_CHARACTERISTICS *)((char *)v13 + 48),
            v26,
            (const struct _UNICODE_STRING *)((char *)v5 + 24));
    if ( v19 )
    {
      KLoader::DereferenceKModule((KLoader *)v6, v12);
      return v19;
    }
    else
    {
      *((_QWORD *)v20 + 12) = v28;
      *((_QWORD *)v21 + 13) = *((_QWORD *)v5 + 5);
      if ( *((_BYTE *)v22 + 136) )
      {
        DriverService::ReferenceBootCriticalDriver((const struct _KLOADER_MODULE_CHARACTERISTICS *)((char *)v18 + 48));
        KLockThisExclusive::KLockThisExclusive(&v24, v6);
        ++*(_DWORD *)(v23 + 16);
        KLockHolder::~KLockHolder(&v24);
      }
      KLoader::DereferenceKModule((KLoader *)v6, v12);
      return 0LL;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        (__int64)v5 + 4);
    return 3221225626LL;
  }
}
