/*
 * XREFs of ?QueryInterface@CaptureMonitor@CMonitorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801132E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::QueryInterface(
        CMonitorManager::CaptureMonitor *this,
        const struct _GUID *a2,
        CMonitorManager::CaptureMonitor **a3)
{
  CMonitorManager::CaptureMonitor *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx

  v4 = this;
  if ( !a3 )
  {
    v7 = -2147467261;
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x5Fu,
        (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
        v7);
    }
    return (unsigned int)v7;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v5 )
    goto LABEL_8;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_657804fa_d6ad_4496_8a60_352752af4f89.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_657804fa_d6ad_4496_8a60_352752af4f89.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_657804fa_d6ad_4496_8a60_352752af4f89.Data4;
  if ( v6 )
  {
    v7 = -2147467262;
    v4 = 0LL;
  }
  else
  {
LABEL_8:
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)this + 8LL))(this);
    v7 = 0;
  }
  *a3 = v4;
  if ( v7 < 0 )
    goto LABEL_13;
  return (unsigned int)v7;
}
