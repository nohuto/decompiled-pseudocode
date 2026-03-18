/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1401F3484
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x1401F617C (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  signed __int32 v4; // ecx
  signed __int32 v5; // r15d
  signed __int32 v6; // esi
  __int64 v7; // r9
  _DWORD *v8; // r14
  unsigned int v9; // ecx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  void *v12; // rax
  void *v13; // rbp
  const void *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-58h]
  _BYTE v18[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    v5 = v4;
    if ( v4 == -2 )
    {
      WdLogSingleEntry1(2LL, -1073741756LL);
      WdLogGlobalForLineNumber = 4875;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Exceeded the maximun GDI view ID, returning 0x%I64x.",
        -1073741756LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225540LL;
    }
    v6 = v4 + 1;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v4 + 1, v4);
  }
  while ( v4 + 1 != v6 );
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = (_DWORD *)((char *)this + 19172);
  v9 = *((_DWORD *)this + 4794);
  if ( *((_DWORD *)this + 4793) + *((_DWORD *)this + 4792) < v9 )
  {
    v16 = (_DWORD *)((char *)this + 19172);
  }
  else
  {
    if ( v9 )
      v10 = 2 * v9;
    else
      v10 = 16LL;
    *((_DWORD *)this + 4794) = v10;
    v11 = 4 * v10;
    if ( !is_mul_ok(v10, 4uLL) )
      v11 = -1LL;
    v12 = (void *)operator new[](v11, 0x4B677844u, 256LL, v7);
    v13 = v12;
    if ( !v12 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v5, v6);
      WdLogSingleEntry1(6LL, *(unsigned int *)this);
      v17 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 4910;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Unable to allocate GDI View ID buffer for session 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
      return 3221225495LL;
    }
    v15 = (const void *)*((_QWORD *)this + 2398);
    if ( v15 )
    {
      memmove(v12, v15, 4LL * (unsigned int)(*((_DWORD *)this + 4792) + *v8));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2398));
    }
    *((_QWORD *)this + 2398) = v13;
    v16 = (_DWORD *)((char *)this + 19172);
  }
  *(_DWORD *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(*((_DWORD *)this + 4792) + *v8)) = v6;
  ++*v16;
  *a2 = v6;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  return 0LL;
}
