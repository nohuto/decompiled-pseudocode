/*
 * XREFs of HalpInitializeDeferredErrorVector @ 0x140556180
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptGetPriority @ 0x1403BA8C8 (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInitializeDeferredErrorVector(__int64 a1)
{
  bool v2; // zf
  unsigned int v3; // eax
  __int64 v4; // r9
  int v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+24h] [rbp-3Ch]
  int v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+2Ch] [rbp-34h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  int v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+3Ch] [rbp-24h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]
  int Priority; // [rsp+54h] [rbp-Ch]
  unsigned int v17; // [rsp+70h] [rbp+10h] BYREF
  int v18; // [rsp+74h] [rbp+14h]

  v7 = 0;
  v14 = 0;
  v2 = *(_DWORD *)(a1 + 240) == 2;
  v3 = *(_DWORD *)(a1 + 256);
  v13 = 0LL;
  v17 = v3;
  v18 = -8;
  if ( !v2 || !HalpInterruptFindLines(&v17) )
    return 0LL;
  v7 = 0;
  v14 = 0;
  v10 = -1;
  v13 = 0LL;
  v6 = 1;
  v15 = 54;
  v8 = 1;
  v9 = 16;
  v11 = 1;
  v12 = 3;
  Priority = HalpInterruptGetPriority(a1, 0x36u);
  return HalpInterruptSetLineStateInternal(a1, (__int64)&v17, (__int64)&v6, v4);
}
