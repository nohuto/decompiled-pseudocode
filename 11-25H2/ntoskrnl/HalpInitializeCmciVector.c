/*
 * XREFs of HalpInitializeCmciVector @ 0x1405537D0
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGetPriority @ 0x140446738 (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInitializeCmciVector(__int64 a1)
{
  bool v2; // zf
  unsigned int v3; // eax
  int v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+24h] [rbp-3Ch]
  int v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+2Ch] [rbp-34h]
  int v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+34h] [rbp-2Ch]
  int v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+3Ch] [rbp-24h]
  int v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+50h] [rbp-10h]
  int Priority; // [rsp+54h] [rbp-Ch]
  unsigned int v16; // [rsp+70h] [rbp+10h] BYREF
  int v17; // [rsp+74h] [rbp+14h]

  v6 = 0;
  v13 = 0;
  v2 = *(_DWORD *)(a1 + 240) == 2;
  v3 = *(_DWORD *)(a1 + 256);
  v12 = 0LL;
  v16 = v3;
  v17 = -7;
  if ( !v2 || !HalpInterruptFindLines(&v16) )
    return 0LL;
  v6 = 0;
  v13 = 0;
  v9 = -1;
  v12 = 0LL;
  v5 = 1;
  v14 = 53;
  v7 = 1;
  v8 = 16;
  v10 = 1;
  v11 = 3;
  Priority = HalpInterruptGetPriority(a1, 0x35u);
  return HalpInterruptSetLineStateInternal(a1, (__int64)&v16, (__int64)&v5);
}
