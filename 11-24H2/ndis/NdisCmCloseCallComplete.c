/*
 * XREFs of NdisCmCloseCallComplete @ 0x1400CFC50
 * Callers:
 *     NdisClCloseCall @ 0x1400CF820 (NdisClCloseCall.c)
 * Callees:
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140006DD0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1400D01F0 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  unsigned int *v6; // rdi
  KIRQL v7; // dl
  unsigned int v8; // ebp
  __int64 v9; // r12
  __int64 v10; // rax
  void (__fastcall *v11)(_QWORD, __int64, __int64); // r13
  KSPIN_LOCK *v12; // rcx
  int v13; // edx
  __int64 v14; // [rsp+98h] [rbp+10h]

  v6 = (unsigned int *)((char *)NdisVcHandle + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, (_DWORD)NdisPartyHandle, 15);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v8 = *v6 & 0xFFFFFF9F;
  v14 = *((_QWORD *)NdisVcHandle + 3);
  *v6 = v8;
  if ( NdisPartyHandle )
    v9 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v9 = 0LL;
  v10 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 296);
  else
    v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v10 + 144);
  v12 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v12, v7);
  }
  else
  {
    *v6 = v8 & 0xFFFFFFF7;
    KeReleaseSpinLock(v12, v7);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisVcHandle + 8));
    if ( (v8 & 8) != 0 )
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  }
  ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  v11((unsigned int)Status, v14, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      19,
      16,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
      (char)NdisVcHandle);
  }
}
