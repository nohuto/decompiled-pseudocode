/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x140089330
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140015780 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140173CB0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // r14
  __int64 v4; // r15
  KIRQL v6; // al
  NDIS_STATUS v7; // ebx
  KIRQL v8; // bl
  _NDIS_AF_LIST *CallMgrAfList; // rax
  _NDIS_AF_LIST **Pool2; // rdi
  struct _NDIS_AF_NOTIFY *v11; // rcx
  __int128 v12; // xmm0
  int v13; // edx
  KIRQL v15; // [rsp+90h] [rbp+8h]
  struct _NDIS_AF_NOTIFY *v16; // [rsp+A0h] [rbp+18h] BYREF

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v4 = *((_QWORD *)NdisBindingHandle + 3);
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v2,
      v4,
      NdisBindingHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc(&v2->Lock);
  v2->MiniportThread = KeGetCurrentThread();
  v15 = v6;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( *(_BYTE *)(v4 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      v7 = -1073676286;
    }
    else
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisBindingHandle + 75);
      NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)NdisBindingHandle + 74), 0xDu);
      ++*((_DWORD *)NdisBindingHandle + 57);
      KeReleaseSpinLock((PKSPIN_LOCK)NdisBindingHandle + 75, v8);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (v2->Flags & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v4 + 56) >= 5u )
        {
          CallMgrAfList = v2->CallMgrAfList;
          if ( CallMgrAfList )
          {
            while ( *(_QWORD *)&CallMgrAfList->AddressFamily.AddressFamily != *(_QWORD *)&AddressFamily->AddressFamily
                 || CallMgrAfList->AddressFamily.MinorVersion != AddressFamily->MinorVersion )
            {
              CallMgrAfList = CallMgrAfList->NextAf;
              if ( !CallMgrAfList )
                goto LABEL_16;
            }
            v7 = -1073741823;
          }
          else
          {
LABEL_16:
            Pool2 = (_NDIS_AF_LIST **)ExAllocatePool2(64LL, 320LL, 1868776526LL);
            if ( Pool2 )
            {
              v7 = ndisCreateNotifyQueue(v2, 0LL, (struct CO_ADDRESS_FAMILY *)AddressFamily, &v16);
              if ( v7 )
              {
                ExFreePoolWithTag(Pool2, 0);
              }
              else
              {
                v11 = v16;
                Pool2[2] = *(_NDIS_AF_LIST **)&AddressFamily->AddressFamily;
                *((_DWORD *)Pool2 + 6) = AddressFamily->MinorVersion;
                *(_OWORD *)(Pool2 + 21) = *(_OWORD *)(v4 + 632);
                *(_OWORD *)(Pool2 + 23) = *(_OWORD *)(v4 + 648);
                *(_OWORD *)(Pool2 + 25) = *(_OWORD *)(v4 + 664);
                *(_OWORD *)(Pool2 + 27) = *(_OWORD *)(v4 + 680);
                *(_OWORD *)(Pool2 + 29) = *(_OWORD *)(v4 + 696);
                *(_OWORD *)(Pool2 + 31) = *(_OWORD *)(v4 + 712);
                *(_OWORD *)(Pool2 + 33) = *(_OWORD *)(v4 + 728);
                *(_OWORD *)(Pool2 + 35) = *(_OWORD *)(v4 + 744);
                v12 = *(_OWORD *)(v4 + 760);
                Pool2[1] = (_NDIS_AF_LIST *)NdisBindingHandle;
                *(_OWORD *)(Pool2 + 37) = v12;
                *Pool2 = v2->CallMgrAfList;
                *((_DWORD *)Pool2 + 78) = 6;
                v2->CallMgrAfList = (_NDIS_AF_LIST *)Pool2;
                *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v4 + 640);
                *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v4 + 648);
                *((_QWORD *)NdisBindingHandle + 134) = *(_QWORD *)(v4 + 728);
                *((_QWORD *)NdisBindingHandle + 135) = *(_QWORD *)(v4 + 736);
                *((_QWORD *)NdisBindingHandle + 145) = *(_QWORD *)(v4 + 760);
                *((_QWORD *)NdisBindingHandle + 146) = *(_QWORD *)(v4 + 752);
                if ( v11 )
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)v11 + 8), (WORK_QUEUE_TYPE)40);
              }
            }
            else
            {
              v7 = -1073741670;
            }
          }
        }
        else
        {
          v7 = -1073676284;
        }
      }
      else
      {
        v7 = -1073676283;
      }
      ndisMDereferenceOpenLocked((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, 0xDu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v7 = -1073676283;
  }
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v15);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x13u,
      0x13u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v2,
      v4,
      (char)NdisBindingHandle,
      v7);
  return v7;
}
