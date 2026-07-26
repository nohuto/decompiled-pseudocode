/*
 * XREFs of NdisRegisterPoll @ 0x140154FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x14004FC40 (NdisConvertNtStatusToNdisStatus.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMiniportGetVerifierContext@@YAPEAXPEAX@Z @ 0x1400CCBA0 (-ndisMiniportGetVerifierContext@@YAPEAXPEAX@Z.c)
 *     ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX00AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1400DCC6C (--$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1400DCD00 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x1401553D4 (-Initialize@NdisPoll@@QEAAJXZ.c)
 */

__int64 __fastcall NdisRegisterPoll(_BYTE *a1, void *a2, ULONG_PTR a3, NdisPoll **a4)
{
  KIRQL CurrentIrql; // al
  int v8; // edx
  void (**v9)(void *, struct _NDIS_POLL_NOTIFICATION *); // rdx
  void (**v10)(void *, struct _NDIS_POLL_DATA *); // r8
  int v11; // edx
  NdisPoll *v12; // rbx
  int v14; // eax
  unsigned int v15; // esi
  void *VerifierContext; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+48h] [rbp-30h] BYREF
  void *v18; // [rsp+80h] [rbp+8h] BYREF
  void *v19; // [rsp+88h] [rbp+10h] BYREF

  v19 = a2;
  v18 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 1uLL, CurrentIrql, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      10,
      (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
      (char)a1);
  }
  *a4 = 0LL;
  if ( *(_BYTE *)a3 != 0x80
    || *(_BYTE *)(a3 + 1) != 1
    || *(_WORD *)(a3 + 2) < 0x18u
    || !*(_QWORD *)(a3 + 8)
    || !*(_QWORD *)(a3 + 16) )
  {
    ndisBugCheckEx(0x34uLL, 1uLL, 3uLL, a3);
  }
  if ( *a1 != 17 )
    ndisBugCheckEx(0x34uLL, 1uLL, 1uLL, (ULONG_PTR)a1);
  VerifierContext = ndisMiniportGetVerifierContext(a1);
  wil::make_unique_nothrow<NdisPoll,void * &,void * &,void * &,void (*const &)(void *,_NDIS_POLL_NOTIFICATION *),void (*const &)(void *,_NDIS_POLL_DATA *)>(
    (NdisPoll **)&P,
    &v18,
    &v19,
    &VerifierContext,
    v9,
    v10);
  v12 = (NdisPoll *)P;
  if ( P )
  {
    v14 = NdisPoll::Initialize((NdisPoll *)P);
    if ( v14 )
    {
      v15 = NdisConvertNtStatusToNdisStatus(v14);
      if ( v12 )
        NdisPoll::`scalar deleting destructor'(v12, 1);
      return v15;
    }
    else
    {
      *a4 = v12;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xCu,
          (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
          (char)a1,
          v12);
      return 0LL;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        1,
        (_DWORD)P + 11,
        (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids);
    }
    return 3221225626LL;
  }
}
