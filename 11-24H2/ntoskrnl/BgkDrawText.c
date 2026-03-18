/*
 * XREFs of BgkDrawText @ 0x140BB02DC
 * Callers:
 *     NtDrawText @ 0x140653A40 (NtDrawText.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x140BB2BB0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgkDrawText(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d

  if ( !byte_140E65DA8 || !byte_140E65DB1 )
    return 3221225473LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock();
    if ( (dword_140EF0050 & 1) == 0 || (dword_140EF0050 & 0x100) != 0 )
    {
      v2 = -1073741823;
    }
    else if ( qword_140EF0100 && (v4 = qword_140EF0118) != 0 )
    {
      v2 = BgpTxtDisplayString(qword_140EF0118, a1, v5, v6);
    }
    else
    {
      v2 = -1073741670;
    }
    BgpFwReleaseLock(v4, v3);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
