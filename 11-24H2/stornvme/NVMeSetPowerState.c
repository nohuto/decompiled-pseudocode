/*
 * XREFs of NVMeSetPowerState @ 0x140008510
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a2;
  v4 = 1000000;
  LocalCommandReuse(a1, a1 + 1008);
  v5 = 0LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_DWORD *)(v6 + 4140);
  *(_BYTE *)(v6 + 4096) = 9;
  *(_BYTE *)(v6 + 4136) = 2;
  *(_DWORD *)(v6 + 4140) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)v2) & 0x1F;
  ProcessCommand(a1, a1 + 1016);
  v9 = *(unsigned __int8 *)(a1 + 1604);
  v10 = *(_QWORD *)(a1 + 1560);
  if ( (unsigned __int8)v9 > 0x1Fu )
  {
    v11 = 0LL;
  }
  else if ( (unsigned __int8)v9 > *(_BYTE *)(v10 + 263) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = v10 + 32 * (v9 + 64);
  }
  if ( (unsigned __int8)v2 <= 0x1Fu && (unsigned __int8)v2 <= *(_BYTE *)(v10 + 263) )
    v5 = v10 + 32 * (v2 + 64);
  if ( v11 && v5 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v11 + 8) + *(_DWORD *)(v5 + 4));
    if ( (unsigned int)v8 > 0xF4240 )
      v8 = 1000000LL;
    v4 = v8;
  }
  LOBYTE(v8) = 1;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 1016, v8, v4);
}
