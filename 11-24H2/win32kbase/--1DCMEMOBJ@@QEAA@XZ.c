/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x140175590
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x140035194 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035AC0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct Gre::Base::SESSION_GLOBALS **this)
{
  DC *v2; // rax
  bool v3; // zf
  DC *v4[11]; // [rsp+20h] [rbp-58h] BYREF
  int v5; // [rsp+80h] [rbp+8h] BYREF

  if ( *this )
  {
    DCOBJ::DCOBJ((DCOBJ *)v4, this[2]);
    v2 = *this;
    *this = 0LL;
    v3 = *((_DWORD *)this + 10) == 0;
    v4[0] = v2;
    if ( v3 )
    {
      v5 = 0;
      GrepDeleteDCOBJ(v4, 0x400000u, &v5);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
}
