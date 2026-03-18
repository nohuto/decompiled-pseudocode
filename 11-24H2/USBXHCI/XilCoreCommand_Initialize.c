/*
 * XREFs of XilCoreCommand_Initialize @ 0x140019FF0
 * Callers:
 *     Command_Initialize @ 0x140019F40 (Command_Initialize.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x14001AC40 (XilRegister_WriteUlong64.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall XilCoreCommand_Initialize(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 1;
  memset(*(void **)(*(_QWORD *)(a1 + 16) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 40LL));
  *((_QWORD *)&v3 + 1) = 0x180200000000LL;
  *(_QWORD *)&v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * *(unsigned int *)(a1 + 32)) = v3;
  return XilRegister_WriteUlong64(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 88LL),
           *(_QWORD *)(a1 + 8),
           *(unsigned int *)(a1 + 44) ^ (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) ^ *(unsigned int *)(a1 + 44)) & 0xFFFFFFFFFFFFFFFEuLL);
}
