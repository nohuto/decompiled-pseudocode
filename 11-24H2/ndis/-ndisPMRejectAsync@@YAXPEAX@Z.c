/*
 * XREFs of ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1400B3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     NdisMIndicateStatusEx @ 0x14004E030 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisPMRejectAsync(PVOID P)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  _QWORD *v2; // r14
  __int64 v4; // r15
  struct _KSEMAPHORE *v5; // r15
  _QWORD *v6; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-49h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)P + 4);
  v2 = (_QWORD *)*((_QWORD *)P + 5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      71,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1);
  v4 = 3920LL;
  if ( *((_DWORD *)P + 12) != 1073938513 )
    v4 = 3952LL;
  v5 = (struct _KSEMAPHORE *)(&v1->Header.Type + v4);
  ndisWaitForKernelObject(v5);
  while ( v2 )
  {
    v6 = v2;
    v2 = (_QWORD *)*v2;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusCode = *((_DWORD *)P + 12);
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v6 + 5;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusBufferSize = 4;
    NdisMIndicateStatusEx(v1, &StatusIndication);
    ExFreePoolWithTag(v6, 0);
  }
  KeReleaseSemaphore(v5, 0, 1, 0);
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport(v1, 0xFu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      72,
      (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
      (char)v1);
}
