/*
 * XREFs of ?PopFront@?$NtList@VSipcSection@@@@QEAAPEAVSipcSection@@XZ @ 0x18010FBC0
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtList<SipcSection>::PopFront(_DWORD *a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = *(_DWORD **)a1;
  if ( *(_DWORD **)(*(_QWORD *)a1 + 8LL) != a1 || (v2 = *(_QWORD *)v1, *(_DWORD **)(*(_QWORD *)v1 + 8LL) != v1) )
    __fastfail(3u);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  if ( v1 == a1 )
    return 0LL;
  --a1[4];
  return (unsigned __int64)(v1 - 2) & -(__int64)(v1 != 0LL);
}
