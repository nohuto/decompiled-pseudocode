/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x140051A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x140026E30 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140182A70 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  __int64 v3; // rsi
  struct CO_ADDRESS_FAMILY *v4; // r15
  KIRQL v6; // r12
  __int64 v7; // rdx
  NDIS_STATUS v8; // r14d
  int v9; // edx
  _NDIS_AF_LIST *i; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *Pool2; // r13
  struct _NDIS_AF_NOTIFY *v14; // rcx
  __int128 v15; // xmm0
  struct _NDIS_AF_NOTIFY *v16; // [rsp+80h] [rbp+8h] BYREF

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v3 = *((_QWORD *)NdisBindingHandle + 3);
  v4 = (struct CO_ADDRESS_FAMILY *)AddressFamily;
  v16 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(AddressFamily) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)AddressFamily,
      19,
      18,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v2,
      v3,
      (char)NdisBindingHandle);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc(&v2->Lock);
  v2->MiniportThread = KeGetCurrentThread();
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  v7 = *((unsigned int *)NdisBindingHandle + 56);
  LODWORD(v7) = v7 | 0x20000;
  *((_DWORD *)NdisBindingHandle + 56) = v7;
  if ( *(_BYTE *)(v3 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      v8 = -1073676286;
    }
    else
    {
      LOBYTE(v7) = 13;
      ndisMReferenceOpen(NdisBindingHandle, v7);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (v2->Flags & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v3 + 56) < 5u )
        {
          v8 = -1073676284;
        }
        else
        {
          for ( i = v2->CallMgrAfList; i; i = i->NextAf )
          {
            v12 = *(_QWORD *)&i->AddressFamily.AddressFamily - *(_QWORD *)&v4->AddressFamily;
            if ( !v12 )
              v12 = i->AddressFamily.MinorVersion - (unsigned __int64)v4->MinorVersion;
            if ( !v12 )
            {
              v8 = -1073741823;
              goto LABEL_21;
            }
          }
          Pool2 = (_QWORD *)ExAllocatePool2(64LL, 320LL, 1868776526);
          if ( Pool2 )
          {
            v8 = ndisCreateNotifyQueue(v2, 0LL, v4, &v16);
            if ( v8 )
            {
              ExFreePoolWithTag(Pool2, 0);
            }
            else
            {
              v14 = v16;
              Pool2[2] = *(_QWORD *)&v4->AddressFamily;
              *((_DWORD *)Pool2 + 6) = v4->MinorVersion;
              *(_OWORD *)(Pool2 + 21) = *(_OWORD *)(v3 + 632);
              *(_OWORD *)(Pool2 + 23) = *(_OWORD *)(v3 + 648);
              *(_OWORD *)(Pool2 + 25) = *(_OWORD *)(v3 + 664);
              *(_OWORD *)(Pool2 + 27) = *(_OWORD *)(v3 + 680);
              *(_OWORD *)(Pool2 + 29) = *(_OWORD *)(v3 + 696);
              *(_OWORD *)(Pool2 + 31) = *(_OWORD *)(v3 + 712);
              *(_OWORD *)(Pool2 + 33) = *(_OWORD *)(v3 + 728);
              *(_OWORD *)(Pool2 + 35) = *(_OWORD *)(v3 + 744);
              v15 = *(_OWORD *)(v3 + 760);
              Pool2[1] = NdisBindingHandle;
              *(_OWORD *)(Pool2 + 37) = v15;
              *Pool2 = v2->CallMgrAfList;
              *((_DWORD *)Pool2 + 78) = 6;
              v2->CallMgrAfList = (_NDIS_AF_LIST *)Pool2;
              *((_QWORD *)NdisBindingHandle + 131) = *(_QWORD *)(v3 + 640);
              *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v3 + 648);
              *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v3 + 728);
              *((_QWORD *)NdisBindingHandle + 134) = *(_QWORD *)(v3 + 736);
              *((_QWORD *)NdisBindingHandle + 144) = *(_QWORD *)(v3 + 760);
              *((_QWORD *)NdisBindingHandle + 145) = *(_QWORD *)(v3 + 752);
              if ( v14 )
                ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)v14 + 8), (WORK_QUEUE_TYPE)40);
            }
          }
          else
          {
            v8 = -1073741670;
          }
        }
      }
      else
      {
        v8 = -1073676283;
      }
LABEL_21:
      LOBYTE(i) = 13;
      ndisMDereferenceOpenLocked(NdisBindingHandle, i);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v8 = -1073676283;
  }
  v2->MiniportThread = 0LL;
  KeReleaseSpinLock(&v2->Lock, v6);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0x13u,
      0x13u,
      (struct _GUID *)&WPP_1ba601ee69d03855ff220f07563e78fc_Traceguids,
      (char)v2,
      v3,
      (char)NdisBindingHandle,
      v8);
  return v8;
}
