/*
 * XREFs of MiDbgPteWriteInProgress @ 0x1406801B8
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 */

__int64 __fastcall MiDbgPteWriteInProgress(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  __int16 v5; // bx
  _KPROCESS *Process; // rsi
  __int64 v7; // rdi
  _KPROCESS **v8; // rax
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+32h] [rbp-26h]
  __int16 v13; // [rsp+36h] [rbp-22h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  v13 = 0;
  v5 = a1;
  v14 = 0;
  if ( a1 >= 0xFFFF800000000000uLL )
    Process = 0LL;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0;
  v10[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
  v10[0] = (unsigned __int16 *)&KeActiveProcessors;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v10) )
  {
    v8 = *(_KPROCESS ***)(KeGetPrcb(v14) + 39944);
    if ( v8 && *v8 == Process && v8[1] == (_KPROCESS *)v7 )
      return MiDbgTranslatePhysicalAddress((v5 & 0xFFF) + ((_QWORD)v8[2] << 12), a2, a3);
  }
  return 0LL;
}
