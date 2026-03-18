/*
 * XREFs of LogSenseInformationalExceptions @ 0x140021C84
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2)
{
  char *SrbDataBuffer; // rax
  char *v5; // rbx
  size_t v6; // r8
  __int64 v7; // r8
  char v8; // al
  unsigned int *v10; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  SrbDataBuffer = (char *)GetSrbDataBuffer(a2, &v10);
  v5 = SrbDataBuffer;
  if ( SrbDataBuffer && (v6 = *v10, v6 >= 0xC) )
  {
    if ( (v6 & 3) != 0 )
    {
      memset(SrbDataBuffer, 0, v6);
    }
    else
    {
      v7 = (unsigned int)v6 >> 2;
      if ( (_DWORD)v7 )
        memset(SrbDataBuffer, 0, 4 * v7);
    }
    v8 = v5[6];
    *((_WORD *)v5 + 2) = 0;
    *(_DWORD *)v5 = 134217775;
    *(_DWORD *)(v5 + 7) = -16777212;
    v5[6] = v8 & 0x40 | 0x23;
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
