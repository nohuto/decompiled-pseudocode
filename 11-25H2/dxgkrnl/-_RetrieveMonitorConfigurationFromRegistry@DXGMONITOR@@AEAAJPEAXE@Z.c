/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1403EA178
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x140352258 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403E5788 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1402777EC (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(PCWSTR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  char *v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+38h] [rbp-31h]
  __int64 v16; // [rsp+40h] [rbp-29h]
  unsigned int *v17; // [rsp+48h] [rbp-21h]
  int v18; // [rsp+50h] [rbp-19h]
  unsigned int *v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+60h] [rbp-9h]
  __int64 v21; // [rsp+68h] [rbp-1h]
  int v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  __int128 v24; // [rsp+80h] [rbp+17h]
  __int128 v25; // [rsp+90h] [rbp+27h]
  unsigned int v26; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = (char *)(this + 100);
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *(_QWORD *)v4;
    v14 = 0LL;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v16 = v10;
    v17 = &v26;
    v26 = v9;
    v19 = &v26;
    v15 = 288;
    v18 = 67108868;
    v20 = 4;
    v24 = 0LL;
    v25 = 0LL;
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v14, 0LL, 0LL);
    if ( v11 < 0 )
    {
      WdLogSingleEntry3(2LL, v5, *((unsigned int *)this + 45), v11);
      WdLogGlobalForLineNumber = 1536;
    }
    else if ( (*((unsigned __int8 (__fastcall **)(char *, _QWORD))v4 + 2))((char *)this + *((int *)v4 + 6), v26) )
    {
      if ( *(_DWORD *)((char *)this + *((int *)v4 + 3)) != v26 )
      {
        WdLogSingleEntry3(7LL, v26, v5, *((unsigned int *)this + 45));
        v13 = *((int *)v4 + 3);
        WdLogGlobalForLineNumber = 1515;
        *(_DWORD *)((char *)this + v13) = v26;
        if ( a3 )
          DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v26, v5, *((unsigned int *)this + 45));
      WdLogGlobalForLineNumber = 1531;
    }
    ++v3;
    ++v5;
    v4 += 32;
  }
  while ( v3 < 3 );
  return 0LL;
}
