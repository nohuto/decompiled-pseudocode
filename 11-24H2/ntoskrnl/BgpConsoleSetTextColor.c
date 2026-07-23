/*
 * XREFs of BgpConsoleSetTextColor @ 0x140BB35D0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx

  BgpFwAcquireLock((__int64)a1, (__int64)a2, a3, a4);
  v8 = qword_140EEFD00;
  v9 = 0;
  if ( qword_140EEFD00 )
  {
    if ( a1 )
    {
      v7 = *a1;
      *(_DWORD *)(qword_140EEFD00 + 12) = v7;
    }
    if ( a2 )
    {
      v7 = *a2;
      *(_DWORD *)(v8 + 16) = v7;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  BgpFwReleaseLock(v7, v6);
  return v9;
}
