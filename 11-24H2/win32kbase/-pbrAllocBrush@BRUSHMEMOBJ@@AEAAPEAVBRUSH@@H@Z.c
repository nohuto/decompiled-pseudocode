/*
 * XREFs of ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x140085DA8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x14000D150 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 * Callees:
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400407C8 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140085EAC (-Allocate@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x1400861B0 (-ulGlobalBrushUnique@BRUSH@@QEAAKXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400861E0 (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1401D0D14 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  BRUSH *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rcx
  void *v9; // rax

  *((_DWORD *)this + 12) = 0;
  if ( !a2 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4272LL) + 16LL) )
      return 0LL;
    v4 = NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
    goto LABEL_4;
  }
  v3 = *(BRUSH **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 4272LL) + 24LL);
  if ( v3 )
  {
    v4 = NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
LABEL_4:
    v5 = v4;
    goto LABEL_5;
  }
  v5 = 0LL;
LABEL_5:
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 84) = 0;
    *(_DWORD *)(v5 + 96) = 0;
    *(_DWORD *)(v5 + 100) = -1;
    *(_DWORD *)(v5 + 144) = a2 != 0;
    *(_QWORD *)(v5 + 48) = v5 + 72;
    *(_DWORD *)(v5 + 44) = BRUSH::ulGlobalBrushUnique(v3);
    v7 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v6) + 88)
                                                                         + 5736LL);
    if ( !v7 )
    {
      *(_QWORD *)(v5 + 136) = 0LL;
      return (struct BRUSH *)v5;
    }
    v9 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v7, (void *)v5);
    if ( v9 )
    {
      *(_QWORD *)(v5 + 136) = v9;
      return (struct BRUSH *)v5;
    }
    FreeBrushMemory((unsigned int *)v5);
    return 0LL;
  }
  return (struct BRUSH *)v5;
}
