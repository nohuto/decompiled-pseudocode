/*
 * XREFs of ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1400AC2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 */

FxSyncRequest *__fastcall FxSyncRequest::`scalar deleting destructor'(FxSyncRequest *this, char a2)
{
  FxSyncRequest::~FxSyncRequest(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
