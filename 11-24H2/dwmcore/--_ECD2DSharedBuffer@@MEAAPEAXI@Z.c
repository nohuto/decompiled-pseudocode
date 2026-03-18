/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x18004BA20
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004B984 (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKX.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x18021E930 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  CCachedVisualImage *v4; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable';
  v4 = (CCachedVisualImage *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  else
  {
    operator delete(*((void **)this + 2));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 40LL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
