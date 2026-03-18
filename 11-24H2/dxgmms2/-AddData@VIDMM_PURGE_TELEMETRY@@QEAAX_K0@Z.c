/*
 * XREFs of ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x14010C2F8
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400BC934 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PURGE_TELEMETRY::AddData(VIDMM_PURGE_TELEMETRY *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  char *v5; // rdi
  char *v6; // rbx
  unsigned __int64 v7; // rax
  char *v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( a2 < 0x40000000 )
  {
    v4 = 32LL * (unsigned int)(a2 >> 25) + 8;
LABEL_7:
    v5 = (char *)this + v4;
    goto LABEL_9;
  }
  if ( a2 < 0x140000000LL )
  {
    v4 = 32LL * (unsigned int)((a2 - 0x40000000) >> 27) + 1032;
    goto LABEL_7;
  }
  if ( a2 < 0x540000000LL )
  {
    v4 = 32LL * (unsigned int)((a2 - 0x140000000LL) >> 29) + 2056;
    goto LABEL_7;
  }
  v5 = (char *)this + 3080;
LABEL_9:
  v6 = (char *)this + 3112;
  v8 = (char *)this + 3112;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  v7 = *((_QWORD *)v5 + 1);
  *(_QWORD *)v5 += a3;
  ++*((_DWORD *)v5 + 6);
  v9 = 1;
  if ( v7 > a3 )
    a3 = v7;
  *((_QWORD *)v5 + 1) = a3;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8);
}
