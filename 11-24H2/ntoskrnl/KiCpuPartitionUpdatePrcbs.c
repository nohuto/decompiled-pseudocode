/*
 * XREFs of KiCpuPartitionUpdatePrcbs @ 0x1405BD834
 * Callers:
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiCpuPartitionUpdatePrcbs(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  __int64 Prcb; // rbx
  __int64 result; // rax
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v7; // [rsp+30h] [rbp-10h]
  int v8; // [rsp+32h] [rbp-Eh]
  __int16 v9; // [rsp+36h] [rbp-Ah]
  unsigned int v10; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(unsigned __int16 **)(a2 + 8);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v7 = 0;
  v6[1] = v2;
  v6[0] = (unsigned __int16 *)a2;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v6);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v10);
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(Prcb + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( *(_QWORD *)(Prcb + 48) );
    }
    *(_QWORD *)(Prcb + 14320) = a1;
    _InterlockedAnd64((volatile signed __int64 *)(Prcb + 48), 0LL);
  }
  return result;
}
