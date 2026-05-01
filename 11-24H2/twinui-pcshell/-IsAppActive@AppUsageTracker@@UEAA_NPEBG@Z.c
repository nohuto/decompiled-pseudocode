/*
 * XREFs of ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x180571520
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x1805715A0 (-IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall AppUsageTracker::IsAppActive(AppUsageTracker *this, Windows::Internal::FamilySafety::AppLimits *a2)
{
  char v4; // bl

  v4 = 0;
  if ( !Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(a2, (const unsigned __int16 *)a2) )
    return (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 11)
                                                                                           + 48LL))(
             *((_QWORD *)this + 11),
             a2);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 10)
                                                                                               + 48LL))(
         *((_QWORD *)this + 10),
         a2)
    || (*(unsigned __int8 (__fastcall **)(_QWORD, Windows::Internal::FamilySafety::AppLimits *))(**((_QWORD **)this + 11)
                                                                                               + 48LL))(
         *((_QWORD *)this + 11),
         a2) )
  {
    return 1;
  }
  return v4;
}
