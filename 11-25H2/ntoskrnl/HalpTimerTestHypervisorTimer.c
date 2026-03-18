/*
 * XREFs of HalpTimerTestHypervisorTimer @ 0x140547BA0
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerUnmapInterrupt @ 0x140546120 (HalpTimerUnmapInterrupt.c)
 *     HalpCreateInterrupt @ 0x140557A80 (HalpCreateInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerTestHypervisorTimer(__int64 a1, bool *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v7; // ecx
  int v8; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // ebp
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // esi
  int v15; // ebp
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  v5 = (_DWORD *)(a1 + 184);
  while ( 1 )
  {
    v21 = 0LL;
    v20 = 0LL;
    v7 = *(_DWORD *)KiGlobalState;
    *((_QWORD *)&v20 + 1) = (unsigned __int16)(*(_DWORD *)KiGlobalState >> 6);
    *(_QWORD *)&v20 = 1LL << (v7 & 0x3F);
    v8 = HalpTimerConfigureInterrupt(a1, 0xD4u, 15, a4, -1LL, 0, &v20, (__int64)RtlpFunctionOverrideSelfTestSuccess);
    if ( v8 < 0 )
      break;
    LOBYTE(v9) = 15;
    *(_DWORD *)(a1 + 64) = 0;
    HalpInterruptSetIdtEntry(212, (unsigned int)HalpTimerHypervisorInterruptStub, v9, v10, -1LL);
    v11 = 0;
    while ( 1 )
    {
      v8 = HalpSetTimer(a1, 3u, 0x2710uLL, 1, &v21);
      if ( v8 >= 0 )
        break;
      if ( (unsigned int)++v11 >= 0xA )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72));
        LOBYTE(v12) = 15;
        HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v12, v13, -1LL);
        goto LABEL_17;
      }
    }
    v14 = 0;
    do
    {
      KeStallExecutionProcessor(0x3E8u);
      v15 = *(_DWORD *)(a1 + 64);
      ++v14;
    }
    while ( !v15 && v14 < 0x64 );
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 72));
    LOBYTE(v16) = 15;
    HalpCreateInterrupt((unsigned int)RtlpFunctionOverrideSelfTestSuccess, 212, v16, v17, -1LL);
    v18 = *(_DWORD *)(a1 + 184) & 0x10;
    if ( v15 )
    {
      v8 = 0;
      *a2 = v18 != 0;
      goto LABEL_16;
    }
    if ( !v18 || (*(_DWORD *)(a1 + 224) & 0xB00) == 0 )
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
