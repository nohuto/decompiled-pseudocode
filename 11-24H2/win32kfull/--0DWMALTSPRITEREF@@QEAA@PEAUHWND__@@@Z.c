/*
 * XREFs of ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140039A0C
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x140039684 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x140039920 (GreNotifyDirtySprite.c)
 *     GreSetLWContentOwner @ 0x14030FF18 (GreSetLWContentOwner.c)
 * Callees:
 *     <none>
 */

DWMALTSPRITEREF *__fastcall DWMALTSPRITEREF::DWMALTSPRITEREF(DWMALTSPRITEREF *this, HWND a2)
{
  __int64 v3; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rbp
  struct W32_PUSH_LOCK *v5; // rbx
  _QWORD *v6; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  Buffer[0] = a2;
  v4 = Gre::Base::Globals(this);
  v5 = (struct W32_PUSH_LOCK *)(*((_QWORD *)v4 + 17) + 72LL);
  if ( *((_QWORD *)v4 + 17) != -72LL )
    GreAcquirePushLockExclusive(v5);
  v6 = RtlLookupElementGenericTable(*((PRTL_GENERIC_TABLE *)v4 + 17), Buffer);
  if ( v6 )
    v3 = v6[1];
  if ( v5 )
    GreReleasePushLockExclusive(v5);
  Gre::Base::Globals(v7);
  if ( v3 )
  {
    LOBYTE(v8) = 15;
    *(_QWORD *)this = HmgShareLockCheck(v3, v8);
  }
  return this;
}
