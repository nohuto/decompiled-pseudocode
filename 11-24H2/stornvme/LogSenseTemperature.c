/*
 * XREFs of LogSenseTemperature @ 0x140021E18
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     TemperatureFromKelvinToCelsius @ 0x140026B10 (TemperatureFromKelvinToCelsius.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2)
{
  _BYTE *SrbDataBuffer; // rax
  _BYTE *v5; // rbx
  unsigned __int64 v6; // rdi
  char v7; // al
  char v8; // al
  unsigned int *v10; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0LL;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v10);
  v5 = SrbDataBuffer;
  if ( SrbDataBuffer && (v6 = *v10, v6 >= 0xA) )
  {
    if ( (v6 & 3) != 0 )
    {
      memset(SrbDataBuffer, 0, *v10);
    }
    else if ( (unsigned int)v6 >> 2 )
    {
      memset(SrbDataBuffer, 0, 4LL * ((unsigned int)v6 >> 2));
    }
    v7 = v5[6];
    *((_WORD *)v5 + 2) = 0;
    *(_DWORD *)v5 = 201326605;
    v5[6] = v7 & 0x40 | 3;
    v5[7] = 2;
    v5[9] = -1;
    if ( v6 >= 0x10 )
    {
      *((_WORD *)v5 + 5) = 256;
      v8 = v5[12] & 0x40;
      v5[13] = 2;
      v5[12] = v8 | 3;
      v5[15] = TemperatureFromKelvinToCelsius(*(unsigned __int16 *)(a1 + 220));
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return 0LL;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
}
