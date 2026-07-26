/*
 * XREFs of ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400CE530
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
 *     ndisIfReleaseSiteId @ 0x1400CD6A8 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1400CD6DC (ndisNsiChangeNetworkInfo.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1401486D8 (ndisNsiNotifyClientNetworkChange.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisNsiSetNetworkInfo(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  unsigned int v1; // edi
  char v2; // r15
  KIRQL v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v8; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r10
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v14; // r10
  __int64 v15; // rcx
  _QWORD *v16; // rax
  KIRQL v17; // bl
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+4Ch] [rbp-B4h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ch] [rbp-A4h]
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  char v29[528]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+290h] [rbp+190h] BYREF
  __int64 v31; // [rsp+2A0h] [rbp+1A0h]

  v1 = 0;
  v2 = 0;
  LODWORD(v22) = 0;
  v31 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v30 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v30);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  memset(v29, 0, sizeof(v29));
  if ( *((_DWORD *)a1 + 6) != 16
    || *((_DWORD *)a1 + 8)
    || (v5 = *((unsigned int *)a1 + 13), v6 = *((_DWORD *)a1 + 12), v6 + (unsigned int)v5 > 0x210)
    || v6 + (unsigned int)v5 < v6 )
  {
    v1 = -1073741808;
    goto LABEL_30;
  }
  memmove(&v29[v5], *((const void **)a1 + 5), v6);
  if ( !(_DWORD)v5 )
  {
LABEL_8:
    v1 = -1073741811;
LABEL_30:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
    goto LABEL_31;
  }
  if ( (unsigned int)v5 <= 4 )
  {
    if ( v6 < 4 )
      goto LABEL_8;
    v2 = 1;
  }
  NetworkBlock = ndisIfFindNetworkBlock(*((const struct _GUID **)a1 + 2));
  v8 = (__int64)NetworkBlock;
  if ( !NetworkBlock
    || !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v30,
          1) )
  {
    goto LABEL_8;
  }
  if ( v2 )
    CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v29[4]);
  if ( !CompartmentBlock )
    goto LABEL_8;
  v10 = *((_DWORD *)a1 + 14);
  if ( !v10 )
  {
    v18 = ndisNsiChangeNetworkInfo(v8, (__int64)v29, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 13), (int *)&v22);
    v19 = v22;
    v1 = v18;
    if ( (_DWORD)v22 )
    {
      ++*(_DWORD *)(v8 + 76);
      v20 = *((_QWORD *)a1 + 5);
      v24 = 0;
      v23 = 0;
      v25 = v20;
      v27 = *((_DWORD *)a1 + 13);
      v26 = v19;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
      ndisNsiNotifyClientNetworkChange(v8, 0);
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v8);
    }
    goto LABEL_30;
  }
  if ( v10 != 3 )
    goto LABEL_8;
  if ( *(_QWORD *)(v8 + 56) != v8 + 56 )
    goto LABEL_8;
  v11 = *(_DWORD *)(v8 + 72);
  if ( (v11 & 1) != 0 )
    goto LABEL_8;
  *(_DWORD *)(v8 + 72) = v11 | 1;
  v12 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v12 + 8) != v8 + 16 )
    goto LABEL_26;
  v13 = *(_QWORD **)(v8 + 24);
  if ( *v13 != v8 + 16
    || (--dword_14011D524,
        *v13 = v12,
        *(_QWORD *)(v12 + 8) = v13,
        ndisIfReleaseSiteId(*(_DWORD *)(v8 + 88)),
        COMPARTMENTBLOCK_DECREMENT_REF(v14),
        v15 = *(_QWORD *)v8,
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8)
    || (v16 = *(_QWORD **)(v8 + 8), *v16 != v8) )
  {
LABEL_26:
    __fastfail(3u);
  }
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(v8 + 608) = &Event;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  ndisNsiNotifyClientNetworkChange(v8, 2);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v8);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
  ndisWaitForKernelObject(&Event);
  *(_QWORD *)(v8 + 608) = 0LL;
  ExFreePoolWithTag((PVOID)v8, 0);
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v1);
  KeLeaveCriticalRegion();
  return v1;
}
