/*
 * XREFs of NvmeAdapterQueryCapabilitiesIrpCompletion @ 0x1400D58C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterQueryCapabilitiesIrpCompletion(__int64 a1)
{
  __int64 v1; // rdx
  _DWORD *NvmeAdapter; // rbx
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+34h] [rbp-24h]
  int v15; // [rsp+3Ch] [rbp-1Ch]
  __int64 v16; // [rsp+40h] [rbp-18h]

  NvmeAdapter = GetNvmeAdapter(a1);
  if ( *NvmeAdapter == 1314275652 )
  {
    v4 = (__int64)(NvmeAdapter + 46);
  }
  else
  {
    v4 = (__int64)(NvmeAdapter + 98);
    if ( *NvmeAdapter != 1094997074 )
      v4 = 8LL;
  }
  v5 = *(_QWORD *)(v1 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v1 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)v4 == 5 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    if ( (v7 & 0x10) != 0 )
      *(_DWORD *)(v6 + 4) = v7 & 0xFFFFFDFF;
  }
  v8 = *(_DWORD *)(*((_QWORD *)NvmeAdapter + 50) + 184LL);
  if ( (v8 & 0x40000000) == 0 && (NvmeAdapter[36] & 2) != 0 && (v8 & 4) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 4);
    v14 = 0LL;
    v16 = 0LL;
    v13 = 1572865;
    v10 = v9 & 0x3FF | (v9 >> 7) & 0x400;
    v11 = *(_DWORD *)(v6 + 12);
    LODWORD(v14) = v10;
    v15 = v11;
    RaidPnPPassToMiniPort(v3, 9u, 0LL, (__int64)&v13, 0x18u);
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)NvmeAdapter + 19));
  return 0LL;
}
