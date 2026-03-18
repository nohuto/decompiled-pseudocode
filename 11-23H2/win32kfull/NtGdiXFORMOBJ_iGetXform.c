/*
 * XREFs of NtGdiXFORMOBJ_iGetXform @ 0x1C02CD5F0
 * Callers:
 *     <none>
 * Callees:
 *     XFORMOBJ_iGetXform @ 0x1C00D1650 (XFORMOBJ_iGetXform.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z @ 0x1C02C6624 (--$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiXFORMOBJ_iGetXform(__int64 a1, ULONG64 a2)
{
  ULONG Xform; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  _DWORD *v7; // rbx
  XFORMOBJ *v9; // rax
  __int128 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  Xform = -1;
  v10 = 0LL;
  v11 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 0xFFFFFFFFLL;
  ++*v7;
  v9 = (XFORMOBJ *)UMPDOBJ::GetDDIOBJ<_XFORMOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v9 )
  {
    Xform = XFORMOBJ_iGetXform(v9, (XFORML *)((unsigned __int64)&v10 & -(__int64)(a2 != 0)));
    if ( Xform != -1 )
    {
      if ( a2 )
      {
        if ( a2 >= MmUserProbeAddress )
          a2 = MmUserProbeAddress;
        *(_OWORD *)a2 = v10;
        *(_QWORD *)(a2 + 16) = v11;
      }
    }
  }
  --*v7;
  return Xform;
}
