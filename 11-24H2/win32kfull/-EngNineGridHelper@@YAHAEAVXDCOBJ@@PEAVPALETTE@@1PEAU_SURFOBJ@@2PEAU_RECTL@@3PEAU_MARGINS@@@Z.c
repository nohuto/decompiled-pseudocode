/*
 * XREFs of ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1403289A8
 * Callers:
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x140329B5C (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x14000FB40 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngNineGrid @ 0x14009EA80 (EngNineGrid.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400CB47C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall EngNineGridHelper(
        struct XDCOBJ *a1,
        struct PALETTE *a2,
        struct PALETTE *a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7,
        struct _MARGINS *a8)
{
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  Gre::Base *v16; // [rsp+60h] [rbp-59h] BYREF
  Gre::Base *v17; // [rsp+68h] [rbp-51h] BYREF
  Gre::Base *v18; // [rsp+70h] [rbp-49h] BYREF
  Gre::Base *v19; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-39h] BYREF
  _DWORD v21[6]; // [rsp+A0h] [rbp-19h] BYREF

  v10 = (int)a4;
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 3776LL);
  v21[0] = 5;
  v21[1] = *(_DWORD *)a8;
  v21[2] = *((_DWORD *)a8 + 1);
  v21[3] = *((_DWORD *)a8 + 2);
  v21[4] = *((_DWORD *)a8 + 3);
  v12 = *(_QWORD *)a1;
  v21[5] = 0;
  v20[0] = 33488896LL;
  v19 = 0LL;
  v13 = *(_QWORD *)(v12 + 976);
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v19,
                       0LL,
                       0,
                       (__int64)a2,
                       (__int64)a2,
                       (__int64)a3,
                       (__int64)a3,
                       *(_DWORD *)(v13 + 184),
                       *(_DWORD *)(v13 + 176),
                       0,
                       0)
    && (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (Gre::Base *)&v18,
                       0LL,
                       0,
                       (__int64)a2,
                       v11,
                       (__int64)a3,
                       (__int64)a3,
                       0,
                       0,
                       0,
                       0)
    && (v20[1] = v18,
        (unsigned int)EXLATEOBJ::bInitXlateObj(
                        (Gre::Base *)&v17,
                        0LL,
                        0,
                        (__int64)a2,
                        v11,
                        (__int64)a3,
                        (__int64)a3,
                        0,
                        0,
                        0,
                        0))
    && (v20[2] = v17,
        (unsigned int)EXLATEOBJ::bInitXlateObj(
                        (Gre::Base *)&v16,
                        0LL,
                        0,
                        v11,
                        (__int64)a2,
                        (__int64)a3,
                        (__int64)a3,
                        0,
                        0,
                        0,
                        0)) )
  {
    v20[3] = v16;
    v14 = EngNineGrid(v10, (__int64)a5, 0, (int)v19, (__int64)a6, (__int64)a7, (__int64)v21, (__int64)v20);
  }
  else
  {
    v14 = 0;
  }
  EXLATEOBJ::vAltUnlock(&v16);
  EXLATEOBJ::vAltUnlock(&v17);
  EXLATEOBJ::vAltUnlock(&v18);
  EXLATEOBJ::vAltUnlock(&v19);
  return v14;
}
