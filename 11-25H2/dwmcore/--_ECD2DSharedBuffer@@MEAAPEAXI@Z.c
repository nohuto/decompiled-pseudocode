/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1801E6500
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E646C (-InternalRelease@-$CMILRefCountBaseT@UID2D1PrivateCompositorBuffer@@VCMilObjectDeleter@@@@IEAAKX.c)
 *     ??$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z @ 0x180229DC0 (--$ReleaseInterface@VCD2DSharedBuffer@@@@YAXAEAPEAVCD2DSharedBuffer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  CResource *v4; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable';
  v4 = (CResource *)*((_QWORD *)this + 4);
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
