/*
 * XREFs of NdisCoCreateVc @ 0x1400D0AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  NDIS_HANDLE *v5; // rsi
  char v7; // r12
  _QWORD *v8; // r15
  NDIS_STATUS v9; // ebp
  _DWORD *v10; // rbx
  int v11; // r13d
  __int64 Pool2; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdi
  LARGE_INTEGER *v16; // r9
  LARGE_INTEGER v17; // rcx
  __int64 v18; // rax
  _QWORD *QuadPart; // rcx
  void (__fastcall *v20)(void *, struct _NDIS_PACKET **, unsigned int); // r12
  NDIS_HANDLE v21; // rax
  NDIS_HANDLE v22; // rcx
  NDIS_HANDLE v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  NDIS_HANDLE *v31; // r12
  NDIS_HANDLE *v32; // r13
  __int64 (__fastcall **v33)(_QWORD, _QWORD, _QWORD); // rax
  _DWORD *v34; // r8
  NDIS_STATUS v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  NDIS_HANDLE v39; // rcx
  KSPIN_LOCK *v40; // r8
  int v41; // edx
  _QWORD *v42; // rax
  void (__fastcall *v43)(_QWORD); // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 v49; // dl
  bool v50; // cf
  void (__fastcall *v51)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v52)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (*v53)(int, void *, struct _NDIS_PACKET *); // rdx
  void (*v54)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v55)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  KIRQL NewIrql; // [rsp+40h] [rbp-58h]
  int v58; // [rsp+44h] [rbp-54h]
  LARGE_INTEGER *v59; // [rsp+48h] [rbp-50h]
  char Increment; // [rsp+A0h] [rbp+8h]
  char v61; // [rsp+A8h] [rbp+10h]

  v5 = (NDIS_HANDLE *)NdisAfHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      19,
      10,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  }
  v59 = (LARGE_INTEGER *)*((_QWORD *)NdisBindingHandle + 2);
  if ( v5 && ((_DWORD)v5[1] & 1) != 0 )
  {
    v7 = 1;
    v61 = 1;
  }
  else
  {
    v7 = 0;
    v61 = 0;
    if ( !v5 )
    {
LABEL_8:
      Increment = 0;
      goto LABEL_9;
    }
  }
  Increment = 1;
  if ( NdisBindingHandle != v5[46] )
    goto LABEL_8;
LABEL_9:
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  v58 = v11;
  if ( v8 && !v11 )
  {
    v9 = -1073741823;
    goto LABEL_117;
  }
  Pool2 = ExAllocatePool2(64LL, 344LL, 1868776526LL);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_117;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *((_QWORD *)v10 + 20) = v10 + 38;
  *((_QWORD *)v10 + 19) = v10 + 38;
  *((_QWORD *)v10 + 5) = v10 + 8;
  *((_QWORD *)v10 + 4) = v10 + 8;
  *((_QWORD *)v10 + 7) = v10 + 12;
  *((_QWORD *)v10 + 6) = v10 + 12;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        12,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    v15 = v8[9];
    *((_QWORD *)v10 + 25) = v8[25];
LABEL_26:
    v16 = v59;
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      19,
      11,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
  }
  v14 = ExAllocatePool2(64LL, 144LL, 1868776526LL);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_117;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 8));
  v16 = v59;
  *(_QWORD *)(v15 + 120) = v59;
  if ( !v7 )
  {
    v9 = (*((__int64 (__fastcall **)(LARGE_INTEGER, _DWORD *, _DWORD *))NdisBindingHandle + 130))(v59[3], v10, v10 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag((PVOID)v15, 0);
      goto LABEL_117;
    }
    *((_BYTE *)v10 + 336) = 1;
    goto LABEL_26;
  }
LABEL_27:
  v50 = LOBYTE(v16[4].LowPart) < 6u;
  v17 = v16[470];
  *((_QWORD *)v10 + 26) = *(_QWORD *)(v17.QuadPart + 280);
  if ( v50 )
    v18 = 0LL;
  else
    v18 = *(_QWORD *)(v17.QuadPart + 536);
  *((_QWORD *)v10 + 30) = v18;
  if ( !v7 )
  {
    QuadPart = (_QWORD *)v16[470].QuadPart;
    *((_QWORD *)v10 + 27) = QuadPart[64];
    *((_QWORD *)v10 + 28) = QuadPart[65];
    *((_QWORD *)v10 + 29) = QuadPart[66];
  }
  v20 = 0LL;
  *((_QWORD *)v10 + 24) = v16;
  *((_QWORD *)v10 + 9) = v15;
  *((_QWORD *)v10 + 8) = v5;
  *v10 = 1;
  *((_QWORD *)v10 + 1) = v15 + 4;
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        13,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    *((_QWORD *)v10 + 3) = ProtocolVcContext;
    *((_QWORD *)v10 + 10) = NdisBindingHandle;
    *(_QWORD *)(v15 + 40) = v10;
    v44 = *((_QWORD *)v10 + 3);
    v10[22] = 1;
    *(_QWORD *)(v15 + 24) = v44;
    *(_QWORD *)(v15 + 16) = NdisBindingHandle;
    v45 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v45 + 56) < 6u )
    {
      v46 = 0LL;
      *(_QWORD *)(v15 + 48) = *(_QWORD *)(v45 + 304);
      v47 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      *(_QWORD *)(v15 + 64) = 0LL;
    }
    else
    {
      *(_QWORD *)(v15 + 64) = *(_QWORD *)(v45 + 216);
      v46 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v47 = 0LL;
      *(_QWORD *)(v15 + 48) = 0LL;
    }
    *(_QWORD *)(v15 + 72) = v46;
    *(_QWORD *)(v15 + 56) = v47;
    *((_QWORD *)v10 + 21) = *((_QWORD *)NdisBindingHandle + 134);
    v48 = *((_QWORD *)NdisBindingHandle + 135);
    *((_QWORD *)v10 + 18) = ProtocolVcContext;
    *((_QWORD *)v10 + 22) = v48;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)NdisBindingHandle + 70,
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
LABEL_96:
    if ( v9 )
      goto LABEL_117;
    goto LABEL_97;
  }
  v50 = *((_DWORD *)v5 + 99) < 6u;
  *((_QWORD *)v10 + 10) = v5[46];
  *((_QWORD *)v10 + 17) = v5[5];
  if ( v50 )
  {
    v21 = v5[25];
    v22 = v5[22];
    v23 = v5[17];
  }
  else
  {
    v21 = v5[44];
    v22 = v5[41];
    v23 = v5[36];
  }
  *((_QWORD *)v10 + 14) = v23;
  *((_QWORD *)v10 + 15) = v22;
  *((_QWORD *)v10 + 16) = v21;
  if ( *((_DWORD *)v5 + 98) >= 6u )
    v24 = v5[4];
  else
    v24 = v5[3];
  *((_QWORD *)v10 + 21) = v24[12];
  *((_QWORD *)v10 + 22) = v24[13];
  *((_QWORD *)v10 + 23) = v24[14];
  if ( v8 )
    *(_DWORD *)(v15 + 4) |= 0x10u;
  if ( v11 )
  {
    if ( Increment )
    {
      if ( v8 )
      {
        *(_QWORD *)(v15 + 40) = v8;
        *((_DWORD *)v8 + 22) = 0;
      }
      else
      {
        *(_QWORD *)(v15 + 16) = v5[46];
        v28 = *((_QWORD *)v5[46] + 3);
        if ( *(_BYTE *)(v28 + 56) < 6u )
        {
          v30 = 0LL;
          *(_QWORD *)(v15 + 56) = *(_QWORD *)(v28 + 312);
          v29 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
          *(_QWORD *)(v15 + 64) = 0LL;
        }
        else
        {
          *(_QWORD *)(v15 + 64) = *(_QWORD *)(v28 + 216);
          v29 = 0LL;
          v30 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
          *(_QWORD *)(v15 + 56) = 0LL;
        }
        *(_QWORD *)(v15 + 72) = v30;
        *(_QWORD *)(v15 + 48) = v29;
      }
      *(_QWORD *)(v15 + 32) = v10;
    }
    else
    {
      *(_QWORD *)(v15 + 16) = v5[46];
      v36 = *((_QWORD *)v5[46] + 3);
      if ( *(_BYTE *)(v36 + 56) < 6u )
      {
        v38 = 0LL;
        *(_QWORD *)(v15 + 56) = *(_QWORD *)(v36 + 312);
        v37 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
        *(_QWORD *)(v15 + 64) = 0LL;
      }
      else
      {
        *(_QWORD *)(v15 + 64) = *(_QWORD *)(v36 + 216);
        v37 = 0LL;
        v38 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      *(_QWORD *)(v15 + 72) = v38;
      *(_QWORD *)(v15 + 48) = v37;
      *(_QWORD *)(v15 + 40) = v10;
      if ( v8 )
      {
        *(_QWORD *)(v15 + 32) = v8;
        *((_DWORD *)v8 + 22) = 1;
        goto LABEL_57;
      }
    }
    v10[22] = 1;
    goto LABEL_57;
  }
  *(_QWORD *)(v15 + 16) = v5[46];
  v25 = *((_QWORD *)v5[46] + 3);
  if ( *(_BYTE *)(v25 + 56) < 6u )
  {
    v27 = 0LL;
    *(_QWORD *)(v15 + 56) = *(_QWORD *)(v25 + 312);
    v26 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
    *(_QWORD *)(v15 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)(v15 + 64) = *(_QWORD *)(v25 + 216);
    v26 = 0LL;
    v27 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
    *(_QWORD *)(v15 + 56) = 0LL;
  }
  *(_QWORD *)(v15 + 72) = v27;
  *(_QWORD *)(v15 + 48) = v26;
  v10[22] = 1;
  if ( Increment )
    *(_QWORD *)(v15 + 40) = v10;
  else
    *(_QWORD *)(v15 + 32) = v10;
LABEL_57:
  v31 = (NDIS_HANDLE *)(v10 + 36);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 2);
  v32 = (NDIS_HANDLE *)(v10 + 6);
  v33 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v5[46];
  if ( NdisBindingHandle == v33 )
  {
    v50 = *((_DWORD *)v5 + 98) < 6u;
    v34 = v10 + 36;
    *v32 = ProtocolVcContext;
    if ( v50 )
      v35 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v5[3] + 1))(v5[6], v10, v34);
    else
      v35 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v5[4] + 1))(v5[6], v10, v34);
    v9 = v35;
    if ( v61 )
      *((_QWORD *)v10 + 25) = *v31;
  }
  else
  {
    v39 = v5[47];
    *v31 = ProtocolVcContext;
    v9 = ((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v33)[132](v39, v10, v10 + 6);
  }
  if ( v9 )
  {
LABEL_74:
    if ( !v8 )
      goto LABEL_76;
    goto LABEL_75;
  }
  if ( !v8 || v58 && !Increment )
  {
    *(_QWORD *)(v15 + 24) = *v32;
    goto LABEL_74;
  }
LABEL_75:
  *(_DWORD *)(v15 + 4) &= ~0x10u;
LABEL_76:
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 2, NewIrql);
  if ( v9 )
  {
    v20 = 0LL;
    if ( !v8 )
    {
      if ( !v61 )
      {
        v43 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 27);
        if ( v43 )
          v43(*((_QWORD *)v10 + 25));
      }
      ExFreePoolWithTag((PVOID)v15, 0);
    }
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_96;
  }
  v40 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
  if ( Increment )
  {
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 70, (PLIST_ENTRY)v10 + 2, v40);
    v50 = *((_DWORD *)v5 + 98) < 6u;
    *((_QWORD *)v10 + 13) = *v31;
    if ( v50 )
      v42 = v5[3];
    else
      v42 = v5[4];
    v20 = 0LL;
    *((_QWORD *)v10 + 12) = v42[2];
    if ( !v61 )
      ExInterlockedInsertHeadList((PLIST_ENTRY)v5[5] + 70, (PLIST_ENTRY)(v10 + 38), (PKSPIN_LOCK)v5[5] + 29);
  }
  else
  {
    *((_QWORD *)v10 + 13) = *((_QWORD *)v10 + 3);
    *((_QWORD *)v10 + 12) = *((_QWORD *)v5[46] + 133);
    ExInterlockedInsertHeadList((PLIST_ENTRY)NdisBindingHandle + 70, (PLIST_ENTRY)(v10 + 38), v40);
    ExInterlockedInsertHeadList((PLIST_ENTRY)v5[46] + 70, (PLIST_ENTRY)v10 + 2, (PKSPIN_LOCK)v5[46] + 29);
    v20 = 0LL;
  }
LABEL_97:
  v49 = *(_BYTE *)(*((_QWORD *)v10 + 24) + 32LL);
  if ( v5 )
    v50 = *(_BYTE *)(*((_QWORD *)v5[46] + 3) + 56LL) < 6u;
  else
    v50 = *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) < 6u;
  if ( v50 )
  {
    if ( v49 < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v41,
          19,
          17,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v51 = 0LL;
      v52 = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
      v20 = ndisCoSendPacketsToNdisPackets;
      v54 = 0LL;
      v53 = ndisMCoSendCompleteToNdisPacket;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v41,
          19,
          16,
          (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
      }
      v52 = 0LL;
      v51 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
      v53 = 0LL;
      v54 = ndisMCoSendNetBufferListsCompleteToNdisPackets;
      v20 = ndisCoSendPacketsToNetBufferLists;
    }
    v55 = 0LL;
  }
  else if ( v49 < 6u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v41) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v41,
        19,
        15,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    v51 = 0LL;
    v52 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
    v53 = (void (*)(int, void *, struct _NDIS_PACKET *))ndisMCoSendCompleteToNetBufferLists;
    v54 = 0LL;
    v55 = ndisCoSendNetBufferListsToNdisPacket;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v41) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v41,
        19,
        14,
        (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids);
    }
    v51 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
    v52 = 0LL;
    v53 = 0LL;
    v54 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisMCoSendNetBufferListsCompleteToNetBufferLists;
    v55 = (void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, unsigned int))ndisCoSendNetBufferListsToNetBufferLists;
  }
  *((_QWORD *)v10 + 31) = v55;
  *((_QWORD *)v10 + 32) = v54;
  *((_QWORD *)v10 + 33) = v20;
  *((_QWORD *)v10 + 34) = v53;
  *((_QWORD *)v10 + 35) = v52;
  *((_QWORD *)v10 + 36) = v51;
  *((LARGE_INTEGER *)v10 + 39) = ExInterlockedAddLargeInteger(v59 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_117:
  *NdisVcHandle = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_de7b4475eb543019aeb186df8ee4bca2_Traceguids,
      (char)v10,
      v9);
  return v9;
}
