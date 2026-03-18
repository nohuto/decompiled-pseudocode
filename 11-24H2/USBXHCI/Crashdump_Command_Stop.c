/*
 * XREFs of Crashdump_Command_Stop @ 0x140052A74
 * Callers:
 *     Crashdump_Cleanup @ 0x14004FB90 (Crashdump_Cleanup.c)
 *     Crashdump_Command_PrepareForDump @ 0x1400527C8 (Crashdump_Command_PrepareForDump.c)
 * Callees:
 *     Crashdump_EventRing_Poll @ 0x140052254 (Crashdump_EventRing_Poll.c)
 */

__int64 __fastcall Crashdump_Command_Stop(__int64 a1, char a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rsi
  _DWORD *v8; // rcx
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_Stop: begin\n");
  v4 = **(_QWORD **)(a1 + 16) | 4LL;
  v5 = *(_DWORD **)(a1 + 16);
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 1) != 0 )
  {
    *v5 = v4;
    _InterlockedOr(v14, 0);
    v5[1] = HIDWORD(v4);
  }
  else
  {
    *(_QWORD *)v5 = v4;
  }
  _InterlockedOr(v14, 0);
  v6 = 0;
  v7 = 200LL;
  while ( 1 )
  {
    if ( v6 >= 0x50 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Command ring is not stopped after %u us\n", 200 * v6);
      v10 = -1073741823;
      goto LABEL_18;
    }
    KeStallExecutionProcessor(0xC8u);
    v8 = *(_DWORD **)(a1 + 16);
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 1) != 0 )
      LODWORD(v15) = *v8;
    else
      v15 = *(_QWORD *)v8;
    if ( (v15 & 8) == 0 )
      break;
    ++v6;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Command ring took %u us to stop\n", 200 * (v6 + 1));
  v10 = 0;
  if ( a2 )
  {
    v11 = *(_QWORD *)a1;
    if ( !*(_DWORD *)(*(_QWORD *)a1 + 584LL) || *(_BYTE *)(v11 + 624) )
      v7 = 72LL;
    v12 = Crashdump_EventRing_Poll(
            v11 + v7,
            33,
            v9,
            a1,
            (__int64 (__fastcall *)(__int64, __int64, int *))Crashdump_Command_EventRingCallback);
    v10 = v12;
    if ( v12 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Did not receive Event TRB, status 0x%X\n", v12);
  }
LABEL_18:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Command_Stop: end 0x%X\n", v10);
  return v10;
}
