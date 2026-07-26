/*
 * XREFs of ?ReferenceBootCriticalDriver@DriverService@@QEAAXXZ @ 0x14014B818
 * Callers:
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall DriverService::ReferenceBootCriticalDriver(struct KPushLockBase *this)
{
  int v2; // eax
  char v3[4]; // [rsp+30h] [rbp-38h]
  KLockThisExclusive v4; // [rsp+40h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v4, this + 1);
  v2 = *(_DWORD *)&this[2].m_Lock.0 + 1;
  *(_DWORD *)&this[2].m_Lock.0 = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xEu,
      (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
      (char)this,
      *(_DWORD *)v3);
  }
  KLockHolder::~KLockHolder(&v4);
}
