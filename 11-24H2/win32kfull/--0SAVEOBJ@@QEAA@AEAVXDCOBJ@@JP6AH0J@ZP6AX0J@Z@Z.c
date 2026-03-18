/*
 * XREFs of ??0SAVEOBJ@@QEAA@AEAVXDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x140195CD0
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x14003871C (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

SAVEOBJ *__fastcall SAVEOBJ::SAVEOBJ(
        SAVEOBJ *this,
        struct XDCOBJ *a2,
        int a3,
        int (*a4)(struct XDCOBJ *, int),
        void (*a5)(struct XDCOBJ *, int))
{
  *((_QWORD *)this + 2) = a5;
  *((_QWORD *)this + 1) = a2;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = ((__int64 (__fastcall *)(struct XDCOBJ *, _QWORD))a4)(a2, (unsigned int)(a3 + 1));
  return this;
}
