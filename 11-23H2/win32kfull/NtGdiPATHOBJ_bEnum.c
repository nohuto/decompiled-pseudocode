/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02CC800
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C013D7EC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0298DC8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02C6580 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, PATHDATA *a2)
{
  unsigned int v4; // edi
  POINTFIX *v5; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // r14
  _DWORD *v9; // rbx
  unsigned __int64 v11; // rax
  char *v12; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  ppd = 0LL;
  v4 = 0;
  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  v9 = (_DWORD *)((char *)ThreadCurrentObj + 436);
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*v9;
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    if ( (*((_DWORD *)v8 + 107) & 0x100) == 0 || *(_QWORD *)(v11 + 8) )
      v4 = PATHOBJ_bEnum((PATHOBJ *)v11, &ppd);
    if ( ppd.count > 0x4E2000 )
    {
      --*v9;
      return 0LL;
    }
    v12 = UMPDOBJ::_AllocUserMem(v8, 8 * ppd.count, 0);
    v5 = (POINTFIX *)v12;
    if ( v12 )
    {
      memmove(v12, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !v5 )
    ppd = 0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (PATHDATA *)MmUserProbeAddress;
  *a2 = ppd;
  --*v9;
  return v4;
}
