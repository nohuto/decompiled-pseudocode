/*
 * XREFs of NtGdiPATHOBJ_vGetBounds @ 0x1C02CCCC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6580 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vGetBounds(__int64 a1, struct _RECTFX *a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v6; // rbx
  PATHOBJ *v8; // rax
  struct _RECTFX prectfx; // [rsp+28h] [rbp-20h] BYREF

  prectfx = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 3221225485LL;
  ++*v6;
  v8 = (PATHOBJ *)UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v8 )
  {
    PATHOBJ_vGetBounds(v8, &prectfx);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _RECTFX *)MmUserProbeAddress;
    *a2 = prectfx;
  }
  --*v6;
  return 0LL;
}
