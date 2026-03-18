/*
 * XREFs of ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802D8D94
 * Callers:
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x1802DA974 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DAA10 (-DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2)
{
  struct CHolographicExclusiveMode **i; // rbx
  CHolographicInteropTaskQueue *v4; // rcx
  struct CHolographicExclusiveMode **v5; // rsi
  struct CHolographicExclusiveMode *v6; // rax
  CResource *v7; // rcx

  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11);
        ++i )
  {
    if ( *i == a2 )
    {
      v4 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
      if ( v4 && *((_BYTE *)this + 240) )
        CHolographicInteropTaskQueue::PostMessageW(
          v4,
          0x1Eu,
          (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      v5 = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 11);
      while ( ++i != v5 )
      {
        v6 = *i;
        *i = 0LL;
        v7 = *(i - 1);
        *(i - 1) = v6;
        if ( v7 )
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
      }
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>((CResource **)(*((_QWORD *)this + 11) - 8LL));
      *((_QWORD *)this + 11) -= 8LL;
      return;
    }
  }
}
