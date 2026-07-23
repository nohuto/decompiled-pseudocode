/*
 * XREFs of KiReleasePrcbLocksForGroupAffinity @ 0x1405AE060
 * Callers:
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiReleasePrcbLocksForGroupAffinity(__int64 a1)
{
  unsigned __int16 *v1; // rdx
  __int16 v2; // ax
  __int64 result; // rax
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+32h] [rbp-16h]
  __int16 v7; // [rsp+36h] [rbp-12h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 **)a1;
  v2 = *(_WORD *)(a1 + 8);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v5 = v2;
  v4[1] = v1;
  v4[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v8, v4);
    if ( (_DWORD)result )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(KiProcessorBlock[v8] + 48), 0LL);
  }
  return result;
}
