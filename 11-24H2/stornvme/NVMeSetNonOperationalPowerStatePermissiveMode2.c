/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode2 @ 0x14002C3B8
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     NVMeControllerGetLocalCommand @ 0x140022280 (NVMeControllerGetLocalCommand.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode2(__int64 a1, unsigned __int8 a2)
{
  int v4; // eax
  _BYTE *LocalCommand; // rax
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( (v4 & 8) == 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4064) = (*(_DWORD *)(a1 + 4064) | 2) ^ ((*(_BYTE *)(a1 + 4064) | 2) ^ (unsigned __int8)(4 * a2)) & 4;
      }
      else
      {
        LocalCommand = NVMeControllerGetLocalCommand(a1);
        v6 = LocalCommand;
        if ( LocalCommand )
        {
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4225LL) |= 1u;
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4225LL) &= ~2u;
          *(_WORD *)(*((_QWORD *)LocalCommand + 12) + 4212LL) = 0;
          v7 = *((_QWORD *)LocalCommand + 12);
          v8 = *(_DWORD *)(v7 + 4140);
          *(_BYTE *)(v7 + 4096) = 9;
          *(_BYTE *)(v7 + 4136) = 17;
          *(_DWORD *)(v7 + 4140) = v8 ^ ((unsigned __int8)v8 ^ a2) & 1;
          *(_QWORD *)(*((_QWORD *)v6 + 12) + 4192LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
          ProcessCommand(a1, (__int64)(v6 + 8));
          WaitForCommandComplete(a1, (__int64)(v6 + 8), 1u);
        }
      }
    }
  }
}
