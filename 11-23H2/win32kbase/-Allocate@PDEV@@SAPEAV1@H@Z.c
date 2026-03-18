/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C00C0900
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C015459C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0154F90 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C00478B4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00D1708 (--$FreeIsolatedType@V-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34 (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(__int64 a1)
{
  int v1; // esi
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 48LL) )
    return 0LL;
  v2 = (_QWORD *)NSInstrumentation::CTypeIsolation<917504,3584>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2;
  if ( !v1 && !AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 440) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<917504,3584>>(v3);
    return 0LL;
  }
  return (struct PDEV *)v4;
}
