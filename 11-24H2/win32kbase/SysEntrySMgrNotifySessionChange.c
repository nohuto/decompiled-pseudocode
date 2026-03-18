/*
 * XREFs of SysEntrySMgrNotifySessionChange @ 0x14008A420
 * Callers:
 *     DrvNotifySessionStateChange @ 0x14008A3A0 (DrvNotifySessionStateChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SysEntrySMgrNotifySessionChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(_QWORD); // rax

  v2 = a1;
  v3 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                    + 24LL
                                                    * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                        + 88LL);
  if ( v3 )
    return v3(v2);
  else
    return 3221225659LL;
}
