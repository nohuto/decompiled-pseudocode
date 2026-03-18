/*
 * XREFs of _OpenWindowStation @ 0x1401C4338
 * Callers:
 *     NtUserOpenWindowStation @ 0x1401DD2E0 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x140286E50 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v5);
  if ( v3 < 0 )
  {
    SetLastNtError(v3);
    return 0LL;
  }
  return v5;
}
