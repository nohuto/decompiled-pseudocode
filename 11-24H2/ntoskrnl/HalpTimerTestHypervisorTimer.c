/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x140547D50
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x140375A30 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140544C40 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x1405462D0 (HalpTimerUnmapInterrupt.c)
 *     HalpCreateInterrupt @ 0x140557FB0 (HalpCreateInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v7; // ecx
  int v8; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // ebp
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // esi
  __int64 v16; // rdx
  int v17; // ebp
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  __int128 v22; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_DWORD *)(a1 + 184);
  while ( 1 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v7 = *(_DWORD *)KiGlobalState;
    *((_QWORD *)&v22 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
    *(_QWORD *)&v22 = 1LL << (v7 & 0x3F);
    v8 = HalpTimerConfigureInterrupt(a1, 0xD4u, 15, a4, -1LL, 0, &v22, (__int64)RtlpFunctionOverrideSelfTestSuccess);
    if ( v8 < 0 )
      break;
    LOBYTE(v9) = 15;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(212, (unsigned int)HalpTimerHypervisorInterruptStub, v9, v10, -1LL);
    v11 = 0;
    while ( 1 )
    {
      v8 = HalpSetTimer(a1, 3u, 0x2710uLL, 1, &v23);
      if ( v8 >= 0 )
        break;
      if ( (unsigned int)++v11 >= 0xA )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v12);
        LOBYTE(v13) = 15;
        HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v13, v14, -1LL);
        goto LABEL_17;
      }
    }
    v15 = 0;
    do
    {
      KeStallExecutionProcessor(0x3E8u);
      v17 = *(_DWORD *)(a1 + 64);
      ++v15;
    }
    while ( !v17 && v15 < 0x64 );
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72), v16);
    LOBYTE(v18) = 15;
    HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v18, v19, -1LL);
    v20 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v17 )
    {
      v8 = 0;
      *a2 = v20 != 0;
      goto LABEL_16;
    }
    if ( !v20 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
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
