/*
 * XREFs of BgpConsoleSetTextColor @ 0x140BB15D0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(unsigned int *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx

  BgpFwAcquireLock();
  v6 = qword_140EEFAB0;
  v7 = 0;
  if ( qword_140EEFAB0 )
  {
    if ( a1 )
    {
      v5 = *a1;
      *(_DWORD *)(qword_140EEFAB0 + 12) = v5;
    }
    if ( a2 )
    {
      v5 = *a2;
      *(_DWORD *)(v6 + 16) = v5;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock(v5, v4);
  return v7;
}
