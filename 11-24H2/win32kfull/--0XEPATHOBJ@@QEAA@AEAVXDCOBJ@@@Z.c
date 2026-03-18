/*
 * XREFs of ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6058
 * Callers:
 *     NtGdiWidenPath @ 0x1400E4EA0 (NtGdiWidenPath.c)
 *     NtGdiStrokePath @ 0x1400E5B80 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CE0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5E20 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1400E5F80 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1401F36D0 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1401F9420 (NtGdiStrokeAndFillPath.c)
 *     NtGdiFlattenPath @ 0x14021EAC0 (NtGdiFlattenPath.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E590C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  DC **v3; // rdi
  int v4; // eax
  __int64 v5; // rax
  struct HPATH__ *v7; // rdx
  _BYTE v8[8]; // [rsp+20h] [rbp-108h] BYREF
  struct HPATH__ **v9; // [rsp+28h] [rbp-100h]
  _BYTE v10[8]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v11; // [rsp+A8h] [rbp-80h]

  *((_QWORD *)this + 9) = 0LL;
  v3 = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v4 = *((_DWORD *)*a2 + 62);
  if ( (v4 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 62) = v4 & 0xFFFFFFFD;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v10, *((struct HPATH__ **)*a2 + 25));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v8);
    if ( v9 && v11 && EPATHOBJ::bClone((EPATHOBJ *)v8, (const struct EPATHOBJ *)v10) )
      v7 = *v9;
    else
      v7 = 0LL;
    DC::hpath(*v3, v7);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v8);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v10);
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  LOBYTE(a2) = 7;
  v5 = HmgShareLock(*((_QWORD *)*v3 + 25), a2);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v5 + 96);
    *(_DWORD *)this = *(_DWORD *)(v5 + 92);
  }
  return this;
}
