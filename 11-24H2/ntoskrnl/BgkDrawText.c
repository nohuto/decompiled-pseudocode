/*
 * XREFs of BgkDrawText @ 0x140BB22DC
 * Callers:
 *     NtDrawText @ 0x1406521A0 (NtDrawText.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x140BB4BB0 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgkDrawText(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d

  v4 = a1;
  if ( !byte_140E65EE0 || !byte_140E65EE8 )
    return 3221225473LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    BgpFwAcquireLock(a1, a2, a3, a4);
    if ( (dword_140EF0270 & 1) == 0 || (dword_140EF0270 & 0x100) != 0 )
    {
      v5 = -1073741823;
    }
    else if ( qword_140EF0320 && (v7 = qword_140EF0338) != 0 )
    {
      v5 = BgpTxtDisplayString(qword_140EF0338, v4, v8, v9);
    }
    else
    {
      v5 = -1073741670;
    }
    BgpFwReleaseLock(v7, v6);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
