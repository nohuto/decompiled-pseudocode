/*
 * XREFs of ?ReferenceModule@KLoader@@QEAAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x140136100
 * Callers:
 *     KLoaderReferenceModule @ 0x1400656D0 (KLoaderReferenceModule.c)
 *     ?KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1400DC674 (-KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUK.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?Dereference@DriverService@@QEAAXXZ @ 0x14014B484 (-Dereference@DriverService@@QEAAXXZ.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x14014B668 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1401675C0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x140168BA0 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 */

__int64 __fastcall KLoader::ReferenceModule(
        KLoader *this,
        const struct _KLOADER_REFERENCE_MODULE_CONFIG *a2,
        const struct _IRP *a3,
        struct KLOADER_MODULE_REFERENCE__ **a4)
{
  __int128 v4; // xmm0
  KLoader *v5; // rbx
  __int64 result; // rax
  struct KPushLockBase *v10; // r15
  unsigned int v11; // ebp
  _QWORD *PoolWithTag; // rax
  int v13; // edx
  _QWORD *v14; // r14
  struct KPushLockBase *v15; // r15
  struct KPushLockBase **v16; // rax
  struct KPushLockBase **Value; // rcx
  KLockThisExclusive v18; // [rsp+30h] [rbp-48h] BYREF
  struct KModule *v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = this;
  v4 = *(_OWORD *)((char *)a2 + 8);
  v5 = (KLoader *)qword_14011CB28;
  v19 = 0LL;
  *(_OWORD *)&v18.m_State = v4;
  result = KLoader::ReferenceKModule((KLoader *)qword_14011CB28, (struct _GUID *)&v18, &v19);
  if ( !(_DWORD)result )
  {
    v10 = (struct KPushLockBase *)v19;
    v11 = DriverService::Reference((struct KModule *)((char *)v19 + 48), a3 == 0LL);
    if ( v11 )
    {
      KLoader::DereferenceKModule(v5, (struct KModule *)v10);
      return v11;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x62694C4Eu);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        *((_OWORD *)PoolWithTag + 1) = 0LL;
        *PoolWithTag = v10;
        PoolWithTag[1] = *((_QWORD *)a2 + 3);
        KLockThisExclusive::KLockThisExclusive(&v18, v10 + 14);
        v15 = v10 + 15;
        v16 = (struct KPushLockBase **)(v14 + 2);
        Value = (struct KPushLockBase **)v15[1].m_Lock.Value;
        if ( *Value != v15 )
          __fastfail(3u);
        v14[3] = Value;
        *v16 = v15;
        *Value = (struct KPushLockBase *)v16;
        v15[1].m_Lock.Value = (unsigned __int64)v16;
        KLockHolder::~KLockHolder(&v18);
        result = 0LL;
        *a4 = (struct KLOADER_MODULE_REFERENCE__ *)v14;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v13,
            1,
            31,
            (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
        }
        DriverService::Dereference((DriverService *)&v10[6]);
        KLoader::DereferenceKModule(v5, (struct KModule *)v10);
        return 3221225626LL;
      }
    }
  }
  return result;
}
