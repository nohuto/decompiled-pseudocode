/*
 * XREFs of ?bClone@EPATHOBJ@@QEAAHAEBV1@@Z @ 0x14008E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bClone@PATH_CORE@@QEAA_NAEBV1@@Z @ 0x14008E200 (-bClone@PATH_CORE@@QEAA_NAEBV1@@Z.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1401C0AD4 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall EPATHOBJ::bClone(EPATHOBJ *this, const struct EPATHOBJ *a2)
{
  if ( PATH_CORE::bClone(
         (PATH_CORE *)(*((_QWORD *)this + 1) + 24LL),
         (const struct PATH_CORE *)(*((_QWORD *)a2 + 1) + 24LL)) )
  {
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
    *(_DWORD *)this = *(_DWORD *)a2;
    return 1LL;
  }
  else
  {
    EPATHOBJ::reinit(this);
    return 0LL;
  }
}
