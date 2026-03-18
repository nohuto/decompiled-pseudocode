/*
 * XREFs of ?AcquireSessionGdiViewId@DXGSESSIONDATA@@QEAAJPEAK@Z @ 0x1401F9CD0
 * Callers:
 *     DxgkAcquireGdiViewIds @ 0x1401FCA8C (DxgkAcquireGdiViewIds.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONDATA::AcquireSessionGdiViewId(DXGSESSIONDATA *this, unsigned int *a2)
{
  signed __int32 v4; // ecx
  signed __int32 v5; // r15d
  signed __int32 v6; // esi
  _DWORD *v7; // r14
  unsigned int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rbp
  const void *v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-58h]
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = DXGSESSIONDATA::s_GlobalGdiViewId;
  do
  {
    v5 = v4;
    if ( v4 == -2 )
    {
      WdLogSingleEntry1(2LL, -1073741756LL);
      WdLogGlobalForLineNumber = 4895;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (DXGSESSIONDATA *)((char *)this + 19120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v7 = (_DWORD *)((char *)this + 19172);
  v8 = *((_DWORD *)this + 4794);
  if ( *((_DWORD *)this + 4793) + *((_DWORD *)this + 4792) < v8 )
  {
    v15 = (_DWORD *)((char *)this + 19172);
  }
  else
  {
    if ( v8 )
      v9 = 2 * v8;
    else
      v9 = 16LL;
    *((_DWORD *)this + 4794) = v9;
    v10 = 4 * v9;
    if ( !is_mul_ok(v9, 4uLL) )
      v10 = -1LL;
    v11 = (void *)operator new[](v10, 0x4B677844u, 256LL);
    v12 = v11;
    if ( !v11 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&DXGSESSIONDATA::s_GlobalGdiViewId, v5, v6);
      WdLogSingleEntry1(6LL, *(unsigned int *)this);
      v16 = *(unsigned int *)this;
      WdLogGlobalForLineNumber = 4930;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Unable to allocate GDI View ID buffer for session 0x%I64x",
        v16,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
      return 3221225495LL;
    }
    v14 = (const void *)*((_QWORD *)this + 2398);
    if ( v14 )
    {
      memmove(v11, v14, 4LL * (unsigned int)(*((_DWORD *)this + 4792) + *v7));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 2398));
    }
    *((_QWORD *)this + 2398) = v12;
    v15 = (_DWORD *)((char *)this + 19172);
  }
  *(_DWORD *)(*((_QWORD *)this + 2398) + 4LL * (unsigned int)(*((_DWORD *)this + 4792) + *v7)) = v6;
  ++*v15;
  *a2 = v6;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return 0LL;
}
