/*
 * XREFs of NVMeSetHostMemoryBuffer @ 0x140006A20
 * Callers:
 *     NVMeInitHostMemoryBuffer @ 0x140006BB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerPowerDown @ 0x1400109D0 (NVMeControllerPowerDown.c)
 *     NVMeControllerPreparePLDR @ 0x14001D3BC (NVMeControllerPreparePLDR.c)
 *     NVMeFreeHostMemoryBuffer @ 0x14001DB68 (NVMeFreeHostMemoryBuffer.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

__int64 __fastcall NVMeSetHostMemoryBuffer(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        void *Src,
        size_t Size)
{
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax

  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  SrbAssignQueueId(a1, a1 + 1016);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4136LL) = 13;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ a2) & 1;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4140LL) ^ (unsigned __int8)(2 * a3)) & 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4144LL) = a4
                                               / (1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) >> 7) & 0xF) + 12));
  memmove(*(void **)(a1 + 1656), Src, (unsigned int)Size);
  v10 = HIDWORD(*(_QWORD *)(a1 + 1664));
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4148LL) = *(_QWORD *)(a1 + 1664) & 0xFFFFFFF0;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4152LL) = v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4156LL) = (unsigned int)Size >> 4;
  ProcessCommand(a1, a1 + 1016);
  LOBYTE(v11) = 1;
  WaitForCommandComplete(a1, a1 + 1016, v11);
  result = 0LL;
  if ( *(_BYTE *)(a1 + 1019) != 1 )
    return 3238002689LL;
  return result;
}
