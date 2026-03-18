/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x140187C64
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // ebx
  void *v9; // rcx
  _BYTE v11[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = *((_QWORD *)this + 43);
  v5 = 0;
  if ( a2 )
  {
    if ( v4 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8952;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid modes already activated.",
        8952LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v5 = -1073740008;
    }
    else
    {
      v6 = 24LL * *((unsigned int *)this + 24);
      if ( !is_mul_ok(*((unsigned int *)this + 24), 0x18uLL) )
        v6 = -1LL;
      v7 = operator new[](v6, 0x4B677844u, 256LL);
      *((_QWORD *)this + 43) = v7;
      if ( !v7 )
      {
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 8958;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Out of memory allocating m_pCachedInvalidDisplayModeList",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v5 = -1073741801;
      }
    }
  }
  else if ( v4 )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      v9 = *(void **)(*((_QWORD *)this + 43) + 24LL * i + 8);
      if ( v9 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
        *(_QWORD *)(*((_QWORD *)this + 43) + 24LL * i + 8) = 0LL;
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 43));
    *((_QWORD *)this + 43) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return v5;
}
