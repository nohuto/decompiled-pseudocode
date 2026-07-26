/*
 * XREFs of NdisAllocateNetBufferPool @ 0x140055870
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x140055E60 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x140056140 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1400C6E50 (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  struct PPL_POOL_HANDLE__ *v2; // rbx
  bool v5; // r15
  int v6; // edx
  int v7; // r8d
  unsigned __int16 v8; // r9
  const struct _GUID *v9; // rcx
  UCHAR Revision; // al
  unsigned int Flags; // r15d
  SIZE_T DataSize; // rsi
  int v13; // r12d
  char v14; // al
  unsigned int v15; // r12d
  struct PPL_POOL_HANDLE__ *Pool; // rax
  unsigned int v17; // esi
  int v18; // edi
  KIRQL v19; // al
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  void *v23; // [rsp+78h] [rbp+10h] BYREF
  PVOID v24; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v5 = 0;
  RtlGetCallersAddress(&v23, &v24);
  v9 = &WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      21,
      10,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      (char)NdisHandle);
    v9 = &WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids;
  }
  if ( Parameters->Header.Type != 0x80 )
    goto LABEL_20;
  Revision = Parameters->Header.Revision;
  if ( !Revision )
    goto LABEL_20;
  if ( Revision >= 2u )
  {
    Flags = Parameters->Flags;
    if ( (Flags & 0xFFFFFFFE) != 0 )
      ndisBugCheckEx(0x2DuLL, 5uLL, Flags, 0LL);
    v5 = Flags & 1;
  }
  DataSize = Parameters->DataSize;
  v13 = 176;
  if ( !(_DWORD)DataSize )
    goto LABEL_14;
  if ( (unsigned int)DataSize <= 0x100000 )
  {
    v14 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize);
    v13 = MmSizeOfMdl((PVOID)0xFFF, DataSize) + DataSize - ((v14 - 1) & 7) + 183;
LABEL_14:
    v15 = (v13 + 7) & 0xFFFFFFF8;
    Pool = ndisPplCreatePool((unsigned int)v9, v15, Parameters->PoolTag, v8, 0);
    v2 = Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 25166092;
      *((_QWORD *)Pool + 5) = NdisHandle;
      *((_DWORD *)Pool + 9) = Parameters->PoolTag;
      if ( Parameters->DataSize )
      {
        *((_DWORD *)Pool + 20) |= 1u;
        *((_DWORD *)Pool + 21) = Parameters->DataSize;
        v17 = Parameters->DataSize;
        v18 = 7 - (((unsigned __int8)MmSizeOfMdl((PVOID)0xFFF, v17) - 1) & 7);
        *((_DWORD *)v2 + 22) = v18 + MmSizeOfMdl((PVOID)0xFFF, v17);
      }
      ndisPplConfigureVerifier((struct _NDIS_POOL_HEADER *)v2, v23, v5);
      *((_DWORD *)v2 + 8) = v15;
      KeInitializeSpinLock((PKSPIN_LOCK)v2 + 7);
      *((_QWORD *)v2 + 3) = (char *)v2 + 16;
      *((_QWORD *)v2 + 2) = (char *)v2 + 16;
      v19 = KeAcquireSpinLockRaiseToDpc(&qword_14011C940);
      v20 = qword_14011D0C0;
      v21 = (_QWORD *)((char *)v2 + 64);
      if ( *(__int64 **)(qword_14011D0C0 + 8) != &qword_14011D0C0 )
        __fastfail(3u);
      *v21 = qword_14011D0C0;
      *((_QWORD *)v2 + 9) = &qword_14011D0C0;
      *(_QWORD *)(v20 + 8) = v21;
      qword_14011D0C0 = (__int64)v2 + 64;
      KeReleaseSpinLock(&qword_14011C940, v19);
      *((_QWORD *)v2 + 6) = v23;
    }
    goto LABEL_20;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v2;
  WPP_RECORDER_SF_PP(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v6,
    v7,
    11,
    (__int64)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
    Parameters->DataSize);
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      21,
      12,
      (struct _GUID *)&WPP_cd3cd4c8e5733a8d9138b29e4c73b290_Traceguids,
      (char)NdisHandle,
      (char)v2);
  }
  return v2;
}
