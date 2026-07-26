/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x140163200
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14005C760 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400C9FE0 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x14003D840 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqqL @ 0x140064FB0 (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x14006FFA0 (-ndisIfNdisProviderGetHandle@@YAPEAX_N@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x140073170 (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1400C8C3C (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x140147830 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x140164DF0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        const union _NET_LUID_LH *a4,
        const struct _GUID *a5,
        const struct NdisNetworkInterfacePersistedState *a6,
        struct _NDIS_FILTER_BLOCK *a7,
        enum NdisIfBlockSource a8)
{
  UINT32 v9; // r12d
  unsigned __int16 v11; // si
  __int64 Pool2; // rax
  __int64 v13; // rdi
  _NDIS_MINIPORT_BLOCK *Miniport; // rdx
  _UNICODE_STRING *FilterFriendlyName; // rax
  unsigned __int16 Length; // cx
  _NDIS_MINIPORT_BLOCK *v17; // rbx
  unsigned int v18; // ecx
  size_t v19; // r8
  unsigned int SupportedStatistics; // ecx
  _NET_IF_ADMIN_STATUS ifAdminStatus; // ecx
  unsigned int ifMtu; // ecx
  ULONG64 Value; // rbx
  __int128 v24; // xmm0
  __int64 v25; // rax
  _QWORD *Handle; // rax
  unsigned int v27; // edx
  struct _NDIS_FILTER_BLOCK *v28; // r9
  struct _NDIS_FILTER_BLOCK *v29; // r8
  int appended; // esi
  NET_IFTYPE v31; // r9
  int v33; // eax
  unsigned __int16 *v34; // rax
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // cx
  unsigned int v37; // eax
  size_t v38; // r8
  char v39; // al
  unsigned __int16 v40; // ax
  __int16 v41; // ax
  unsigned int v42; // esi
  size_t v43; // r8
  size_t v44; // r8
  char *v45; // rcx
  char *v46; // rdx
  size_t v47; // r8
  int v48; // [rsp+28h] [rbp-79h]
  UINT32 v49; // [rsp+58h] [rbp-49h] BYREF
  _UNICODE_STRING Destination; // [rsp+60h] [rbp-41h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-31h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-11h] BYREF
  char v54; // [rsp+E8h] [rbp+47h]
  char v55; // [rsp+F0h] [rbp+4Fh]

  v55 = a2;
  Source.Buffer = L" ";
  *(_QWORD *)&Source.Length = 262146LL;
  v49 = 0;
  v9 = 0;
  v54 = 0;
  Destination = 0LL;
  DestinationString = 0LL;
  String = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_e5d52f028d6137a5aba31a802d839fee_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( a1 )
  {
    if ( a6 && *((_WORD *)a6 + 32) > 0x20u )
    {
      appended = -1073741811;
      goto LABEL_24;
    }
    if ( a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
    {
      appended = -1073741811;
    }
    else
    {
      v11 = 512;
      String.MaximumLength = 512;
      Pool2 = ExAllocatePool2(64LL, 1784LL, 1718174798LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 6291840;
        String.Buffer = (wchar_t *)(Pool2 + 1272);
        if ( !a6 )
        {
          if ( a7 )
          {
            *(_DWORD *)(Pool2 + 4) |= 2u;
            Miniport = a7->Miniport;
            *(_DWORD *)(Pool2 + 20) = -1;
            *(_DWORD *)(Pool2 + 28) = Miniport->IfBlock->AccessType;
            *(_DWORD *)(Pool2 + 32) = Miniport->IfBlock->DirectionType;
            FilterFriendlyName = a7->FilterFriendlyName;
            *(_DWORD *)(v13 + 36) = Miniport->IfBlock->ConnectionType;
            *(_BYTE *)(v13 + 40) = 0;
            Length = FilterFriendlyName->Length;
            if ( FilterFriendlyName->Length > 0x200u )
            {
              *(_WORD *)(v13 + 752) = 512;
              *(_WORD *)(v13 + 48) = 512;
            }
            else
            {
              *(_WORD *)(v13 + 752) = Length;
              v11 = Length;
              *(_WORD *)(v13 + 48) = Length;
              if ( !Length )
              {
LABEL_13:
                v17 = a7->Miniport;
                *(_BYTE *)(v13 + 738) = v17->IfBlock->ifHideInterfaceInUi;
                v18 = v17->IfBlock->ifPhysAddress.Length;
                *(_WORD *)(v13 + 42) = v18;
                *(_WORD *)(v13 + 644) = v18;
                *(_DWORD *)(v13 + 44) = 44565126;
                memmove((void *)(v13 + 646), v17->IfBlock->ifPhysAddress.Address, v18);
                v19 = *(unsigned __int16 *)(v13 + 42);
                *(_WORD *)(v13 + 678) = v19;
                memmove((void *)(v13 + 680), v17->IfBlock->PermanentPhysAddress.Address, v19);
                *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
                SupportedStatistics = v17->IfBlock->SupportedStatistics;
                *(_DWORD *)(v13 + 88) = a7->MediaType;
                *(_DWORD *)(v13 + 92) = a7->PhysicalMediaType;
                *(_DWORD *)(v13 + 84) = SupportedStatistics;
                ifAdminStatus = v17->IfBlock->ifAdminStatus;
                *(_QWORD *)(v13 + 720) = a7->XmitLinkSpeed;
                *(_QWORD *)(v13 + 728) = a7->RcvLinkSpeed;
                *(_DWORD *)(v13 + 740) = a7->MediaConnectState;
                *(_DWORD *)(v13 + 744) = a7->MediaDuplexState;
                *(_DWORD *)(v13 + 712) = ifAdminStatus;
                *(_DWORD *)(v13 + 632) = v17->IfBlock->ifOperStatus;
                *(_DWORD *)(v13 + 636) = v17->IfBlock->ifOperStatusFlags;
                ifMtu = v17->IfBlock->ifMtu;
                Value = a4->Value;
                *(_DWORD *)(v13 + 640) = ifMtu;
                goto LABEL_14;
              }
            }
            memmove((void *)(v13 + 754), a7->FilterFriendlyName->Buffer, v11);
            goto LABEL_13;
          }
          v39 = v55;
          if ( v55 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(0x18u, *((_BYTE *)a3 + 1616) & 1, &v49);
            if ( appended )
            {
LABEL_23:
              ExFreePoolWithTag((PVOID)v13, 0);
              goto LABEL_24;
            }
            v9 = v49;
            *((_WORD *)a3 + 7) = 24;
            v54 = 1;
            *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 1) & 0xFFFF000000000000uLL ^ ((unsigned __int64)v9 << 24) & 0xFFFFFF000000LL;
            appended = ExUuidCreate((UUID *)a3 + 2);
            if ( appended < 0 )
              goto LABEL_17;
            v39 = v55;
          }
          Value = *((_QWORD *)a3 + 1);
          *(_QWORD *)(v13 + 28) = 1LL;
          *(_DWORD *)(v13 + 36) = 1;
          *(_BYTE *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 88) = 17LL;
          *(_DWORD *)(v13 + 640) = 1500;
          *(_QWORD *)(v13 + 720) = 0x40000000LL;
          *(_QWORD *)(v13 + 728) = 0x40000000LL;
          *(_DWORD *)(v13 + 740) = 1;
          *(_DWORD *)(v13 + 744) = 2;
          *(_QWORD *)(v13 + 632) = 1LL;
          *(_OWORD *)(v13 + 52) = *((_OWORD *)a3 + 2);
          if ( v39 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_14011D102);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_17;
            appended = RtlIntegerToUnicodeString(*(_DWORD *)(*((_QWORD *)a1 + 6) + 16LL), 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_17;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_17;
            v40 = Destination.Length;
            *(_WORD *)(v13 + 752) = Destination.Length;
            *(_WORD *)(v13 + 48) = v40;
            RtlInitUnicodeString(&DestinationString, &xmmword_14011D312);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 || (appended = RtlAppendUnicodeStringToString(&Destination, &String), appended < 0) )
            {
LABEL_17:
              v31 = 24;
              goto LABEL_18;
            }
            v41 = *(_WORD *)(v13 + 48);
            v42 = Destination.Length;
            v43 = *(unsigned __int16 *)(v13 + 752);
            *(_WORD *)(v13 + 116) = Destination.Length;
            *((_WORD *)a3 + 24) = v41;
            memmove((char *)a3 + 50, (const void *)(v13 + 754), v43);
            v44 = v42;
            *((_WORD *)a3 + 282) = v42;
            v45 = (char *)a3 + 566;
            v46 = (char *)(v13 + 118);
          }
          else
          {
            if ( !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 48))
              || !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 564)) )
            {
              appended = -1073676267;
LABEL_18:
              if ( v54 )
                NdisIfFreeNetLuidIndex(v31, v9);
              goto LABEL_23;
            }
            v47 = *((unsigned __int16 *)a3 + 24);
            *(_WORD *)(v13 + 48) = v47;
            memmove((void *)(v13 + 754), (char *)a3 + 50, v47);
            v44 = *((unsigned __int16 *)a3 + 282);
            v46 = (char *)a3 + 566;
            *(_WORD *)(v13 + 116) = v44;
            v45 = (char *)(v13 + 118);
          }
          memmove(v45, v46, v44);
          *(_DWORD *)(v13 + 712) = 1;
LABEL_14:
          v24 = *((_OWORD *)a1 + 2);
          v25 = *((_QWORD *)a1 + 6);
          *(_WORD *)(v13 + 50) = 754;
          *(_OWORD *)(v13 + 68) = v24;
          *(_DWORD *)(v13 + 96) = *(_DWORD *)(v25 + 16);
          *(_WORD *)(v13 + 736) = 0;
          *(_OWORD *)(v13 + 100) = v24;
          Handle = ndisIfNdisProviderGetHandle(a3 != 0LL);
          v29 = a7;
          if ( !a7 )
            v29 = v28;
          appended = ndisIfRegisterInterfaceEx(Handle, Value, (__int64)v29, v13, a8, v27, &v49);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork((__int64)a1, (union _NET_LUID_LH)Value);
            goto LABEL_23;
          }
          goto LABEL_17;
        }
        v33 = *((unsigned __int16 *)a6 + 8) - 1;
        *(_QWORD *)(v13 + 28) = 2LL;
        *(_DWORD *)(v13 + 36) = 1;
        switch ( v33 )
        {
          case 0:
            switch ( *((_DWORD *)a6 + 14) )
            {
              case 9:
                goto LABEL_39;
              case 0xA:
                goto LABEL_40;
              case 0xB:
                *(_DWORD *)(v13 + 32) = 2;
                goto LABEL_40;
              case 0xC:
                goto LABEL_39;
            }
            break;
          case 22:
LABEL_39:
            *(_DWORD *)(v13 + 36) = 3;
            goto LABEL_40;
          case 36:
            *(_DWORD *)(v13 + 28) = 4;
            break;
          case 130:
LABEL_40:
            *(_DWORD *)(v13 + 28) = 3;
            break;
          default:
            break;
        }
        *(_DWORD *)(v13 + 20) = -1;
        *(_DWORD *)(v13 + 4) = 28;
        if ( *((_BYTE *)a6 + 133) )
          *(_DWORD *)(v13 + 4) = 29;
        if ( *((_BYTE *)a6 + 132) )
          *(_BYTE *)(v13 + 738) = 1;
        *(_DWORD *)(v13 + 88) = *((_DWORD *)a6 + 14);
        *(_DWORD *)(v13 + 92) = *((_DWORD *)a6 + 15);
        v34 = *(unsigned __int16 **)a6;
        *(_DWORD *)(v13 + 24) = 0;
        *(_BYTE *)(v13 + 40) = 0;
        *(_DWORD *)(v13 + 42) = 0;
        *(_WORD *)(v13 + 46) = 0;
        *(_QWORD *)(v13 + 636) = 0LL;
        *(_WORD *)(v13 + 644) = 0;
        *(_WORD *)(v13 + 678) = 0;
        *(_QWORD *)(v13 + 720) = 0LL;
        *(_QWORD *)(v13 + 728) = 0LL;
        *(_QWORD *)(v13 + 740) = 0LL;
        *(_DWORD *)(v13 + 712) = 2;
        *(_DWORD *)(v13 + 632) = 6;
        v35 = *v34;
        if ( *v34 <= 0x200u )
        {
          *(_WORD *)(v13 + 116) = v35;
          if ( !v35 )
          {
LABEL_50:
            v36 = **((_WORD **)a6 + 1);
            if ( v36 )
            {
              if ( v36 > 0x200u )
                v36 = 512;
              *(_WORD *)(v13 + 752) = v36;
              memmove((void *)(v13 + 754), *(const void **)(*((_QWORD *)a6 + 1) + 8LL), v36);
              *(_WORD *)(v13 + 48) = *(_WORD *)(v13 + 752);
            }
            v37 = *((unsigned __int16 *)a6 + 32);
            *(struct _GUID *)(v13 + 52) = *a5;
            if ( (_WORD)v37 )
            {
              *(_DWORD *)(v13 + 44) = 44565126;
              *(_WORD *)(v13 + 42) = v37;
              *(_WORD *)(v13 + 644) = v37;
              memmove((void *)(v13 + 646), (char *)a6 + 66, v37);
              v38 = *(unsigned __int16 *)(v13 + 42);
              *(_WORD *)(v13 + 678) = v38;
              memmove((void *)(v13 + 680), (char *)a6 + 100, v38);
            }
            Value = a4->Value;
            goto LABEL_14;
          }
        }
        else
        {
          v35 = 512;
          *(_WORD *)(v13 + 116) = 512;
        }
        memmove((void *)(v13 + 118), *(const void **)(*(_QWORD *)a6 + 8LL), v35);
        goto LABEL_50;
      }
      appended = -1073741670;
    }
  }
  else
  {
    appended = -1073741811;
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v48);
  return (unsigned int)appended;
}
