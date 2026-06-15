/*
 * XREFs of ?GetCurrentSessionGain@CAudioSession@@IEAAXPEA_NPEAMPEA_J@Z @ 0x18005FD54
 * Callers:
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::operator() @ 0x1800C25D4 (_lambda_c1484885cbbce228ad1e61609886ff14_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::GetCurrentSessionGain(CAudioSession *this, bool *a2, float *a3, __int64 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 736);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  *a4 = 50000LL;
  *a3 = *((float *)this + 194);
  *a2 = *((_DWORD *)this + 195) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
}
