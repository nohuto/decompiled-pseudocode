/*
 * XREFs of BgpConsoleGetState @ 0x140BB3040
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetState(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  unsigned int v7; // ebx

  BgpFwAcquireLock((__int64)a1, a2, a3, a4);
  v6 = (_DWORD *)qword_140EEFD00;
  v7 = 0;
  if ( qword_140EEFD00 )
  {
    *a1 = *(_DWORD *)(qword_140EEFD00 + 20);
    a1[1] = v6[6];
    a1[2] = *v6;
    a1[3] = v6[1];
    a1[4] = v6[12];
    a1[5] = v6[13];
    a1[6] = v6[15];
    v5 = (unsigned int)v6[16];
    a1[7] = v5;
  }
  else
  {
    v7 = -1073741823;
  }
  BgpFwReleaseLock(v5, (__int64)v6);
  return v7;
}
