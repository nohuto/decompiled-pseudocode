/*
 * XREFs of ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C2D34
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x140038680 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x14000F160 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1400B820C (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x1400E1CE0 (--1SectionObj@Gre@@QEAA@XZ.c)
 */

void __fastcall vFreeKernelSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  _QWORD v5[5]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+58h] [rbp-10h]
  void *v7; // [rsp+70h] [rbp+8h] BYREF

  v4 = (void *)*(a1 - 2);
  if ( v4 )
  {
    v5[0] = 0LL;
    v5[1] = 0LL;
    v5[2] = a1 - 2;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v6 = 3;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v5, 0LL, a3, a4);
    v7 = v4;
    Gre::SectionObj::~SectionObj(&v7);
    Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)v5);
  }
  else
  {
    GrepCaptureLiveMemoryDump(0x190u, 68LL, 1LL, (__int64)a1, 0LL, 0);
  }
}
