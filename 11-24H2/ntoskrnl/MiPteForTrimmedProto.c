/*
 * XREFs of MiPteForTrimmedProto @ 0x140232FE4
 * Callers:
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 * Callees:
 *     MiGetWsleProtection @ 0x140233100 (MiGetWsleProtection.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x140236340 (MiMakePrototypePteVadLookup.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiClonePteReadonly @ 0x14049B904 (MiClonePteReadonly.c)
 */

__int64 __fastcall MiPteForTrimmedProto(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // r11
  unsigned int WsleProtection; // eax
  unsigned __int64 v8; // r11
  __int64 PrototypePteDirect; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r8

  LOBYTE(v5) = MiGetWsleContents(a1, a2);
  WsleProtection = MiGetWsleProtection(v6, v5);
  if ( WsleProtection )
    return MiMakePrototypePteVadLookup(WsleProtection);
  PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(48
                                                          * ((*(_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                                          - 0x220000000000LL
                                                          + 8) | 0x8000000000000000uLL);
  v13 = PrototypePteDirect;
  if ( (v10 & 0x800) == 0 && (v10 & 0x200) == 0 && v10 < 0 && (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
    v13 = PrototypePteDirect | 8;
  if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v11 + 8) > 0 )
    return v13 | 0x800;
  if ( (a3 & 2) != 0 && (unsigned int)MiClonePteReadonly(v12, v10, v13) )
    return v13 | 8;
  return v13;
}
