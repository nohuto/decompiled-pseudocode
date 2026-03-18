/*
 * XREFs of NVMeGetDeviceTelemetryHeader @ 0x140022BBC
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x14001F064 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeGetDeviceTelemetryHeader(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 SrbDataBuffer; // rax
  void *v7; // rsi
  unsigned int v9; // edx
  __int64 SrbExtension; // r15
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // [rsp+28h] [rbp-38h]
  __int64 PhysicalAddress; // [rsp+50h] [rbp-10h]
  _DWORD *v15; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+30h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  void *v18; // [rsp+A8h] [rbp+48h]

  v17 = a3;
  v5 = 0;
  v15 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  v18 = 0LL;
  LODWORD(v17) = 512;
  v7 = (void *)SrbDataBuffer;
  PhysicalAddress = 0LL;
  HIWORD(v16) = 0;
  if ( SrbDataBuffer && *v15 >= 0x30u )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 261LL) & 8) == 0 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002690LL;
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v17);
      if ( !PhysicalAddress || (unsigned int)v17 < 0x200 )
      {
        *(_BYTE *)(a2 + 3) = 4;
        return 3238002691LL;
      }
      v18 = v7;
      if ( (unsigned int)v17 > 0x200 )
        LODWORD(v17) = 512;
    }
    else
    {
      NVMeAllocateDmaBuffer(a1, 0x200u);
      v7 = v18;
    }
    if ( v7 )
    {
      SrbExtension = GetSrbExtension(a2);
      if ( (v9 & 3) != 0 )
      {
        if ( v9 )
          memset(v7, 0, v9);
      }
      else
      {
        v11 = v9 >> 2;
        if ( v11 )
          memset(v7, 0, 4LL * v11);
      }
      *(_BYTE *)(SrbExtension + 4225) |= 3u;
      SrbAssignQueueId(a1, a2);
      LOBYTE(v12) = 7;
      BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v12, v17, PhysicalAddress, v13, 0LL, 1, 1u);
      *(_BYTE *)(SrbExtension + 4225) |= 4u;
      *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageTelemetryHeaderCompletion;
      *(_QWORD *)(SrbExtension + 4160) = v18;
      *(_QWORD *)(SrbExtension + 4168) = PhysicalAddress;
      LOWORD(v16) = 7;
      *(_DWORD *)(SrbExtension + 4208) = v17;
      *(_QWORD *)(SrbExtension + 4200) = v16;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      return (unsigned int)-1056964605;
    }
    return v5;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
