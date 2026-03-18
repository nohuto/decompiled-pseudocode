/*
 * XREFs of ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0152C90
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD50 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C016AE30 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C003F2C0 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0047860 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0150A28 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0152AA8 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C0152ED0 (-Allocate@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

PATHMEMOBJ *__fastcall PATHMEMOBJ::PATHMEMOBJ(PATHMEMOBJ *this)
{
  __int64 v2; // rdi
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((_QWORD *)this + 10, (__int64)this, (__int64)THREAD_GUARDED_EPATHOBJ::vThreadCleanup);
    *((_DWORD *)this + 28) = 1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 32LL) )
  {
    v2 = NSInstrumentation::CTypeIsolation<81920,320>::Allocate();
    if ( v2 )
    {
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v4, (struct OBJECT *)v2, 1u, 0, 7) )
      {
        *((_QWORD *)this + 1) = v2;
        *(_DWORD *)(v2 + 80) = 3;
        *(_QWORD *)this = 0LL;
      }
      else
      {
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(v2);
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v4);
    }
  }
  return this;
}
