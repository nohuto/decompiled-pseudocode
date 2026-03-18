/*
 * XREFs of ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1403C0D60
 * Callers:
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14018A5FC (DxgkInvalidateQdcCacheOnlyDatabase.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x140194BCC (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall QDC_CACHE::InvalidateCache(QDC_CACHE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  if ( *(_BYTE *)this )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    WdLogGlobalForLineNumber = 186;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (QDC_CACHE *)((char *)this + 8), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    v8 = (char *)this + 56;
    v9 = 18LL;
    do
    {
      if ( !v4 || (*((_DWORD *)v8 + 1) & 4) != 0 )
        *v8 = 0;
      v8 += 32;
      --v9;
    }
    while ( v9 );
    ++*((_DWORD *)this + 158);
    WdLogNewEntry5_WdTrace(v8, 0LL, v6, v7);
    WdLogGlobalForLineNumber = 212;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  }
}
