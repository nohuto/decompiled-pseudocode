/*
 * XREFs of ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x140168BA0
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140136100 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x140135A50 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 *     CreateKModule @ 0x14014ACA4 (CreateKModule.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall KLoader::ReferenceKModule(KPushLockBase *this, struct _GUID *a2, struct KModule **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int KModule; // edi
  __int64 result; // rax
  KLoader **Value; // rcx
  int v12; // eax
  struct KModule *ModuleByGuidLocked; // [rsp+40h] [rbp-58h] BYREF
  KLockHolder v14; // [rsp+48h] [rbp-50h] BYREF
  struct _GUID v15; // [rsp+60h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Au,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      (__int64)a2);
  v14.m_Lock = this;
  KeEnterCriticalRegion();
  v14.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v14.m_State = Exclusive;
  ModuleByGuidLocked = KLoader::FindModuleByGuidLocked((KLoader *)this, a2, v6, v7);
  v8 = (__int64)ModuleByGuidLocked;
  if ( !ModuleByGuidLocked )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x1Bu,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
        (__int64)a2);
    v15 = *a2;
    KModule = CreateKModule((__int64)&v15, (__int64 *)&ModuleByGuidLocked);
    if ( KModule )
    {
      KLockHolder::~KLockHolder(&v14);
      return KModule;
    }
    Value = (KLoader **)this[2].m_Lock.Value;
    if ( *Value != (KLoader *)&this[1] )
      __fastfail(3u);
    v8 = (__int64)ModuleByGuidLocked;
    *(_QWORD *)ModuleByGuidLocked = this + 1;
    *(_QWORD *)(v8 + 8) = Value;
    *Value = (KLoader *)v8;
    this[2].m_Lock.Value = v8;
  }
  v12 = *(_DWORD *)(v8 + 16) + 1;
  *(_DWORD *)(v8 + 16) = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Cu,
      (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      v8,
      v12);
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = (struct KModule *)v8;
  return result;
}
