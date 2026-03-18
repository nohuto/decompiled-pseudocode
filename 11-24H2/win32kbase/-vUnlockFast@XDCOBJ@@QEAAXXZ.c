/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x140034798
 * Callers:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140035194 (--1DCOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x140034A80 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C1B50 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  HDC *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  HDC v6; // rdi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( (*((_DWORD *)this + 8) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
  v3 = *(HDC **)this;
  v4 = *((unsigned int *)this + 8);
  v5 = *((_QWORD *)this + 2);
  v7 = 0;
  v6 = *v3;
  HmgDecrementExclusiveReferenceCountExFastOpt(v5, v3, v4, &v7);
  if ( v7 )
    GrepDeleteDC(v6);
}
