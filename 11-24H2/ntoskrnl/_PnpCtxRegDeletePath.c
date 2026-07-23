/*
 * XREFs of _PnpCtxRegDeletePath @ 0x140A643FC
 * Callers:
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A640A4 (PiDevCfgClearDeviceMigrationNode.c)
 * Callees:
 *     _RegRtlDeletePathInternal @ 0x140A64448 (_RegRtlDeletePathInternal.c)
 */

__int64 __fastcall PnpCtxRegDeletePath(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v8; // rdx

  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  v8 = a3;
  LOBYTE(a3) = a4;
  return RegRtlDeletePathInternal(a2, v8, a3, v6);
}
