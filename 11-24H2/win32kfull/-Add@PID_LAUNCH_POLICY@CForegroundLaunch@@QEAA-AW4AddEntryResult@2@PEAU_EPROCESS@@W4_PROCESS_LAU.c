/*
 * XREFs of ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x14028CB4C
 * Callers:
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028CC84 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 *     ?PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028D0F8 (-PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 * Callees:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x1402403E8 (-Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall CForegroundLaunch::PID_LAUNCH_POLICY::Add(__int64 a1, struct _KPROCESS *a2, int a3, int a4)
{
  __int64 result; // rax

  if ( CProcessAsPid::IsValid((CProcessAsPid *)a1) )
    return 1LL;
  if ( CProcessAsPid::Store((CProcessAsPid *)a1, a2) )
  {
    *(_DWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 20) = a4;
    *(_QWORD *)(a1 + 24) = PsGetProcessCreateTimeQuadPart(a2);
    return 0LL;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    result = 2LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
