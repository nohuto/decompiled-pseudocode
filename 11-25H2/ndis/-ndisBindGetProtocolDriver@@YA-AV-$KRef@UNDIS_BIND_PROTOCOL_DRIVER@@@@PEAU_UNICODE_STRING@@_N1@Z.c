/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14016A440
 * Callers:
 *     NdisRegisterProtocol @ 0x1400BFF60 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x14016A290 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x14014E318 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x14016B530 (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140171E40 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x140174ED0 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 */

struct NDIS_BIND_PROTOCOL_DRIVER **__fastcall ndisBindGetProtocolDriver(
        struct NDIS_BIND_PROTOCOL_DRIVER **a1,
        const struct _UNICODE_STRING *a2,
        char a3,
        bool a4)
{
  KPushLockBase *m_Lock; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  struct NDIS_BIND_PROTOCOL_DRIVER **v11; // rsi
  Rtl::KString *value; // rcx
  unsigned __int64 Length; // rax
  struct NDIS_BIND_PROTOCOL_DRIVER *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct Rtl::KString *v18; // rax
  struct NDIS_BIND_PROTOCOL_DRIVER *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  struct NDIS_BIND_PROTOCOL_DRIVER *v23; // rax
  struct NDIS_BIND_PROTOCOL_DRIVER *v24; // [rsp+20h] [rbp-48h] BYREF
  KLockHolder v25; // [rsp+28h] [rbp-40h] BYREF

  m_Lock = (KPushLockBase *)qword_140127130;
  v25.m_Lock = (KPushLockBase *)qword_140127130;
  KeEnterCriticalRegion();
  v25.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
  v8 = qword_140127130;
  v9 = 0LL;
  v25.m_State = Exclusive;
  v10 = *(unsigned int *)(qword_140127130 + 44);
  while ( 1 )
  {
    if ( v9 == v10 )
    {
      v24 = 0LL;
      if ( (unsigned __int8)KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(&v24) )
      {
        v18 = Rtl::KString::Initialize(a2);
        v19 = v24;
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
          (void **)&v24->Name.__ptr_.__value_,
          v18);
        if ( v19->Name.__ptr_.__value_
          && ndisBindReadProtocolDriverConfiguration(v19, a4)
          && (v22 = qword_140127130,
              Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                (unsigned int *)(qword_140127130 + 40),
                (unsigned int)(*(_DWORD *)(qword_140127130 + 44) + 1))) )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 48) + 8LL * *(unsigned int *)(v22 + 44)) = v19;
          _InterlockedIncrement((volatile signed __int32 *)&v19[1].DriverReady);
          v23 = v24;
          ++*(_DWORD *)(v22 + 44);
          *a1 = v23;
          v24 = 0LL;
        }
        else
        {
          *a1 = 0LL;
        }
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v24, v20, v21);
        goto LABEL_23;
      }
      *a1 = 0LL;
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v24, v16, v17);
LABEL_10:
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      KeLeaveCriticalRegion();
      return a1;
    }
    if ( v9 >= *(unsigned int *)(v8 + 44) )
      __fastfail(5u);
    v11 = (struct NDIS_BIND_PROTOCOL_DRIVER **)(*(_QWORD *)(v8 + 48) + 8 * v9);
    value = (*v11)->Name.__ptr_.__value_;
    Length = value->Length;
    if ( (_WORD)Length == a2->Length && !_wcsnicmp(value->Buffer, a2->Buffer, Length >> 1) )
      break;
    ++v9;
  }
  if ( !a3 || ndisBindReadProtocolDriverConfiguration(*v11, 1) )
  {
    v14 = *v11;
    *a1 = *v11;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v14[1].DriverReady);
      m_Lock = v25.m_Lock;
    }
    goto LABEL_10;
  }
  *a1 = 0LL;
LABEL_23:
  KLockHolder::~KLockHolder(&v25);
  return a1;
}
