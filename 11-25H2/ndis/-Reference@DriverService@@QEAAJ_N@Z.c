/*
 * XREFs of ?Reference@DriverService@@QEAAJ_N@Z @ 0x140156338
 * Callers:
 *     ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140141150 (-ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MO.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1400E41A8 (-LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?Close@DriverService@@QEAAXXZ @ 0x140156124 (-Close@DriverService@@QEAAXXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall DriverService::Reference(struct KPushLockBase *this, char a2)
{
  int v4; // edx
  unsigned int Driver; // ebx
  unsigned __int64 Value; // rax
  int v7; // edx
  int v8; // ecx
  KLockHolder v10; // [rsp+40h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v10, this + 1);
  if ( this[2].m_Lock.0 )
    goto LABEL_17;
  if ( !a2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
        Driver);
    goto LABEL_20;
  }
  if ( Value )
  {
LABEL_17:
    v8 = *(_DWORD *)&this[2].m_Lock.0 + 1;
    *(_DWORD *)&this[2].m_Lock.0 = v8;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids,
        (char)this,
        v8);
    Driver = 0;
  }
  else
  {
    DriverService::Close((void **)this);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        1,
        12,
        (struct _GUID *)&WPP_ab835b9d52e13f34949e286b28d58b38_Traceguids);
    }
    Driver = -1073741637;
  }
LABEL_20:
  KLockHolder::~KLockHolder(&v10);
  return Driver;
}
