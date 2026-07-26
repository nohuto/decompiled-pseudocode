/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140029E70
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14002B430 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1401606E0 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  KIRQL v2; // si
  unsigned int v3; // edi
  __int64 v5; // rbp
  unsigned int v6; // edi
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  struct _NDIS_IF_BLOCK *v8; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+40h] [rbp-4C8h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-4C0h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-4B0h]
  int v15; // [rsp+5Ch] [rbp-4ACh]
  __int128 v16; // [rsp+60h] [rbp-4A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-498h]
  _BYTE v18[1104]; // [rsp+80h] [rbp-488h] BYREF

  v12 = 0;
  v17 = 0LL;
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      30,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v16);
  KeEnterCriticalRegion();
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  memset(v18, 0, 0x444uLL);
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 8) )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 14) )
    goto LABEL_4;
  v5 = *((unsigned int *)a1 + 13);
  v6 = *((_DWORD *)a1 + 12);
  if ( v6 + (unsigned int)v5 > 0x444 )
    goto LABEL_4;
  if ( v6 + (unsigned int)v5 < v6 )
    goto LABEL_4;
  memmove(&v18[v5], *((const void **)a1 + 5), v6);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)(*((union _NET_LUID_LH **)a1 + 2))->Value);
  v8 = InterfaceByNetLuid;
  if ( !InterfaceByNetLuid )
    goto LABEL_4;
  Compartment = InterfaceByNetLuid->Compartment;
  if ( DWORD1(v16) == *((_DWORD *)Compartment + 4) )
    goto LABEL_14;
  v11 = *((_QWORD *)&v16 + 1) - *(_QWORD *)((char *)Compartment + 1684);
  if ( *((_QWORD *)&v16 + 1) == *(_QWORD *)((char *)Compartment + 1684) )
    v11 = v17 - *(_QWORD *)((char *)Compartment + 1692);
  if ( v11 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || DWORD1(v16) != 1) )
  {
LABEL_4:
    v3 = -1073741811;
  }
  else
  {
LABEL_14:
    v3 = ndisNsiChangeInterfaceInfo(InterfaceByNetLuid, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v18, v6, v5, &v12);
    if ( v12 )
    {
      v13[1] = *((_QWORD *)a1 + 5);
      v15 = *((_DWORD *)a1 + 13);
      RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v8->RefCountTracker;
      v13[0] = 0LL;
      v14 = v12;
      NdisReferenceWithTag(RefCountTracker, 5u);
      ++v8->Ref;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v2);
      ndisNsiNotifyClientInterfaceChange(v8, 0LL, v13, 0LL);
      v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      IFBLOCK_DECREMENT_REF(v8, IFREF_SET);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Fu,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      v3);
  KeLeaveCriticalRegion();
  return v3;
}
