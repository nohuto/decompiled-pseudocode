/*
 * XREFs of ?_IsValid@CProcessAsPid@@AEBA_NAEBVCLockProcessByPid@@@Z @ 0x1402018C0
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CProcessAsPid::_IsValid(CProcessAsPid *this, const struct CLockProcessByPid *a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)a2 + 3);
  if ( v4 && *((_QWORD *)this + 1) == PsGetProcessSequenceNumber(v4) )
    return (unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)a2 + 3)) == 0;
  return v3;
}
