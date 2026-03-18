/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1401C2508
 * Callers:
 *     bDeletePalette @ 0x1400BF950 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(struct _BASEOBJECT **this)
{
  struct _BASEOBJECT *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx(v2, 0LL);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
