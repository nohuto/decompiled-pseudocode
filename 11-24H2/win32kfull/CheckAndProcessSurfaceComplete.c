/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x140220570
 * Callers:
 *     <none>
 * Callees:
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400278E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400CAC50 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1401DAD5C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall CheckAndProcessSurfaceComplete(HLSURF a1)
{
  struct DWMSPRITE *v1; // rcx
  _BYTE v2[32]; // [rsp+20h] [rbp-68h] BYREF
  struct DWMSPRITE *v3; // [rsp+40h] [rbp-48h]
  _BYTE v4[32]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v5; // [rsp+68h] [rbp-20h]

  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v4, a1);
  if ( v5 )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v2, *(HSPRITE *)(v5 + 296));
    v1 = v3;
    if ( v3 )
    {
      if ( *((_DWORD *)v3 + 29) == 3 )
        *((_DWORD *)v3 + 29) = 1;
      CheckAndProcessWindowResizeComplete(v1, 0, 0LL);
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v2);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v4);
}
