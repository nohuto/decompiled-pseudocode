/*
 * XREFs of ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400B5974
 * Callers:
 *     CitDisplayRequestChange @ 0x1400B542C (CitDisplayRequestChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400B2AA8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E78D8 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(CIT_USER_ACTIVE_TRACKER *this, int a2, int a3)
{
  __int64 v5; // rcx
  int v6; // eax

  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(this, a2);
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( v6 >= 0 )
      *((_DWORD *)this + 5) = (v6 + 1) | 0x80000000;
  }
  else if ( *(_DWORD *)this
         && (unsigned int)(*((_DWORD *)this + 1) + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 18968) + 8LL)) < *((_DWORD *)this + 2) )
  {
    CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
  }
  *(_DWORD *)this = a3;
}
