/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140334990
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1400D9568 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1401C0F2C (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1401C11A4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x14021D0D8 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_BOOL8 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  struct _SURFOBJ *v10; // rdi
  UMPDOBJ *v11; // rcx
  UMPDOBJ *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  BOOL v15; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v18; // [rsp+90h] [rbp-80h] BYREF
  int v19; // [rsp+94h] [rbp-7Ch] BYREF
  int v20; // [rsp+98h] [rbp-78h] BYREF
  int v21; // [rsp+9Ch] [rbp-74h] BYREF
  int v22; // [rsp+A0h] [rbp-70h] BYREF
  int v23; // [rsp+A4h] [rbp-6Ch] BYREF
  int v24; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v25; // [rsp+B0h] [rbp-60h] BYREF
  void *v26; // [rsp+B8h] [rbp-58h] BYREF
  void *v27; // [rsp+C0h] [rbp-50h] BYREF
  void *v28; // [rsp+C8h] [rbp-48h] BYREF
  void *v29; // [rsp+D0h] [rbp-40h] BYREF
  void *v30; // [rsp+D8h] [rbp-38h] BYREF
  void *v31; // [rsp+E0h] [rbp-30h] BYREF
  struct _SURFOBJ *v32; // [rsp+E8h] [rbp-28h]
  UMPDOBJ *v33; // [rsp+F0h] [rbp-20h] BYREF
  struct _SURFOBJ *v34; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v35; // [rsp+100h] [rbp-10h]
  _DWORD v36[4]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v37; // [rsp+120h] [rbp+10h]
  struct _SURFOBJ *v38; // [rsp+128h] [rbp+18h] BYREF
  struct _SURFOBJ *v39; // [rsp+130h] [rbp+20h] BYREF
  struct _SURFOBJ *v40; // [rsp+138h] [rbp+28h] BYREF
  void *v41; // [rsp+140h] [rbp+30h] BYREF
  struct _XLATEOBJ *v42; // [rsp+148h] [rbp+38h] BYREF
  unsigned int v43; // [rsp+150h] [rbp+40h]

  v35 = a1;
  v6 = 0;
  v24 = 0;
  v23 = 0;
  v7 = 0;
  v22 = 0;
  v8 = 0;
  v19 = 0;
  v20 = 0;
  v10 = a2;
  v21 = 0;
  v32 = a2;
  v25 = a3;
  v34 = a4;
  v18 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  v31 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  memset_0(v36, 0, 0x48uLL);
  v12 = v33;
  if ( !v33 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v11, &v25, &v34) )
  {
    v15 = 0;
    goto LABEL_21;
  }
  if ( *((_BYTE *)v12 + 456) )
  {
    if ( a5 )
      v13 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
    else
      v13 = 104;
    v18 = v13;
    v14 = UMPDOBJ::bThunkLargeBitmaps(
            v12,
            v10,
            v25,
            a4,
            &v31,
            &v30,
            &v29,
            &v28,
            &v27,
            &v26,
            &v24,
            &v19,
            &v23,
            &v20,
            &v22,
            &v21,
            &v18);
    v6 = v19;
    v15 = v14;
    v7 = v20;
    v8 = v21;
    v18 = v14;
    if ( !v14 )
      goto LABEL_18;
    v10 = v32;
  }
  v36[1] = 12;
  LOBYTE(v36[0]) = 0;
  v37 = *(_QWORD *)v12;
  v41 = v35;
  v39 = v25;
  v43 = a6;
  v38 = v10;
  v40 = a4;
  v42 = a5;
  v15 = 0;
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 160), (const void **)&v41, 0x18u, 0LL) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), &v38, v6) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 96), &v39, v7) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 112), &v40, v8) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v12, &v42) )
          {
            LODWORD(Size) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v12, v36, 0x48u, &v18, Size) != -1 )
            {
              if ( v18 )
                v15 = 1;
            }
          }
        }
      }
    }
  }
LABEL_18:
  if ( *((_BYTE *)v12 + 456) )
    UMPDOBJ::RestoreBitmaps(
      v12,
      (unsigned __int64)v32,
      (unsigned __int64)v25,
      (unsigned __int64)a4,
      v31,
      v30,
      v29,
      v28,
      v27,
      v26,
      v24,
      v6,
      v23,
      v7,
      v22,
      v8);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v33);
  return v15;
}
