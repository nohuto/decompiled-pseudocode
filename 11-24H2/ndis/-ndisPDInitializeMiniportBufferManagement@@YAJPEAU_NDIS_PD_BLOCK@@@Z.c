/*
 * XREFs of ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x14013D6C0
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x14013C970 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x140139864 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x14013D68C (-ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z.c)
 *     ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x14013DE50 (-ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015F780 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPDInitializeMiniportBufferManagement(struct _NDIS_PD_BLOCK *a1)
{
  __int64 v2; // rax
  KPushLockBase *v3; // rax
  KPushLockBase *v4; // rbx
  KPushLockBase *PoolWithTag; // rax
  unsigned __int64 *v6; // rax
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **); // r8
  void (__fastcall *v9)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *); // rax
  int v10; // edi
  int v11; // ecx
  KPushLockBase *v12; // rdi
  KPushLockBase **v13; // rcx
  KPushLockBase *v14; // rax
  KPushLockBase **Value; // rdx
  int v16; // ecx
  KPushLockBase **v17; // rdx
  KPushLockBase *v18; // rax
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  KLockHolder v21; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+A0h] [rbp+20h] BYREF
  int v23; // [rsp+A4h] [rbp+24h]

  *(_QWORD *)((char *)&v20 + 1) = 0LL;
  *(_DWORD *)((char *)&v20 + 9) = 0;
  *(_WORD *)((char *)&v20 + 13) = 0;
  HIBYTE(v20) = 0;
  v2 = *(_QWORD *)a1;
  LODWORD(v20) = 1048960;
  if ( *((_BYTE *)a1 + 13) )
    v2 = *(_QWORD *)(v2 + 24);
  *((_QWORD *)&v20 + 1) = v2;
  if ( !*((_DWORD *)a1 + 4) )
    goto LABEL_7;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v21, qword_14011CF58);
  v3 = ndisPDFindAndReferenceBMDomainUnderLock(*((_DWORD *)a1 + 4));
  v4 = v3;
  if ( v3 && !ndisPdAreBMsCompatible(a1, (const struct NDIS_PD_BM_DOMAIN *)v3) )
    goto LABEL_19;
  KLockHolder::~KLockHolder(&v21);
  if ( !v4 )
  {
LABEL_7:
    v23 = 0;
    v22 = 524672;
    if ( !*((_DWORD *)a1 + 4) )
      v23 |= 1u;
    PoolWithTag = (KPushLockBase *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x6D41444Eu);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *(_DWORD *)&PoolWithTag->m_Lock.0 = 1;
    *(_DWORD *)&PoolWithTag[3].m_Lock.0 = 0;
    PoolWithTag[4].m_Lock.Value = 0LL;
    PoolWithTag[7].m_Lock.Value = 0LL;
    PoolWithTag[8].m_Lock.Value = 0LL;
    PoolWithTag[9].m_Lock.Value = 0LL;
    PoolWithTag[10].m_Lock.Value = 0LL;
    PoolWithTag[11].m_Lock.Value = 0LL;
    PoolWithTag[12].m_Lock.Value = 0LL;
    PoolWithTag[2].m_Lock.Value = 0LL;
    PoolWithTag[1].m_Lock.Value = 0LL;
    v6 = (unsigned __int64 *)&PoolWithTag[5];
    v6[1] = (unsigned __int64)v6;
    *v6 = (unsigned __int64)v6;
    if ( *((_BYTE *)a1 + 13) )
    {
      v7 = *(_QWORD **)(*(_QWORD *)a1 + 3760LL);
      v8 = (__int64 (__fastcall *)(const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *, struct NDIS_PD_BM_DOMAIN_HANDLE__ **))v7[142];
      v4[7].m_Lock.Value = (unsigned __int64)v8;
      v4[8].m_Lock.0 = ($2F38BEDF952D5DA5F266621B11247D04)v7[143];
      v4[9].m_Lock.0 = ($2F38BEDF952D5DA5F266621B11247D04)v7[144];
      v4[10].m_Lock.0 = ($2F38BEDF952D5DA5F266621B11247D04)v7[145];
      v4[11].m_Lock.0 = ($2F38BEDF952D5DA5F266621B11247D04)v7[146];
      v9 = (void (__fastcall *)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *))v7[147];
    }
    else
    {
      v4[8].m_Lock.Value = (unsigned __int64)NdisPDBMAddMemberToDomain;
      v8 = NdisPDBMCreateDomain;
      v4[7].m_Lock.Value = (unsigned __int64)NdisPDBMCreateDomain;
      v4[9].m_Lock.Value = (unsigned __int64)NdisPDBMRemoveMemberFromDomain;
      v4[10].m_Lock.Value = (unsigned __int64)NdisPDBMDeleteDomain;
      v4[11].m_Lock.Value = (unsigned __int64)NdisPDBMAllocateCommonBuffer;
      v9 = NdisPDBMFreeCommonBuffer;
    }
    v4[12].m_Lock.Value = (unsigned __int64)v9;
    v10 = v8((const struct _NDIS_PD_BM_DOMAIN_PARAMETERS *)&v22, (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)&v4[4]);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0xDu,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          *(_QWORD *)a1,
          v10);
      goto LABEL_34;
    }
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v21, qword_14011CF58);
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 )
    {
      v12 = ndisPDFindAndReferenceBMDomainUnderLock(v11);
      if ( v12 )
      {
        KLockHolder::ReleaseExclusive(&v21);
        NDIS_PD_BM_DOMAIN::Deref((NDIS_PD_BM_DOMAIN *)v4);
        v4 = v12;
        if ( !ndisPdAreBMsCompatible(a1, (const struct NDIS_PD_BM_DOMAIN *)v12) )
        {
LABEL_19:
          v10 = -1073740007;
          KLockHolder::~KLockHolder(&v21);
LABEL_34:
          NDIS_PD_BM_DOMAIN::Deref((NDIS_PD_BM_DOMAIN *)v4);
          return (unsigned int)v10;
        }
LABEL_23:
        KLockHolder::~KLockHolder(&v21);
        goto LABEL_24;
      }
      *(_DWORD *)&v4[3].m_Lock.0 = *((_DWORD *)a1 + 4);
    }
    v13 = (KPushLockBase **)&v4[1];
    v14 = qword_14011CF58 + 1030;
    Value = (KPushLockBase **)qword_14011CF58[1031].m_Lock.Value;
    if ( *Value != &qword_14011CF58[1030] )
      goto LABEL_35;
    *v13 = v14;
    v4[2].m_Lock.Value = (unsigned __int64)Value;
    *Value = (KPushLockBase *)v13;
    v14[1].m_Lock.Value = (unsigned __int64)v13;
    goto LABEL_23;
  }
LABEL_24:
  v16 = ((__int64 (__fastcall *)(unsigned __int64, __int128 *, char *))v4[8].m_Lock.Value)(
          v4[4].m_Lock.Value,
          &v20,
          (char *)a1 + 80);
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0xEu,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        *(_QWORD *)a1,
        (char)v4,
        *(_DWORD *)&v4[3].m_Lock.0,
        v16);
    v10 = -1073740007;
    goto LABEL_32;
  }
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v21, qword_14011CF58);
  *((_QWORD *)a1 + 9) = v4;
  v17 = (KPushLockBase **)v4[6].m_Lock.Value;
  v18 = (KPushLockBase *)((char *)a1 + 56);
  if ( *v17 != &v4[5] )
LABEL_35:
    __fastfail(3u);
  v18->m_Lock.Value = (unsigned __int64)&v4[5];
  *((_QWORD *)a1 + 8) = v17;
  *v17 = v18;
  v4[6].m_Lock.Value = (unsigned __int64)v18;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0xFu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      *(_QWORD *)a1,
      (char)v4,
      *(_DWORD *)&v4[3].m_Lock.0);
  KLockHolder::~KLockHolder(&v21);
  v10 = 0;
LABEL_32:
  if ( v4 && v10 < 0 )
    goto LABEL_34;
  return (unsigned int)v10;
}
