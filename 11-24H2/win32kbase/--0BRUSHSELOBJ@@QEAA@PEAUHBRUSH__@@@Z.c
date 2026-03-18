/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x140085B74
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 *     GreGetBrushColor @ 0x1401C3FC0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1400DC42C (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, __int64 a2)
{
  __int64 v4; // rax

  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)this + 2,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    (__int64)EPALOBJ::~EPALOBJ);
  v4 = HmgShareLockCheck(a2, 16);
  *(_QWORD *)this = v4;
  if ( v4 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(struct _BASEOBJECT **)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
