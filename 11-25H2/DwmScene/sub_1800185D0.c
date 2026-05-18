/*
 * XREFs of sub_1800185D0 @ 0x1800185D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010660 @ 0x180010660 (sub_180010660.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800185D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( sub_180010660(a2, dword_1800F7220) || sub_180010660(v4, dword_1800F7500) )
  {
    *v5 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
