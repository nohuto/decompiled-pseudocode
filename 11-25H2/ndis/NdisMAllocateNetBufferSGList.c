/*
 * XREFs of NdisMAllocateNetBufferSGList @ 0x140048000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x140048630 (-RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z.c)
 *     PplpLazyInitializeLookasideList @ 0x140048910 (PplpLazyInitializeLookasideList.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisMAllocateNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PNET_BUFFER NetBuffer,
        PVOID Context,
        ULONG Flags,
        PVOID ScatterGatherListBuffer,
        ULONG ScatterGatherListBufferSize)
{
  __int64 v6; // r10
  char v7; // r14
  int v8; // esi
  int v10; // eax
  unsigned int Number; // ebp
  __int64 v13; // r9
  unsigned int DataOffset; // ecx
  _MDL *MdlChain; // rbx
  ULONG i; // eax
  unsigned int DataLength; // eax
  char *v18; // r15
  unsigned __int16 *p_Reserved; // r12
  NDIS_STATUS v20; // r8d
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  PLOOKASIDE_LIST_EX v26; // rcx
  PVOID v27; // rax
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // rdx
  ULONG v31; // r13d
  struct _MDL *v32; // r15
  void *Pool2; // rax
  struct _MDL *Mdl; // rax
  unsigned __int16 v35; // ax
  char v36[8]; // [rsp+28h] [rbp-A0h]
  int v37; // [rsp+38h] [rbp-90h]
  int v38; // [rsp+38h] [rbp-90h]
  _QWORD *v39; // [rsp+60h] [rbp-68h]
  _QWORD *v40; // [rsp+68h] [rbp-60h]
  unsigned __int16 *v41; // [rsp+70h] [rbp-58h]
  __int64 v42; // [rsp+78h] [rbp-50h]
  __int64 v43; // [rsp+80h] [rbp-48h]
  PLOOKASIDE_LIST_EX Lookaside; // [rsp+88h] [rbp-40h] BYREF
  unsigned __int16 *Entry; // [rsp+D0h] [rbp+8h]
  PVOID Entrya; // [rsp+D0h] [rbp+8h]
  PVOID Entryb; // [rsp+D0h] [rbp+8h]
  ULONG Length; // [rsp+E8h] [rbp+20h]
  signed int Lengtha; // [rsp+E8h] [rbp+20h]

  v6 = *((_QWORD *)NdisMiniportDmaHandle + 1);
  v43 = v6;
  v7 = Flags & 1;
  v42 = 0LL;
  LOWORD(v8) = 0;
  v10 = *(_DWORD *)(v6 + 48);
  Number = -1;
  if ( v10 || *(_DWORD *)(v6 + 80) )
  {
    v13 = *(_QWORD *)(v6 + 40);
    v8 = *(_DWORD *)(v6 + 80);
    v42 = v13;
    if ( !v13 )
    {
      v13 = *(_QWORD *)(v6 + 40);
      v42 = v13;
    }
    if ( (v10 & 0x400) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v13 + ndisPcwPerCpuDataStride * Number + 80);
    }
    if ( (v8 & 0x400) != 0 )
    {
      if ( Number == -1 )
        Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v13 + ndisPcwPerCpuDataStride * Number + 384) = __rdtsc();
    }
  }
  if ( *((_QWORD *)NdisMiniportDmaHandle + 2) )
    ndisBugCheckEx(0x28uLL, 3uLL, 0LL, 0LL);
  DataOffset = NetBuffer->DataOffset;
  MdlChain = NetBuffer->MdlChain;
  if ( !MdlChain )
    return -1073741823;
  for ( i = MdlChain->ByteCount; DataOffset >= i; i = MdlChain->ByteCount )
  {
    MdlChain = MdlChain->Next;
    DataOffset -= i;
  }
  DataLength = NetBuffer->DataLength;
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
  Length = DataLength + DataOffset;
  if ( DataLength + DataOffset < DataLength )
    return -1073676268;
  v18 = (char *)MdlChain->StartVa + MdlChain->ByteOffset;
  p_Reserved = &NetBuffer->Reserved;
  if ( v7 )
    *p_Reserved |= 4u;
  v39 = (char *)NdisMiniportDmaHandle + 40;
  if ( ScatterGatherListBuffer )
  {
    v40 = (char *)NdisMiniportDmaHandle + 48;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, _QWORD, PVOID, char, PVOID, ULONG))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 5),
            *(_QWORD *)(v6 + 3824),
            MdlChain,
            v18,
            DataLength + DataOffset,
            *((_QWORD *)NdisMiniportDmaHandle + 6),
            Context,
            v7,
            ScatterGatherListBuffer,
            ScatterGatherListBufferSize);
    if ( v20 >= 0 )
      goto LABEL_16;
    Entry = &NetBuffer->Reserved;
  }
  else
  {
    Entry = &NetBuffer->Reserved;
    v40 = (char *)NdisMiniportDmaHandle + 48;
  }
  v24 = *((_QWORD *)NdisMiniportDmaHandle + 10);
  v41 = &NetBuffer->Reserved;
  v25 = (unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7;
  v26 = (PLOOKASIDE_LIST_EX)(v25 + v24 + 64);
  Lookaside = v26;
  if ( !LOBYTE(v26[1].L.Depth) )
  {
    PplpLazyInitializeLookasideList(v24, v25 + v24 + 64);
    v26 = Lookaside;
    v41 = Entry;
  }
  v27 = ExAllocateFromLookasideListEx(v26);
  Entrya = v27;
  if ( v27 )
  {
    *p_Reserved |= 1u;
    v28 = v43;
    NetBuffer->NdisReserved[0] = v27;
    LOBYTE(v37) = v7;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int, PVOID, _DWORD))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL) + 112LL))(
            *((_QWORD *)NdisMiniportDmaHandle + 5),
            *(_QWORD *)(v43 + 3824),
            MdlChain,
            v18,
            Length,
            *((_QWORD *)NdisMiniportDmaHandle + 6),
            Context,
            v37,
            v27,
            *((_DWORD *)NdisMiniportDmaHandle + 18));
    if ( v20 >= 0 )
      goto LABEL_16;
    NetBuffer->NdisReserved[0] = 0LL;
    *v41 &= ~1u;
    v29 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v39 = (char *)NdisMiniportDmaHandle + 40;
    v40 = (char *)NdisMiniportDmaHandle + 48;
    v30 = v29 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7) + 64;
    Lookaside = (PLOOKASIDE_LIST_EX)v30;
    if ( !*(_BYTE *)(v30 + 112) )
    {
      PplpLazyInitializeLookasideList(v29, v30);
      v39 = (char *)NdisMiniportDmaHandle + 40;
      v40 = (char *)NdisMiniportDmaHandle + 48;
    }
    ExFreeToLookasideListEx(Lookaside, Entrya);
    v41 = &NetBuffer->Reserved;
  }
  else
  {
    v28 = v43;
  }
  v31 = Length;
  LOBYTE(v37) = v7;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*v39 + 8LL)
                                                                                             + 88LL))(
          *v39,
          *(_QWORD *)(v28 + 3824),
          MdlChain,
          v18,
          Length,
          *v40,
          Context,
          v37);
  if ( v20 < 0 )
  {
    v32 = 0LL;
    Lookaside = 0LL;
    Pool2 = (void *)ExAllocatePool2(66LL, Length, 1735607374);
    Entryb = Pool2;
    if ( Pool2 )
    {
      Mdl = IoAllocateMdl(Pool2, Length, 0, 0, 0LL);
      v32 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
        v32->Next = 0LL;
        if ( !v7
          || (Lengtha = RtlCopyMdlToBuffer(MdlChain, 0LL, Entryb, Length, (unsigned __int64 *)&Lookaside),
              v20 = Lengtha,
              Lengtha >= 0) )
        {
          NetBuffer->NdisReserved[0] = v32;
          *v41 |= 2u;
          LOBYTE(v38) = v7;
          Lengtha = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MDL *, PVOID, ULONG, _QWORD, PVOID, int))(*(_QWORD *)(*v39 + 8LL) + 88LL))(
                      *v39,
                      *(_QWORD *)(v28 + 3824),
                      v32,
                      Entryb,
                      v31,
                      *v40,
                      Context,
                      v38);
          v20 = Lengtha;
          if ( Lengtha >= 0 )
            goto LABEL_16;
        }
      }
      else
      {
        v20 = -1073741670;
        Lengtha = -1073741670;
      }
      Pool2 = Entryb;
    }
    else
    {
      v20 = -1073741670;
      Lengtha = -1073741670;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v36 = v20;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        3u,
        0x31u,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
        *(_QWORD *)v36);
      v20 = Lengtha;
      Pool2 = Entryb;
    }
    if ( v32 )
    {
      IoFreeMdl(v32);
      v20 = Lengtha;
      Pool2 = Entryb;
    }
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      v20 = Lengtha;
    }
    NetBuffer->NdisReserved[0] = 0LL;
    v35 = NetBuffer->Reserved & 0xFFFD;
    NetBuffer->Reserved = v35;
    if ( v20 < 0 )
      NetBuffer->Reserved = v35 & 0xFFFB;
  }
LABEL_16:
  if ( (v8 & 0x400) != 0 )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    v22 = v42 + ndisPcwPerCpuDataStride * Number + ndisPcwOffsetToPerCpuData;
    v23 = __rdtsc();
    *(_QWORD *)(v22 + 184) += (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - *(_QWORD *)(v22 + 384);
    *(_QWORD *)(v22 + 384) = 0LL;
  }
  return v20;
}
