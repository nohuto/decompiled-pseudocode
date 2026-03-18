/*
 * XREFs of ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CFAF4
 * Callers:
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x1802D16D4 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D1770 (-DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2,
        __int64 a3)
{
  struct CHolographicExclusiveMode **i; // rbx
  CHolographicInteropTaskQueue *v5; // rcx
  struct CHolographicExclusiveMode **v6; // rsi
  struct CHolographicExclusiveMode *v7; // rax
  CCachedVisualImage *v8; // rcx

  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11);
        ++i )
  {
    if ( *i == a2 )
    {
      v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
      if ( v5 && *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v5,
          0x1Eu,
          (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      v6 = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 11);
      while ( ++i != v6 )
      {
        v7 = *i;
        *i = 0LL;
        v8 = *(i - 1);
        *(i - 1) = v7;
        if ( v8 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8, (__int64)a2, a3);
      }
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
        (CCachedVisualImage **)(*((_QWORD *)this + 11) - 8LL),
        (__int64)a2,
        a3);
      *((_QWORD *)this + 11) -= 8LL;
      return;
    }
  }
}
