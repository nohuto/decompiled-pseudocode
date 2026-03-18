/*
 * XREFs of NVMeGetDeviceTelemetryData @ 0x140022908
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

__int64 __fastcall NVMeGetDeviceTelemetryData(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // edi
  __int64 SrbDataBuffer; // rax
  _BYTE *v8; // r8
  char v9; // r9
  void *v10; // r15
  unsigned int v11; // edx
  int v12; // ebx
  __int64 v13; // r12
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 SrbExtension; // r13
  unsigned int v17; // r8d
  __int64 result; // rax
  int v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-18h] BYREF
  void *v22; // [rsp+60h] [rbp-10h]
  __int64 PhysicalAddress; // [rsp+68h] [rbp-8h]
  unsigned __int8 v24; // [rsp+B0h] [rbp+40h]

  v6 = 0;
  v20 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v20);
  v22 = 0LL;
  v24 = 1;
  v10 = (void *)SrbDataBuffer;
  PhysicalAddress = 0LL;
  v21 = 0;
  if ( v9 )
    v11 = *(_DWORD *)(a1 + 4044);
  else
    v11 = *(_DWORD *)(a1 + 4048);
  if ( !SrbDataBuffer || *(_DWORD *)v20 < 0x200u )
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 261LL) & 8) == 0 || !v11 )
  {
    result = 3238002690LL;
    goto LABEL_34;
  }
  BYTE3(v20) = v8[10];
  BYTE2(v20) = v8[11];
  BYTE1(v20) = v8[12];
  LOBYTE(v20) = v8[13];
  v12 = v20;
  HIBYTE(v20) = v8[2];
  BYTE6(v20) = v8[3];
  BYTE5(v20) = v8[4];
  BYTE4(v20) = v8[5];
  BYTE3(v20) = v8[6];
  BYTE2(v20) = v8[7];
  BYTE1(v20) = v8[8];
  LOBYTE(v20) = v8[9];
  v13 = (unsigned int)v20;
  v14 = v12 << 9;
  if ( (unsigned int)v20 >= v11 || (v20 & 0x1FF) != 0 )
  {
    result = 3238002695LL;
LABEL_34:
    *(_BYTE *)(a2 + 3) = 6;
    return result;
  }
  v15 = v14;
  if ( v14 + (unsigned int)v20 > v11 )
  {
    v14 = v11 - v20;
    v15 = v11 - v20;
  }
  if ( !v9 && v15 + (_DWORD)v20 == *(_DWORD *)(a1 + 4048) )
    v24 = (*(_BYTE *)(a1 + 148) & 2) != 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, SrbDataBuffer, &v21);
    if ( !PhysicalAddress || !v21 )
    {
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
    v22 = v10;
    if ( v14 >= v21 )
      v14 = v21;
    v14 &= 0xFFFFFE00;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, v14);
    v10 = v22;
  }
  if ( v10 )
  {
    SrbExtension = GetSrbExtension(a2);
    if ( (v14 & 3) != 0 )
    {
      if ( v14 )
        memset(v10, 0, v14);
    }
    else if ( v14 >> 2 )
    {
      memset(v10, 0, 4LL * (v14 >> 2));
    }
    *(_BYTE *)(SrbExtension + 4225) |= 3u;
    SrbAssignQueueId(a1, a2);
    LOBYTE(v17) = 8 - (a4 != 0);
    BuildGetLogPageCommandForTelemetryLog(a1, SrbExtension, v17, v14, PhysicalAddress, v19, v20, 0, v24);
    *(_BYTE *)(SrbExtension + 4225) |= 4u;
    *(_QWORD *)(SrbExtension + 4192) = NVMeGetLogPageTelemetryDataCompletion;
    *(_QWORD *)(SrbExtension + 4160) = v22;
    *(_QWORD *)(SrbExtension + 4168) = PhysicalAddress;
    *(_DWORD *)(SrbExtension + 4208) = v14;
    *(_QWORD *)(SrbExtension + 4200) = v13;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  return v6;
}
