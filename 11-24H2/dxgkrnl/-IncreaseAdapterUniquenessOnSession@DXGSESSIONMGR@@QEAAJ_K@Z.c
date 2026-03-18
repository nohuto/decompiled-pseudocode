/*
 * XREFs of ?IncreaseAdapterUniquenessOnSession@DXGSESSIONMGR@@QEAAJ_K@Z @ 0x1401FAFE4
 * Callers:
 *     DxgkIncreaseAdapterUniquenessOnSession @ 0x1401FCFA8 (DxgkIncreaseAdapterUniquenessOnSession.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseAdapterUniquenessOnSession(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int i; // edx
  __int64 v6; // rax
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // edi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == 0x300000000LL )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( v2 == 0x100000000LL )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i);
      if ( v6 )
      {
        v7 = *(volatile signed __int32 **)(v6 + 18536);
        if ( v7 )
          _InterlockedIncrement(v7);
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return 0LL;
  }
  if ( v2 == 0x200000000LL )
    LODWORD(v2) = *((_DWORD *)this + 36);
  if ( (unsigned int)v2 < *((_DWORD *)this + 20)
    && (v8 = (unsigned int)v2, v9 = 0, *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8))
    && (_mm_lfence(), *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) + 18536LL)) )
  {
    _mm_lfence();
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8) + 18536LL));
  }
  else
  {
    v9 = -1073741275;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return v9;
}
