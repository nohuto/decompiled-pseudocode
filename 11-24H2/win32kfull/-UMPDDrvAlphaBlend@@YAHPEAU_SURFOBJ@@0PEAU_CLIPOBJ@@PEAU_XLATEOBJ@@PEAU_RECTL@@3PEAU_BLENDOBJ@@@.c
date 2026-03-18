/*
 * XREFs of ?UMPDDrvAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140332970
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1400D9568 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1401C0F2C (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1401C11A4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x14021D0D8 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDDrvAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v7; // edi
  unsigned int v10; // r14d
  unsigned int v11; // esi
  UMPDOBJ *v12; // rcx
  UMPDOBJ *v13; // rbx
  struct _SURFOBJ *v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // eax
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  struct _SURFOBJ *v24; // [rsp+A8h] [rbp-68h] BYREF
  void *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  UMPDOBJ *v29; // [rsp+D0h] [rbp-40h] BYREF
  struct _CLIPOBJ *v30; // [rsp+D8h] [rbp-38h]
  struct _RECTL *v31; // [rsp+E0h] [rbp-30h]
  struct _RECTL *v32; // [rsp+E8h] [rbp-28h]
  struct _BLENDOBJ *v33; // [rsp+F0h] [rbp-20h]
  _DWORD v34[4]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v35; // [rsp+110h] [rbp+0h]
  struct _SURFOBJ *v36; // [rsp+118h] [rbp+8h] BYREF
  struct _SURFOBJ *v37; // [rsp+120h] [rbp+10h] BYREF
  void *v38; // [rsp+128h] [rbp+18h] BYREF
  struct _XLATEOBJ *v39; // [rsp+130h] [rbp+20h] BYREF
  void *v40; // [rsp+138h] [rbp+28h] BYREF
  void *v41; // [rsp+140h] [rbp+30h] BYREF
  void *v42; // [rsp+148h] [rbp+38h] BYREF

  v7 = 0;
  v31 = a5;
  v32 = a6;
  v10 = 0;
  v33 = a7;
  v11 = 0;
  v30 = a3;
  v24 = a2;
  v19 = 1;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v21 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  memset_0(v34, 0, 0x50uLL);
  v13 = v29;
  if ( !v29 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v12, &v24, 0LL) )
    goto LABEL_21;
  v14 = v24;
  if ( !*((_BYTE *)v13 + 456) )
    goto LABEL_9;
  if ( a4 )
    v15 = ((4 * a4->cEntries + 7) & 0xFFFFFFF8) + 176;
  else
    v15 = 152;
  v19 = v15;
  v16 = UMPDOBJ::bThunkLargeBitmaps(
          v13,
          a1,
          v24,
          0LL,
          &v28,
          &v27,
          &v26,
          &v25,
          0LL,
          0LL,
          &v23,
          &v20,
          &v22,
          &v21,
          0LL,
          0LL,
          &v19);
  v10 = v20;
  v11 = v21;
  v7 = v16;
  v19 = v16;
  if ( v16 )
  {
    v7 = 0;
LABEL_9:
    v34[1] = 71;
    LOBYTE(v34[0]) = 0;
    v35 = *(_QWORD *)v13;
    v38 = v30;
    v40 = v31;
    v41 = v32;
    v42 = v33;
    v36 = a1;
    v37 = v14;
    v39 = a4;
    if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 80), &v36, v10) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 96), &v37, v11) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v13, (UMPDOBJ *)((char *)v13 + 128), (const void **)&v38, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v13, &v39) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v40, 0x10u) )
            {
              if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v41, 0x10u) )
              {
                if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(
                                     v13,
                                     (UMPDOBJ *)((char *)v13 + 320),
                                     (const void **)&v42,
                                     4u,
                                     0LL) )
                {
                  LODWORD(Size) = 4;
                  if ( (unsigned int)UMPDOBJ::Thunk(v13, v34, 0x50u, &v19, Size) != -1 )
                  {
                    if ( v19 )
                      v7 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)v13 + 456) )
    UMPDOBJ::RestoreBitmaps(
      v13,
      (unsigned __int64)a1,
      (unsigned __int64)v14,
      0LL,
      v28,
      v27,
      v26,
      v25,
      0LL,
      0LL,
      v23,
      v10,
      v22,
      v11,
      0,
      0);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v7;
}
