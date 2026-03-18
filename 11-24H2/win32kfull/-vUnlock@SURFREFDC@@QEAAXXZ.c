/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1400DD084
 * Callers:
 *     ??1SURFREFDC@@QEAA@XZ @ 0x14025D338 (--1SURFREFDC@@QEAA@XZ.c)
 *     GreDrawStream @ 0x14025D364 (GreDrawStream.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x14032F740 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400DD1F4 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

void __fastcall SURFREFDC::vUnlock(SURFREFDC *this)
{
  SURFACE **v1; // rdi
  struct _GRETHREAD *v3; // rax
  HSEMAPHORE v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (SURFACE **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
  {
    if ( *v1 == *((SURFACE **)Gre::Base::Globals(this) + 533) )
    {
      DEC_SHARE_REF_CNT(*v1);
    }
    else
    {
      SEMOBJ<20>::SEMOBJ<20>(&v5);
      SURFACE::vDec_cRef(*v1);
      if ( v5 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Hmgr", v5);
        v3 = GreGetCurrentThreadCrossSessionCheck();
        if ( v3 )
        {
          if ( (*((_BYTE *)v3 + 28))-- == 1 )
            *(_QWORD *)v3 &= ~0x100000uLL;
          if ( !*(_QWORD *)v3 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v5);
        v1 = (SURFACE **)((char *)this + 32);
      }
    }
    *v1 = 0LL;
  }
}
