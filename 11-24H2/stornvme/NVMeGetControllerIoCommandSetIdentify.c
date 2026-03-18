/*
 * XREFs of NVMeGetControllerIoCommandSetIdentify @ 0x14002881C
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1400222F0 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     BuildIdentifyCommandGeneric @ 0x14001F0F4 (BuildIdentifyCommandGeneric.c)
 */

__int64 __fastcall NVMeGetControllerIoCommandSetIdentify(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r9
  int i; // ecx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 1656);
  LocalCommandReuse(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  BuildIdentifyCommandGeneric(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 6, v3, v6, 0, *(_QWORD *)(a1 + 1664), -1, 0);
  ProcessCommand(a1, a1 + 1016);
  result = WaitForCommandComplete(a1, a1 + 1016, 1u);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    *(_BYTE *)(a1 + 4072) = *(_BYTE *)v1;
    *(_BYTE *)(a1 + 4073) = *(_BYTE *)(v1 + 1);
    *(_BYTE *)(a1 + 4074) = *(_BYTE *)(v1 + 2);
    *(_BYTE *)(a1 + 4075) = *(_BYTE *)(v1 + 3);
    *(_DWORD *)(a1 + 4076) = *(_DWORD *)(v1 + 4);
    result = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(a1 + 4080) = result;
  }
  return result;
}
