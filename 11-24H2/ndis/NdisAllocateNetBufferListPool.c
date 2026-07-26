/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x140055B30
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x14018D7A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x140055E60 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x140056140 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1400C6E50 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  struct PPL_POOL_HANDLE__ *v2; // rbx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r8d
  unsigned __int16 v8; // r9
  UCHAR Revision; // al
  unsigned __int8 fAllocateNetBuffer; // di
  int ContextSize; // r15d
  SIZE_T DataSize; // r12
  int v14; // r14d
  unsigned int v15; // r14d
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v17; // al
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int Flags; // eax
  int v21; // ebx
  int v22; // [rsp+40h] [rbp-48h]
  PVOID v23; // [rsp+48h] [rbp-40h] BYREF
  bool v24; // [rsp+A0h] [rbp+18h]
  void *v25; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v22 = 0;
  v24 = 0;
  RtlGetCallersAddress(&v25, &v23);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      21,
      10,
      (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
      (char)NdisHandle);
  }
  if ( Parameters->Header.Type != 0x80 )
    goto LABEL_4;
  Revision = Parameters->Header.Revision;
  if ( !Revision )
    goto LABEL_4;
  if ( Revision >= 2u )
  {
    Flags = Parameters->Flags;
    if ( (Flags & 0xFFFFFFFE) != 0 )
      ndisBugCheckEx(0x2DuLL, 4uLL, Flags, 0LL);
    v24 = Flags & 1;
  }
  fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
  ContextSize = Parameters->ContextSize;
  DataSize = Parameters->DataSize;
  v14 = 560;
  if ( !fAllocateNetBuffer )
    v14 = 384;
  if ( (_WORD)ContextSize )
  {
    if ( (ContextSize & 7) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        21,
        11,
        (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
        Parameters->ContextSize);
      goto LABEL_4;
    }
    v14 += ContextSize + 16;
  }
  if ( (_DWORD)DataSize )
  {
    if ( !fAllocateNetBuffer )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        21,
        12,
        (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids);
      goto LABEL_4;
    }
    if ( (unsigned int)DataSize > 0x100000 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v2;
      WPP_RECORDER_SF_PP(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        v7,
        13,
        (__int64)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
        Parameters->DataSize);
      goto LABEL_4;
    }
    v21 = 7 - (((unsigned __int8)MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) - 1) & 7);
    v22 = v21 + MmSizeOfMdl((PVOID)0xFFF, DataSize);
    v14 += DataSize + v22;
  }
  v15 = (v14 + 7) & 0xFFFFFFF8;
  Pool = ndisPplCreatePool(v6, v15, Parameters->PoolTag, v8, 1u);
  v2 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 25166093;
    *((_QWORD *)Pool + 6) = NdisHandle;
    *((_DWORD *)Pool + 9) = Parameters->PoolTag;
    *((_BYTE *)Pool + 40) = Parameters->ProtocolId;
    if ( fAllocateNetBuffer )
      *((_DWORD *)Pool + 11) |= 1u;
    if ( (_WORD)ContextSize )
    {
      *((_DWORD *)Pool + 11) |= 2u;
      *((_WORD *)Pool + 21) = ContextSize;
    }
    if ( (_DWORD)DataSize )
    {
      *((_DWORD *)Pool + 11) |= 4u;
      *((_DWORD *)Pool + 22) = DataSize;
      *((_DWORD *)Pool + 23) = v22;
    }
    ndisPplConfigureVerifier((struct _NDIS_POOL_HEADER *)Pool, v25, v24);
    *((_DWORD *)v2 + 8) = v15;
    KeInitializeSpinLock((PKSPIN_LOCK)v2 + 8);
    *((_QWORD *)v2 + 3) = (char *)v2 + 16;
    *((_QWORD *)v2 + 2) = (char *)v2 + 16;
    v17 = KeAcquireSpinLockRaiseToDpc(&qword_14011C948);
    v18 = qword_14011D0D0;
    v19 = (_QWORD *)((char *)v2 + 72);
    if ( *(__int64 **)(qword_14011D0D0 + 8) != &qword_14011D0D0 )
      __fastfail(3u);
    *v19 = qword_14011D0D0;
    *((_QWORD *)v2 + 10) = &qword_14011D0D0;
    *(_QWORD *)(v18 + 8) = v19;
    qword_14011D0D0 = (__int64)v2 + 72;
    KeReleaseSpinLock(&qword_14011C948, v17);
    *((_QWORD *)v2 + 7) = v25;
  }
LABEL_4:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      21,
      14,
      (struct _GUID *)&WPP_36a745c202a83a4a454afaf507a1e2bb_Traceguids,
      (char)NdisHandle,
      (char)v2);
  }
  return v2;
}
