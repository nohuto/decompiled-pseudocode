/*
 * XREFs of ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0060078 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C0150DB0 (GreGetBrushColor.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x1C009BC54 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 */

void __fastcall BRUSHSELOBJ::~BRUSHSELOBJ(BRUSHSELOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XEBRUSHOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(struct OBJECT **)this);
  }
  PopThreadGuardedObject((_QWORD *)this + 2);
}
