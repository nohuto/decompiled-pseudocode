/*
 * XREFs of IoctlQueryTemperatureInfoProcess @ 0x1400211FC
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     KelvinToCelsius @ 0x140021C64 (KelvinToCelsius.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 SrbDataBuffer; // rsi
  unsigned int v7; // eax
  unsigned int v8; // eax
  _DWORD *v10; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v10 = 0LL;
  GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v10);
  if ( *v10 >= 0x44u )
  {
    v7 = *v10 - 28;
    if ( (v7 & 3) != 0 )
    {
      if ( *v10 != 28 )
        memset((void *)(SrbDataBuffer + 28), 0, v7);
    }
    else
    {
      v8 = v7 >> 2;
      if ( v8 )
        memset((void *)(SrbDataBuffer + 28), 0, 4LL * v8);
    }
    *(_DWORD *)(SrbDataBuffer + 32) = 40;
    *(_DWORD *)(SrbDataBuffer + 28) = 40;
    *(_WORD *)(SrbDataBuffer + 36) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(SrbDataBuffer + 38) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 266));
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
