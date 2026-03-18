/*
 * XREFs of ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x14008F740
 * Callers:
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x14008F6BC (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025F0F4 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1403FD03C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r9
  struct DMMVIDEOPRESENTTARGET **v4; // r8

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 62);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 496)
    || (v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 63),
        *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 496)) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_QWORD *)a2 + 66) = 0LL;
}
