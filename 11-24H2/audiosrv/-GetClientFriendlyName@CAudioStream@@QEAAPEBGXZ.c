/*
 * XREFs of ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18002491C
 * Callers:
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18000FDEC (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18002366C (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

wchar_t *__fastcall CAudioStream::GetClientFriendlyName(CAudioStream *this)
{
  __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *v4; // rax
  const wchar_t *v5; // rax
  wchar_t *v6; // rax

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
    v3 = v4;
    if ( !v4 || !*v4 )
    {
      v5 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
      if ( v5 )
      {
        if ( *v5 )
        {
          v6 = wcsrchr(v5, 0x5Cu);
          v3 = v6 + 1;
          if ( !v6 )
            return 0LL;
        }
      }
    }
  }
  return v3;
}
