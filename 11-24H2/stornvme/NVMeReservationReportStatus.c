/*
 * XREFs of NVMeReservationReportStatus @ 0x140024174
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     NVMeReservationReportStatusCompletion @ 0x140024370 (NVMeReservationReportStatusCompletion.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x140006710 (SetPrpFromBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeReservationReportStatus(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  int v12; // r12d
  __int64 SrbExtension; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  unsigned int v18; // [rsp+80h] [rbp+28h]

  v5 = a5;
  v6 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(_BYTE *)(a2 + 7);
  if ( (unsigned int)v10 < *(_DWORD *)(a1 + 224) && (v11 = *(_QWORD *)(a1 + 8LL * v10 + 1672)) != 0 )
    v12 = *(_DWORD *)(v11 + 16);
  else
    v12 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( a5 <= 0x30 )
    v5 = 48;
  if ( *(_QWORD *)(SrbExtension + 4160) )
  {
    v14 = *(_DWORD *)(SrbExtension + 4208);
    if ( v14 >= v5 )
    {
      *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 2;
      SrbAssignQueueId(a1, a2);
      v15 = *(_QWORD *)(SrbExtension + 4168);
      LOWORD(v18) = a3;
      *(_DWORD *)(SrbExtension + 4140) = *(_DWORD *)(SrbExtension + 4140) & 0xFFFFFFFE | (*(unsigned __int8 *)(a1 + 4024) >> 3) & 1;
      HIWORD(v18) = a4;
      *(_BYTE *)(SrbExtension + 4096) = 14;
      *(_DWORD *)(SrbExtension + 4100) = v12;
      *(_DWORD *)(SrbExtension + 4136) = (v5 >> 2) - 1;
      SetPrpFromBuffer(a1, SrbExtension, v15, v5);
      *(_BYTE *)(SrbExtension + 4225) |= 4u;
      *(_QWORD *)(SrbExtension + 4192) = NVMeReservationReportStatusCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v18;
      return v6;
    }
    NVMeFreeDmaBuffer(a1, v14, (__int64 *)(SrbExtension + 4160), *(_QWORD *)(SrbExtension + 4168));
    *(_DWORD *)(SrbExtension + 4208) = 0;
  }
  NVMeAllocateDmaBuffer(a1, v5);
  v6 = -1056964605;
  *(_BYTE *)(a2 + 3) = 38;
  return v6;
}
