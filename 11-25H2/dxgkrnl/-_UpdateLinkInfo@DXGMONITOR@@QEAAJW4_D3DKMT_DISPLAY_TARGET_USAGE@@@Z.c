/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@QEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14026FE04
 * Callers:
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140187CB0 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(__int64 a1, int a2)
{
  __int64 v3; // rcx
  char v5; // r15
  _DWORD *v6; // rdi
  int v7; // r14d
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  char v14; // al
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int128 v20; // [rsp+20h] [rbp-20h] BYREF

  *(_BYTE *)(a1 + 177) &= ~2u;
  v3 = *(_QWORD *)(a1 + 168);
  v20 = 0LL;
  v5 = 1;
  v6 = (_DWORD *)(a1 + 180);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) < 0x7000 )
  {
    v7 = -1073741637;
    goto LABEL_36;
  }
  v8 = 0;
  LODWORD(v20) = *v6;
  if ( a2 == 1 )
    v8 = 2;
  HIDWORD(v20) = 0;
  *(_QWORD *)((char *)&v20 + 4) = (a2 != 0) | (unsigned int)v8;
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 192) + 56LL))(
         *(_QWORD *)(a1 + 192),
         (char *)&v20 + 4);
  if ( v7 < 0 )
  {
    v5 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192), &v20);
    v7 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741637 )
      {
        WdLogSingleEntry3(2LL, a1, (unsigned int)*v6, v9);
        WdLogGlobalForLineNumber = 3859;
        goto LABEL_36;
      }
      goto LABEL_35;
    }
  }
  v10 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 64LL))(*(_QWORD *)(a1 + 168)) != 0
      ? 1663
      : 127;
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 8LL))(*(_QWORD *)(a1 + 168)) >= 2600 )
  {
    if ( SBYTE8(v20) < 0 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)*v6);
      WdLogGlobalForLineNumber = 3724;
    }
    v10 |= 0x800u;
  }
  v11 = *(_QWORD *)(a1 + 168);
  DWORD2(v20) &= ~0x80u;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) < 2400 )
  {
    if ( (~v10 & DWORD2(v20)) != 0 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)*v6);
      DWORD2(v20) &= v10;
      WdLogGlobalForLineNumber = 3810;
    }
    goto LABEL_29;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 8LL))(*(_QWORD *)(a1 + 168));
  v13 = 1792;
  if ( v12 < 2500 )
    v13 = 768;
  if ( (~(v10 | v13) & DWORD2(v20)) != 0 )
  {
    v7 = -1073741823;
    WdLogSingleEntry2(2LL, (unsigned int)*v6, -1073741823LL);
    WdLogGlobalForLineNumber = 3759;
    goto LABEL_36;
  }
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 8LL))(*(_QWORD *)(a1 + 168)) <= 2400
    && !v5
    && (WORD4(v20) & 0x100) != 0 )
  {
    v7 = -1073741823;
    WdLogSingleEntry2(2LL, (unsigned int)*v6, -1073741823LL);
    WdLogGlobalForLineNumber = 3778;
    goto LABEL_36;
  }
  if ( (WORD4(v20) & 0x200) == 0 && (WORD4(v20) & 0x400) == 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 64LL))(*(_QWORD *)(a1 + 168))
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 72LL))(*(_QWORD *)(a1 + 168)) )
  {
LABEL_29:
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 104LL))(*(_QWORD *)(a1 + 168));
    v15 = DWORD2(v20);
    if ( v14 )
    {
      v15 = DWORD2(v20) | 0x800;
      DWORD2(v20) |= 0x800u;
    }
    v16 = DWORD1(v20);
    *(_BYTE *)(a1 + 177) |= 2u;
    *(_DWORD *)(a1 + 336) = v15;
    v17 = *(_QWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 332) = v16;
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17) >= 2400 )
    {
      v18 = HIDWORD(v20);
      *(_DWORD *)(a1 + 340) = HIDWORD(v20);
      if ( (v18 & 3) == 0 )
        goto LABEL_35;
      WdLogSingleEntry3(2LL, v18, a1, (unsigned int)*v6);
      WdLogGlobalForLineNumber = 3839;
    }
    *(_DWORD *)(a1 + 340) = 0;
LABEL_35:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_36;
  }
  v7 = -1073741823;
  WdLogSingleEntry2(2LL, a1, (unsigned int)*v6);
  WdLogGlobalForLineNumber = 3795;
LABEL_36:
  *(_QWORD *)(a1 + 332) = 0LL;
  *(_DWORD *)(a1 + 340) = 0;
  if ( (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 8LL))(*(_QWORD *)(a1 + 168)) >= 2400 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)*v6, v7);
    WdLogGlobalForLineNumber = 3887;
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
