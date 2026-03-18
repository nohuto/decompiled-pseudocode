/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x140185A0C
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned int i; // ebx
  void *v10; // rcx
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v5 = *((_QWORD *)this + 43);
  v6 = 0;
  if ( a2 )
  {
    if ( v5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8807;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid modes already activated.",
        8807LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = -1073740008;
    }
    else
    {
      v7 = 24LL * *((unsigned int *)this + 24);
      if ( !is_mul_ok(*((unsigned int *)this + 24), 0x18uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, 0x4B677844u, 256LL, v4);
      *((_QWORD *)this + 43) = v8;
      if ( !v8 )
      {
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 8813;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Out of memory allocating m_pCachedInvalidDisplayModeList",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        v6 = -1073741801;
      }
    }
  }
  else if ( v5 )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      v10 = *(void **)(*((_QWORD *)this + 43) + 24LL * i + 8);
      if ( v10 )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
        *(_QWORD *)(*((_QWORD *)this + 43) + 24LL * i + 8) = 0LL;
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 43));
    *((_QWORD *)this + 43) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  return v6;
}
