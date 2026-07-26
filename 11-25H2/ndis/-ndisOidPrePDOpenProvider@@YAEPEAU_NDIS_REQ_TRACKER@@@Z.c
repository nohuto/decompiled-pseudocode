/*
 * XREFs of ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140147DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005D3E0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qqdqqS @ 0x1400AE49C (WPP_RECORDER_SF_qqdqqS.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1400AE684 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1400AE8F0 (WPP_RECORDER_SF_qqqqq.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C2C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140143048 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ??_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z @ 0x1401445B8 (--_GNDIS_PD_ASSOCIATION@@QEAAPEAXI@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x140147690 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x140147798 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // r14
  int v5; // edx
  __int64 v6; // r8
  wchar_t *Buffer; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  KPushLockBase *PDClientViaClientDriverHandle; // r12
  unsigned int LowPart; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  __int64 v14; // rcx
  char *PoolWithTag; // rdi
  KPushLockBase *v16; // rax
  int v17; // eax
  struct KPushLockBase *v18; // rdx
  KPushLockBase **Value; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 **v22; // rdx
  __int64 v23; // r9
  const wchar_t *v24; // rcx
  __int64 v26; // [rsp+28h] [rbp-E0h]
  KLockThisExclusive v27; // [rsp+61h] [rbp-A7h] BYREF
  _BYTE v28[248]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  memset(v28, 0, sizeof(v28));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x17u, v26);
  if ( !*a1 )
  {
    v4 = 0;
    goto LABEL_54;
  }
  if ( *((_DWORD *)&v3->Header + 1) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)&v3->LinkStateIndicationFlags & 0x4000) == 0 && (v3->Header.Revision < 2u || v3->Header.Size < 0xF8u)
    || (v3->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
    || HIDWORD(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
    || v3->WakeUpDpcTimer.Timer.DueTime.LowPart == -1 )
  {
    goto LABEL_53;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x18u )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_54;
  }
  if ( HIDWORD(v3->Reserved28) < 0x18 )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676266;
    goto LABEL_54;
  }
  Buffer = v3->Reserved4.Buffer;
  if ( *(_BYTE *)Buffer != 0x80
    || *((_BYTE *)Buffer + 1) != 1
    || Buffer[1] < 0x18u
    || (*((_DWORD *)Buffer + 1) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_53;
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *((_DWORD *)a1 + 10) = -1073741808;
    goto LABEL_54;
  }
  LowPart = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  if ( LowPart )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, LowPart);
    if ( !VPortByVPortId || (VPortByVPortId->Flags & 2) != 0 )
    {
LABEL_53:
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_54;
    }
  }
  PDBlock = v1->PDBlock;
  if ( !PDBlock
    || !*((_BYTE *)PDBlock + 12)
    || !*((_DWORD *)PDBlock + 8)
    || (v14 = *((_QWORD *)PDBlock + 3), !*(_DWORD *)(v14 + 16))
    || !*(_BYTE *)(v14 + 8) )
  {
LABEL_6:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_54;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  if ( !PoolWithTag )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_54;
  }
  *((_DWORD *)PoolWithTag + 16) = -1;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *((_QWORD *)PoolWithTag + 7) = 0LL;
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *((_WORD *)PoolWithTag + 44) = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 96;
  *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 96;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 112;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 112;
  *((_QWORD *)PoolWithTag + 17) = PoolWithTag + 128;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 128;
  *((_QWORD *)PoolWithTag + 19) = PoolWithTag + 144;
  *((_QWORD *)PoolWithTag + 18) = PoolWithTag + 144;
  *((_QWORD *)PoolWithTag + 21) = PoolWithTag + 160;
  *((_QWORD *)PoolWithTag + 20) = PoolWithTag + 160;
  *((_QWORD *)PoolWithTag + 23) = PoolWithTag + 176;
  *((_QWORD *)PoolWithTag + 22) = PoolWithTag + 176;
  if ( !(unsigned __int8)ndisReferenceMiniport(v1, 0x65u) )
  {
    *((_DWORD *)a1 + 10) = -1073741436;
LABEL_36:
    v16 = (KPushLockBase *)*((_QWORD *)PoolWithTag + 9);
    if ( v16 )
    {
      v27.m_Lock = 0LL;
      *(KLockHolder::<unnamed_type_m_State> *)((char *)&v27.m_State + 7) = 1048960;
      *(KPushLockBase **)((char *)&v27.m_Lock + 7) = v16;
      memset(v28, 0, sizeof(v28));
      *(_DWORD *)&v28[88] |= 8u;
      *(_QWORD *)&v28[104] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v28[168]);
      *(_DWORD *)v28 = 15466902;
      *(_DWORD *)&v28[32] = 66818;
      *(_DWORD *)&v28[4] = 1;
      *(_DWORD *)&v28[8] = v3->NextMiniport;
      *(_QWORD *)&v28[40] = (char *)&v27.m_State + 7;
      *(_WORD *)&v28[2] = 248;
      *(_DWORD *)&v28[48] = 16;
      v28[1] = 2;
      *(_DWORD *)&v28[244] = 1;
      *(_DWORD *)&v28[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
      ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v28);
      *((_QWORD *)PoolWithTag + 9) = 0LL;
    }
    if ( *((_QWORD *)PoolWithTag + 6) )
    {
      ndisDereferenceMiniport(v1, 0x65u);
      *((_QWORD *)PoolWithTag + 6) = 0LL;
    }
    NDIS_PD_ASSOCIATION::`scalar deleting destructor'((NDIS_PD_ASSOCIATION *)PoolWithTag);
    goto LABEL_54;
  }
  *((_QWORD *)PoolWithTag + 6) = v1;
  *((_DWORD *)PoolWithTag + 16) = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  memset(v28, 0, sizeof(v28));
  *(_DWORD *)&v28[88] |= 8u;
  *(_QWORD *)&v28[104] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v28[168]);
  *(_DWORD *)v28 = 15466902;
  *(_DWORD *)&v28[4] = 12;
  *(_DWORD *)&v28[8] = v3->NextMiniport;
  *(_DWORD *)&v28[32] = *(_DWORD *)&v3->Reserved4.Length;
  *(_DWORD *)&v28[56] = v3->OpenQueue;
  *(_OWORD *)&v28[40] = *(_OWORD *)&v3->PcwDataBlock;
  *(_WORD *)&v28[2] = 248;
  v28[1] = 2;
  *(_DWORD *)&v28[244] = 1;
  *(_DWORD *)&v28[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  v17 = ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v28);
  *((_DWORD *)a1 + 10) = v17;
  if ( v17 )
    goto LABEL_36;
  v18 = qword_140127008;
  *((_QWORD *)PoolWithTag + 9) = *((_QWORD *)Buffer + 1);
  *((_QWORD *)PoolWithTag + 10) = *((_QWORD *)Buffer + 2);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)((char *)&v27.m_State + 7), v18);
  *((_QWORD *)PoolWithTag + 7) = PDClientViaClientDriverHandle;
  Value = (KPushLockBase **)PDClientViaClientDriverHandle[3].m_Lock.Value;
  if ( *Value != &PDClientViaClientDriverHandle[2]
    || (*(_QWORD *)PoolWithTag = PDClientViaClientDriverHandle + 2,
        *((_QWORD *)PoolWithTag + 1) = Value,
        *Value = (KPushLockBase *)PoolWithTag,
        v20 = (__int64 *)(PoolWithTag + 32),
        PDClientViaClientDriverHandle[3].m_Lock.Value = (unsigned __int64)PoolWithTag,
        v21 = (__int64)v1->PDBlock + 40,
        v22 = (__int64 **)*((_QWORD *)v1->PDBlock + 6),
        *v22 != (__int64 *)v21) )
  {
    __fastfail(3u);
  }
  *v20 = v21;
  *((_QWORD *)PoolWithTag + 5) = v22;
  *v22 = v20;
  *(_QWORD *)(v21 + 8) = v20;
  KLockHolder::~KLockHolder((KLockHolder *)((char *)&v27.m_State + 7));
  if ( *((_UNKNOWN **)PoolWithTag + 10) == &unk_1400FC380 )
    PoolWithTag[88] = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v24 = L"PASS_THROUGH";
    if ( !PoolWithTag[88] )
      v24 = L" ";
    WPP_RECORDER_SF_qqdqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      v6,
      v23,
      v26,
      (char)PDClientViaClientDriverHandle,
      (char)v1,
      *((_DWORD *)PoolWithTag + 16),
      (char)PoolWithTag,
      *((_QWORD *)Buffer + 1),
      v24);
  }
  *((_QWORD *)Buffer + 1) = PoolWithTag;
  *((_QWORD *)Buffer + 2) = &unk_1400FC380;
LABEL_54:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, 0x19u, v26);
  return v4;
}
