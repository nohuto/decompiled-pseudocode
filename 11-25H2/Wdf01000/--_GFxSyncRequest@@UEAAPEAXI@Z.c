/*
 * XREFs of ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1400AC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x140032790 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x140034488 (--3FxObject@@SAXPEAX@Z.c)
 */

FxSyncRequest *__fastcall FxSyncRequest::`scalar deleting destructor'(FxSyncRequest *this, char a2)
{
  FxSyncRequest::~FxSyncRequest(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
