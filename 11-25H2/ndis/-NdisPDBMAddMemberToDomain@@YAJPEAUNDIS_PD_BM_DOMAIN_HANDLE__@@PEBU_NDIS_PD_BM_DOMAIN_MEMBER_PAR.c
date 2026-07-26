/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x140149110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??3?$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z @ 0x140144590 (--3-$KALLOCATOR@$0GNEBEEEO@$00@@SAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        struct KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v6; // r15
  __int64 v7; // rdi
  _QWORD *PoolWithTag; // rax
  void *v9; // rbx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v10; // rsi
  char v11; // al
  unsigned int v12; // eax
  _DEVICE_OBJECT *v13; // rcx
  int v14; // edx
  struct _DMA_ADAPTER *DmaAdapter; // r15
  int v16; // edi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v17; // rax
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned __int16 v19; // r9
  __int64 v20; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rdx
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v24; // [rsp+48h] [rbp-51h]
  KLockThisExclusive v25; // [rsp+50h] [rbp-49h] BYREF
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+70h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v24 = a3;
  *a3 = 0LL;
  v6 = a3;
  KLockThisExclusive::KLockThisExclusive(&v25, a1);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v16 = -1073741811;
    goto LABEL_39;
  }
  v7 = *((_QWORD *)MiniportAdapterContext + 686);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741670;
    goto LABEL_39;
  }
  PoolWithTag[2] = 0LL;
  v10 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  PoolWithTag[3] = 0LL;
  PoolWithTag[1] = 0LL;
  *PoolWithTag = 0LL;
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
  {
    v11 = *(_BYTE *)(v7 + 14);
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = v11;
    goto LABEL_8;
  }
  if ( a1[3].m_Lock.0 )
  {
    v16 = -1073741808;
LABEL_32:
    KALLOCATOR<1832993870,1>::operator delete(v9);
    goto LABEL_39;
  }
  v11 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
  if ( v11 != *(_BYTE *)(v7 + 14) )
  {
    v16 = -1073740007;
    goto LABEL_32;
  }
LABEL_8:
  if ( v11 )
  {
    v17 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
  }
  else
  {
    memset(&DeviceDescription, 0, sizeof(DeviceDescription));
    v12 = *(_DWORD *)(v7 + 20);
    v13 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
    DeviceDescription.InterfaceType = InterfaceTypeUndefined;
    DeviceDescription.DmaAddressWidth = v12;
    NumberOfMapRegisters = 0;
    DeviceDescription.Version = 3;
    *(_WORD *)&DeviceDescription.Master = 257;
    DeviceDescription.MaximumLength = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v13, &DeviceDescription, &NumberOfMapRegisters);
    if ( !DmaAdapter )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          29,
          10,
          (struct _GUID *)&WPP_cfa9654755ff3e59552d1435f08b5860_Traceguids,
          (char)MiniportAdapterContext);
      }
      v16 = -1073741823;
      goto LABEL_32;
    }
    v17 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
    if ( !*(_BYTE *)&a1[3].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v16 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      if ( v16 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = 11;
LABEL_30:
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            v19,
            (struct _GUID *)&WPP_cfa9654755ff3e59552d1435f08b5860_Traceguids,
            (char)MiniportAdapterContext,
            v16);
          goto LABEL_31;
        }
        goto LABEL_31;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v10 == v10 )
      {
        v16 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)-1LL);
        if ( v16 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 12;
            goto LABEL_30;
          }
LABEL_31:
          DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
          goto LABEL_32;
        }
        v17 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
      }
      else
      {
        v20 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 24LL) + 8LL) + 264LL))();
        v16 = DmaOperations->JoinDmaDomain(DmaAdapter, (void *)v20);
        v17 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v9;
        if ( v16 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 13;
            goto LABEL_30;
          }
          goto LABEL_31;
        }
      }
    }
    v17[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)DmaAdapter;
    v6 = v24;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
  v16 = 0;
  if ( *Value != v10 )
    __fastfail(3u);
  *v17 = v10;
  v17[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v17;
  a1[2].m_Lock.Value = (unsigned __int64)v17;
  v17[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
  *v6 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v17;
LABEL_39:
  KLockHolder::~KLockHolder(&v25);
  return (unsigned int)v16;
}
