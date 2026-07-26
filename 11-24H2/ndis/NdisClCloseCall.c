/*
 * XREFs of NdisClCloseCall @ 0x1400CF820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x140073BD0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     NdisCmCloseCallComplete @ 0x1400CFC50 (NdisCmCloseCallComplete.c)
 *     WPP_RECORDER_SF_qLLqD @ 0x1400D0334 (WPP_RECORDER_SF_qLLqD.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClCloseCall(NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle, PVOID Buffer, UINT Size)
{
  int *v8; // rsi
  __int64 v9; // rbx
  KIRQL v11; // al
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(_QWORD, __int64, PVOID, _QWORD); // rax
  NDIS_STATUS v16; // eax
  int v17; // edx
  NDIS_STATUS v18; // ebx

  v8 = (int *)((char *)NdisVcHandle + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisPartyHandle, (_DWORD)Buffer, Size);
  v9 = 0LL;
  if ( !(unsigned __int8)ndisReferenceVcPtr(
                           (struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle,
                           (int)NdisPartyHandle,
                           (int)Buffer) )
    return -1073741823;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v12 = *v8;
  *v8 |= 0x20u;
  if ( (v12 & 0x10) != 0 )
    *v8 = v12 | 0x60;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v11);
  v13 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v13 + 392) >= 6u )
    v14 = *(_QWORD *)(v13 + 32);
  else
    v14 = *(_QWORD *)(v13 + 24);
  v15 = *(__int64 (__fastcall **)(_QWORD, __int64, PVOID, _QWORD))(v14 + 64);
  if ( NdisPartyHandle )
    v9 = *((_QWORD *)NdisPartyHandle + 1);
  v16 = v15(*((_QWORD *)NdisVcHandle + 18), v9, Buffer, Size);
  v18 = v16;
  if ( v16 != 259 )
  {
    NdisCmCloseCallComplete(v16, NdisVcHandle, NdisPartyHandle);
    v18 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      19,
      14,
      (struct _GUID *)&WPP_cf4f20c66de63f4841bb36597d808402_Traceguids,
      v18);
  }
  return v18;
}
