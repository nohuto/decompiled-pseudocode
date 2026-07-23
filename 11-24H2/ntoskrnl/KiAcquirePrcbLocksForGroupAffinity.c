/*
 * XREFs of KiAcquirePrcbLocksForGroupAffinity @ 0x1405ADBA0
 * Callers:
 *     KiCompleteKernelInit @ 0x140B57CA0 (KiCompleteKernelInit.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

void __fastcall KiAcquirePrcbLocksForGroupAffinity(__int128 *a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v4; // [rsp+20h] [rbp-30h]
  unsigned __int16 *v5[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v6; // [rsp+40h] [rbp-10h]
  int v7; // [rsp+42h] [rbp-Eh]
  __int16 v8; // [rsp+46h] [rbp-Ah]
  int v9; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a1;
  v1 = *(_QWORD *)a1;
  while ( v1 )
  {
    v7 = 0;
    v2 = 0LL;
    v8 = 0;
    v9 = 0;
    v6 = WORD4(v4);
    v5[1] = (unsigned __int16 *)v1;
    v5[0] = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v5) )
    {
      if ( !v2 || KiProcessorBlock[v9] < v2 )
        v2 = KiProcessorBlock[v9];
    }
    v3 = ~*(_QWORD *)(v2 + 200);
    v10 = 0;
    v1 &= v3;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(_QWORD *)(v2 + 48) );
    }
  }
}
