/*
 * XREFs of ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14007BD10
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x140162170 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1400137C0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisNblTrackerDeregisterComponent @ 0x14004EFE0 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x14004F210 (-ndisFreePerProcessorSlot@@YAXPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFreeOpenBlock(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  unsigned __int64 v4; // rbx
  ULONG SetBits; // edx
  _DWORD *v6; // r8
  int v7; // ecx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // r9
  ULONG_PTR v9; // rcx
  void *v10; // rcx
  void *v11; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v2 = (void *)P[87];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    P[87] = 0LL;
  }
  v3 = (void *)P[88];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    P[88] = 0LL;
  }
  NdisNblTrackerDeregisterComponent(P[73]);
  v4 = P[74];
  if ( (v4 & 0xFFFFFFFFFFFFFFFCuLL) != 0 || v4 == 1 )
  {
    if ( v4 == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(v4 + 1) )
    {
      if ( *(_BYTE *)(v4 + 1) == 1 )
      {
        SetBits = 0;
        if ( *(_BYTE *)(v4 + 2) )
        {
          v6 = (_DWORD *)(v4 + 64);
          while ( ((*v6 >> 1) & 0x7FFF) == *v6 >> 17 )
          {
            ++SetBits;
            v6 += 16;
            if ( SetBits >= *(unsigned __int8 *)(v4 + 2) )
              goto LABEL_14;
          }
          goto LABEL_23;
        }
      }
    }
    else
    {
      BitMapHeader.SizeOfBitMap = *(unsigned __int8 *)(v4 + 2);
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.Buffer = (unsigned int *)(v4 + 16);
      SetBits = RtlFindSetBits(&BitMapHeader, 1u, 0);
      if ( SetBits != -1 )
        goto LABEL_23;
      v7 = 0;
      if ( *(_BYTE *)(v4 + 3) )
      {
        v8 = *(_NDIS_REFCOUNT_TAGGED_ENTRY **)(v4 + 8);
        while ( !v8[v7].RefCount )
        {
          if ( ++v7 >= (unsigned int)*(unsigned __int8 *)(v4 + 3) )
            goto LABEL_14;
        }
        SetBits = v8[v7].Tag;
LABEL_23:
        if ( SetBits == -2 )
        {
LABEL_24:
          ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v4);
          ExFreePoolWithTag((PVOID)v4, 0);
          goto LABEL_25;
        }
LABEL_33:
        ndisBugCheckEx(0x1EuLL, 4uLL, v4, SetBits);
      }
    }
LABEL_14:
    if ( (*(_BYTE *)v4 & 2) == 0 )
      goto LABEL_24;
    SetBits = 255;
    goto LABEL_33;
  }
LABEL_25:
  v9 = P[90];
  P[74] = 0LL;
  ndisFreePerProcessorSlot(v9, 0x6F6D444EuLL);
  v10 = (void *)P[60];
  P[90] = 0LL;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    P[60] = 0LL;
  }
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
  {
    v11 = (void *)P[128];
    if ( v11 )
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))v11)(P[128], 0LL);
      ExFreePoolWithTag(v11, 0);
    }
  }
  ExFreePoolWithTag(P, 0);
}
