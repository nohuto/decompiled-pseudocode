/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14016AB10
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x14016AA10 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1401405D0 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x14014E2D4 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014E35C (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

struct NDIS_BIND_FILTER_DRIVER **__fastcall ndisBindGetFilterDriver(
        struct NDIS_BIND_FILTER_DRIVER **a1,
        _GUID *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct NDIS_BIND_FILTER_DRIVER **v14; // rcx
  struct NDIS_BIND_FILTER_DRIVER **v16; // rcx
  struct NDIS_BIND_FILTER_DRIVER *v17; // rbx
  struct NDIS_BIND_FILTER_DRIVER *v18; // rcx
  __int64 v19; // rdi
  struct NDIS_BIND_FILTER_DRIVER *v20; // rax
  struct NDIS_BIND_FILTER_DRIVER *v21; // [rsp+20h] [rbp-48h] BYREF
  KLockHolder v22; // [rsp+28h] [rbp-40h] BYREF
  struct NDIS_BIND_FILTER_DRIVER *v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = qword_140127130;
  v22.m_Lock = (KPushLockBase *)qword_140127130;
  KeEnterCriticalRegion();
  v22.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v9 = qword_140127130;
  v22.m_State = Exclusive;
  v10 = 0LL;
  v11 = *(unsigned int *)(qword_140127130 + 28);
  while ( v10 != v11 )
  {
    if ( v10 >= *(unsigned int *)(v9 + 28) )
      __fastfail(5u);
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10);
    v21 = (struct NDIS_BIND_FILTER_DRIVER *)v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 64));
    v13 = *(_QWORD *)(v12 + 24) - *(_QWORD *)&a2->Data1;
    if ( !v13 )
      v13 = *(_QWORD *)(v12 + 32) - *(_QWORD *)a2->Data4;
    if ( !v13 )
    {
      if ( a3 && !ndisBindReadFilterDriverConfiguration(v21) )
      {
        v16 = &v21;
        goto LABEL_23;
      }
      v21 = 0LL;
      v14 = &v21;
      *a1 = (struct NDIS_BIND_FILTER_DRIVER *)v12;
LABEL_11:
      KRef<NDIS_BIND_FILTER_DRIVER>::unref(v14, v7, v8);
      ExReleasePushLockExclusiveEx(v22.m_Lock, 0LL);
      KeLeaveCriticalRegion();
      return a1;
    }
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v21, v7, v8);
    ++v10;
  }
  v23 = 0LL;
  if ( !KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(&v23) )
  {
    *a1 = 0LL;
    v14 = &v23;
    goto LABEL_11;
  }
  v17 = v23;
  v18 = v23;
  v23->Guid = *a2;
  if ( ndisBindReadFilterDriverConfiguration(v18)
    && (v19 = qword_140127130,
        Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
          (unsigned int *)(qword_140127130 + 24),
          (unsigned int)(*(_DWORD *)(qword_140127130 + 28) + 1))) )
  {
    *(_QWORD *)(*(_QWORD *)(v19 + 32) + 8LL * *(unsigned int *)(v19 + 28)) = v17;
    _InterlockedIncrement((volatile signed __int32 *)&v17[1].DriverReady);
    v20 = v23;
    v16 = &v23;
    ++*(_DWORD *)(v19 + 28);
    *a1 = v20;
    v23 = 0LL;
  }
  else
  {
    v16 = &v23;
LABEL_23:
    *a1 = 0LL;
  }
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(v16, v7, v8);
  KLockHolder::~KLockHolder(&v22);
  return a1;
}
