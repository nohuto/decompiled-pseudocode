/*
 * XREFs of NVMeSanitizeRecoverWorkItem @ 0x14002C100
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 */

__int64 __fastcall NVMeSanitizeRecoverWorkItem(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 SrbExtension; // rax
  __int64 v11; // rdx

  v3 = 1;
  v4 = a2 >> 3;
  if ( (a2 & 8) == 0 )
    v3 = a2 & 7;
  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v7 = *(_QWORD *)(a1 + 1104);
  v8 = *(_DWORD *)(v7 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v7 + 4096) = -124;
  *(_DWORD *)(v7 + 4140) = 0;
  *(_DWORD *)(v7 + 4136) = ((v3 | v8) & 0xFFFFFFF7 ^ (8 * (v4 & 1))) & 0xFFFFFC0F;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  if ( *(_BYTE *)(a1 + 1019) != 1 )
  {
    if ( *(_QWORD *)(a1 + 4056) )
    {
      SrbExtension = GetSrbExtension(*(_QWORD *)(a1 + 4056));
      *(_BYTE *)(SrbExtension + 4225) |= 8u;
      *(_BYTE *)(v11 + 3) = 4;
      NVMeRequestComplete(a1, v11, 0);
      *(_QWORD *)(a1 + 4056) = 0LL;
    }
    *(_DWORD *)(a1 + 4064) &= ~1u;
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  return StorPortExtendedFunction(31LL, a1, a3, v9);
}
