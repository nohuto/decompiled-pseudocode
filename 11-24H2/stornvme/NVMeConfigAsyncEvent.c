/*
 * XREFs of NVMeConfigAsyncEvent @ 0x140026EC0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  int v6; // ecx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1560);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( *(_BYTE *)(a1 + 1008) )
      *(_DWORD *)(a1 + 4064) |= 0x20000u;
    *(_BYTE *)(a1 + 1019) = 0;
    memset(*(void **)(a1 + 1104), 0, 0x1088uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
    *(_BYTE *)(a1 + 1008) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
    v5 = *(_QWORD *)(a1 + 1104);
    v6 = *(_DWORD *)(a1 + 60) & (*(_DWORD *)(v3 + 92) & 0x8000300 | ((*(_BYTE *)(v3 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 3960) = v6;
    *(_DWORD *)(v5 + 4140) = v6;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_BYTE *)(v5 + 4136) = 11;
    ProcessCommand(a1, a1 + 1016);
    return WaitForCommandComplete(a1, a1 + 1016, a2);
  }
  return result;
}
