/*
 * XREFs of ?Reference@DriverService@@QEAAJ_N@Z @ 0x14014B668
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140136100 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1400DCF98 (-LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?Close@DriverService@@QEAAXXZ @ 0x14014B454 (-Close@DriverService@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall DriverService::Reference(struct KPushLockBase *this, char a2)
{
  int v4; // edx
  unsigned int Driver; // ebx
  int v6; // edx
  unsigned __int64 Value; // rax
  int v8; // edx
  int v9; // ecx
  KLockHolder v11; // [rsp+40h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v11, this + 1);
  if ( this[2].m_Lock.0 )
    goto LABEL_17;
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        1,
        10,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids);
    }
    Driver = -1073741808;
    goto LABEL_20;
  }
  if ( this[3].m_Lock.Value )
    NT_ASSERT("m_driverObject == nullptr");
  Driver = LoadDriver((struct _UNICODE_STRING *)this->m_Lock.Value);
  Value = this[3].m_Lock.Value;
  if ( Driver )
  {
    if ( Value )
      DriverService::Close((void **)this);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        1,
        11,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
        Driver);
    }
    goto LABEL_20;
  }
  if ( Value )
  {
LABEL_17:
    v9 = *(_DWORD *)&this[2].m_Lock.0 + 1;
    *(_DWORD *)&this[2].m_Lock.0 = v9;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
        (char)this,
        v9);
    Driver = 0;
  }
  else
  {
    DriverService::Close((void **)this);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        1,
        12,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids);
    }
    Driver = -1073741637;
  }
LABEL_20:
  KLockHolder::~KLockHolder(&v11);
  return Driver;
}
