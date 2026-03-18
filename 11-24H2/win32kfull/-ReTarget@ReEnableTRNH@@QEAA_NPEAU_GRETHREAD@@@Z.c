/*
 * XREFs of ?ReTarget@ReEnableTRNH@@QEAA_NPEAU_GRETHREAD@@@Z @ 0x1400D9464
 * Callers:
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 * Callees:
 *     ?Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z @ 0x140217AC8 (-Transfer@ThreadRestrictNewHandlesRegion@@QEAAXPEAV1@@Z.c)
 */

bool __fastcall ReEnableTRNH::ReTarget(ReEnableTRNH *this, struct _GRETHREAD *a2)
{
  __int64 v3; // rax
  ThreadRestrictNewHandlesRegion *v4; // rax
  struct ThreadRestrictNewHandlesRegion *v5; // rax
  ThreadRestrictNewHandlesRegion *v6; // rcx

  if ( !*((_QWORD *)this + 4) )
  {
    v3 = a2 ? *((_QWORD *)a2 + 42) : 0LL;
    *((_QWORD *)this + 5) = v3;
    if ( v3 )
    {
      v4 = (ThreadRestrictNewHandlesRegion *)Win32AllocPoolZInit(88LL, 1852994631LL);
      if ( !v4 )
        return (char)v4;
      v5 = ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion(v4);
      v6 = (ThreadRestrictNewHandlesRegion *)*((_QWORD *)this + 5);
      *((_QWORD *)this + 4) = v5;
      ThreadRestrictNewHandlesRegion::Transfer(v6, v5);
    }
  }
  LOBYTE(v4) = 1;
  return (char)v4;
}
