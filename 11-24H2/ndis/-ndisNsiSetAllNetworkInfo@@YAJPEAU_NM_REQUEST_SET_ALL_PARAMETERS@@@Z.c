/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CDFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1400469F0 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x14004DAB0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x140067950 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x14006CD00 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400CCF9C (ndisIfCreateNetworkBlock.c)
 *     ndisIfReleaseSiteId @ 0x1400CD6A8 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1400CD6DC (ndisNsiChangeNetworkInfo.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1401486D8 (ndisNsiNotifyClientNetworkChange.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  char v2; // r15
  unsigned int v3; // edi
  char v4; // bl
  int v5; // r13d
  _OWORD *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  const struct _GUID *v10; // r12
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v12; // rsi
  const struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  char v18; // al
  KIRQL v19; // bl
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // eax
  int v23; // eax
  bool v24; // sf
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // r8
  _QWORD *v28; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v34; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v35; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+80h] [rbp-88h]
  char v38[528]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v39; // [rsp+298h] [rbp+190h] BYREF
  __int64 v40; // [rsp+2A8h] [rbp+1A0h]

  v2 = 0;
  v37 = 0LL;
  v3 = 0;
  memset(&Event, 0, sizeof(Event));
  v4 = 0;
  v40 = 0LL;
  v5 = 0;
  *(_DWORD *)&NewIrql[4] = 0;
  v35 = 0LL;
  v39 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      20,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v39);
  KeEnterCriticalRegion();
  NewIrql[1] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  memset(v38, 0, sizeof(v38));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
  {
    v3 = -1073741811;
    goto LABEL_55;
  }
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = v38;
  v8 = 4LL;
  do
  {
    *(_OWORD *)v7 = *v6;
    *((_OWORD *)v7 + 1) = v6[1];
    *((_OWORD *)v7 + 2) = v6[2];
    *((_OWORD *)v7 + 3) = v6[3];
    *((_OWORD *)v7 + 4) = v6[4];
    *((_OWORD *)v7 + 5) = v6[5];
    *((_OWORD *)v7 + 6) = v6[6];
    v7 += 128;
    v9 = v6[7];
    v6 += 8;
    *((_OWORD *)v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v7 = *v6;
  if ( v38[0] != -84 || v38[1] != 1 || *(_WORD *)&v38[2] != 528 )
    *(_DWORD *)v38 = 34603436;
  v10 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v34 = NetworkBlock;
  v12 = (__int64)NetworkBlock;
  if ( NetworkBlock
    && !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v39,
          1) )
  {
    goto LABEL_14;
  }
  if ( *((_DWORD *)a1 + 12) != 3 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v38[4]);
    if ( !CompartmentBlock
      || !ndisIsCompartmentAccessibleByClient(CompartmentBlock, (const struct _NDIS_NSI_CLIENT_INFO *)&v39, 1) )
    {
LABEL_14:
      v3 = -1073741072;
      goto LABEL_55;
    }
    if ( !v15 )
    {
      if ( v12 )
      {
        v25 = ndisNsiChangeNetworkInfo(v12, (__int64)v38, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
        v5 = *(_DWORD *)&NewIrql[4];
        v3 = v25;
        if ( *(_DWORD *)&NewIrql[4] )
          v2 = 1;
      }
      else
      {
        v3 = -1073741072;
      }
      goto LABEL_23;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( !v12 )
      {
        v23 = ndisIfCreateNetworkBlock(v14, (__int64)v10, (__int64)v38, &v34);
        v12 = (__int64)v34;
        v3 = v23;
        v24 = v23 < 0;
        v18 = 0;
        if ( !v24 )
          v4 = 1;
        goto LABEL_24;
      }
      v3 = -1073741270;
      goto LABEL_23;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( !v12 )
      {
        v20 = ndisIfCreateNetworkBlock(v14, (__int64)v10, (__int64)v38, &v34);
        v12 = (__int64)v34;
        v3 = v20;
        v21 = v20 >> 31;
        v18 = 0;
        v4 = v21 ^ 1;
        goto LABEL_24;
      }
      v22 = ndisNsiChangeNetworkInfo(v12, (__int64)v38, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
      v5 = *(_DWORD *)&NewIrql[4];
      v3 = v22;
      if ( *(_DWORD *)&NewIrql[4] )
        v2 = 1;
      goto LABEL_23;
    }
    if ( v17 != 1 )
    {
      v3 = -1073741811;
LABEL_23:
      v18 = 0;
      goto LABEL_24;
    }
  }
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 56) == v12 + 56 )
    {
      v26 = *(_DWORD *)(v12 + 72);
      if ( (v26 & 1) == 0 )
      {
        *(_DWORD *)(v12 + 72) = v26 | 1;
        v27 = *(_QWORD *)(v12 + 16);
        if ( *(_QWORD *)(v27 + 8) != v12 + 16 )
          goto LABEL_59;
        v28 = *(_QWORD **)(v12 + 24);
        if ( *v28 != v12 + 16
          || (--dword_14011D524,
              *v28 = v27,
              *(_QWORD *)(v27 + 8) = v28,
              ndisIfReleaseSiteId(*(_DWORD *)(v12 + 88)),
              COMPARTMENTBLOCK_DECREMENT_REF(v29),
              v30 = *(_QWORD *)v12,
              *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12)
          || (v31 = *(_QWORD **)(v12 + 8), *v31 != v12) )
        {
LABEL_59:
          __fastfail(3u);
        }
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        v18 = 1;
        goto LABEL_24;
      }
    }
    v3 = -1073741811;
  }
  else
  {
    v3 = -1073741072;
  }
  v18 = 0;
LABEL_24:
  if ( v18 )
  {
    KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
    *(_QWORD *)(v12 + 608) = &Event.Header.WaitListHead;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, NewIrql[1]);
    ndisNsiNotifyClientNetworkChange(v12, 2);
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v19);
    ndisWaitForKernelObject(&Event.Header.WaitListHead);
    *(_QWORD *)(v12 + 608) = 0LL;
    ExFreePoolWithTag((PVOID)v12, 0);
    goto LABEL_56;
  }
  if ( v4 || v2 )
  {
    ++*(_DWORD *)(v12 + 76);
    if ( v2 )
    {
      *((_QWORD *)&v35 + 1) = *((_QWORD *)a1 + 4);
      DWORD1(v35) = 0;
      Event.Header.LockNV = v5;
      Event.Header.SignalState = 0;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, NewIrql[1]);
    ndisNsiNotifyClientNetworkChange(v12, v4);
    NewIrql[1] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
  }
LABEL_55:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, NewIrql[1]);
LABEL_56:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v3);
  KeLeaveCriticalRegion();
  return v3;
}
