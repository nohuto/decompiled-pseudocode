/*
 * XREFs of GreCreatePatternBrushInternal @ 0x14000DD70
 * Callers:
 *     GreCreatePatternBrush @ 0x140154F00 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x14000D150 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x14000DB44 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14000DEDC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000DF20 (--0ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??1ThreadRestrictNewHandlesRegion@@QEAA@XZ @ 0x14000EA60 (--1ThreadRestrictNewHandlesRegion@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // edx
  HBITMAP Clone; // rdx
  __int64 v10; // rax
  int v11; // r9d
  ULONG v13; // ecx
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-B8h] BYREF
  struct SURFACE *v16; // [rsp+68h] [rbp-98h]
  HBRUSH *v17[6]; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+A0h] [rbp-60h]
  _BYTE v19[96]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0LL;
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v14);
  SURFREF::SURFREF((SURFREF *)v15, (HSURF)a1);
  if ( !v16 )
  {
    v13 = 6;
LABEL_14:
    EngSetLastError(v13);
    goto LABEL_12;
  }
  if ( (*((_DWORD *)v16 + 28) & 0x4000000) == 0 )
  {
    v13 = 87;
    goto LABEL_14;
  }
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v19);
  if ( a3 )
  {
    v8 = 8;
    v7 = 8;
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  Clone = (HBITMAP)hbmCreateClone(v16, v8, v7);
  if ( Clone )
  {
    v10 = *((_QWORD *)v16 + 16);
    if ( !v10 || (v11 = 1, (*(_DWORD *)(v10 + 24) & 0x2000) == 0) )
      v11 = 0;
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v17, Clone, a1, v11, 0, 0x40u, a2);
    if ( v17[0] )
    {
      v6 = (__int64)*v17[0];
      v18 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v17);
  }
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v19);
LABEL_12:
  SURFREF::~SURFREF((SURFREF *)v15);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v14);
  return v6;
}
