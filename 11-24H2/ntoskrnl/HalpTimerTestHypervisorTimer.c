/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x14054A490
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140548A10 (HalpTimerUnmapInterrupt.c)
 *     HalpCreateInterrupt @ 0x14055A380 (HalpCreateInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v7; // ecx
  int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r9
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebp
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_DWORD *)(a1 + 184);
  while ( 1 )
  {
    v27 = 0LL;
    v26 = 0LL;
    v7 = *(_DWORD *)KiGlobalState;
    *((_QWORD *)&v26 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
    *(_QWORD *)&v26 = 1LL << (v7 & 0x3F);
    v8 = HalpTimerConfigureInterrupt(a1, 0xD4u, 15, a4, -1LL, 0, &v26, (__int64)RtlpFunctionOverrideSelfTestSuccess);
    if ( v8 < 0 )
      break;
    LOBYTE(v9) = 15;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(212, (unsigned int)HalpTimerHypervisorInterruptStub, v9, v10, -1LL);
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(v11) = 1;
      v8 = HalpSetTimer(a1, 3u, 0x2710uLL, v11, &v27);
      if ( v8 >= 0 )
        break;
      if ( (unsigned int)++v12 >= 0xA )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v13, v14, v11);
        LOBYTE(v15) = 15;
        HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v15, v16, -1LL);
        goto LABEL_17;
      }
    }
    v17 = 0;
    do
    {
      KeStallExecutionProcessor(0x3E8u);
      v21 = *(_DWORD *)(a1 + 64);
      ++v17;
    }
    while ( !v21 && v17 < 0x64 );
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v18, v19, v20);
    LOBYTE(v22) = 15;
    HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v22, v23, -1LL);
    v24 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v21 )
    {
      v8 = 0;
      *a2 = v24 != 0;
      goto LABEL_16;
    }
    if ( !v24 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
    {
      v8 = -1073741823;
LABEL_16:
      v5 = (_DWORD *)(a1 + 184);
      break;
    }
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
    *(_DWORD *)(a1 + 224) &= ~0x400u;
  }
LABEL_17:
  if ( (*v5 & 0x40) != 0 )
    HalpTimerUnmapInterrupt(a1, 212, 0, 0);
  return (unsigned int)v8;
}
