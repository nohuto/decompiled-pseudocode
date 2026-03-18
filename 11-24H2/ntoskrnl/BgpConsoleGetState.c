/*
 * XREFs of BgpConsoleGetState @ 0x140BB1040
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetState(_DWORD *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  unsigned int v4; // ebx

  BgpFwAcquireLock();
  v3 = (_DWORD *)qword_140EEFAB0;
  v4 = 0;
  if ( qword_140EEFAB0 )
  {
    *a1 = *(_DWORD *)(qword_140EEFAB0 + 20);
    a1[1] = v3[6];
    a1[2] = *v3;
    a1[3] = v3[1];
    a1[4] = v3[12];
    a1[5] = v3[13];
    a1[6] = v3[15];
    v2 = (unsigned int)v3[16];
    a1[7] = v2;
  }
  else
  {
    v4 = -1073741823;
  }
  BgpFwReleaseLock(v2, (__int64)v3);
  return v4;
}
