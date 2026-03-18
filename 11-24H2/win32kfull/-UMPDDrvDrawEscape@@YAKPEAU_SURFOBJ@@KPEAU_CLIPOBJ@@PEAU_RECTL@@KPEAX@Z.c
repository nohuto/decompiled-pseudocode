/*
 * XREFs of ?UMPDDrvDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x140332DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D8D1C (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z @ 0x1401C0748 (-bNeedThunk@UMPDOBJ@@QEBAHPEAX@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDDrvDrawEscape(
        struct _SURFOBJ *a1,
        int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v7; // edi
  unsigned int v9; // r14d
  UMPDOBJ *v10; // rbx
  int v11; // eax
  UMPDOBJ *v12; // rcx
  size_t Size; // [rsp+20h] [rbp-B9h]
  int v15; // [rsp+40h] [rbp-99h] BYREF
  int v16; // [rsp+44h] [rbp-95h] BYREF
  int v17; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v18; // [rsp+4Ch] [rbp-8Dh] BYREF
  void *v19; // [rsp+50h] [rbp-89h] BYREF
  void *v20; // [rsp+58h] [rbp-81h] BYREF
  UMPDOBJ *v21; // [rsp+60h] [rbp-79h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-71h]
  struct _RECTL *v23; // [rsp+70h] [rbp-69h]
  _DWORD v24[4]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v25; // [rsp+90h] [rbp-49h]
  struct _SURFOBJ *v26; // [rsp+98h] [rbp-41h] BYREF
  int v27; // [rsp+A0h] [rbp-39h]
  void *v28; // [rsp+A8h] [rbp-31h] BYREF
  void *v29; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp-21h]
  void *v31; // [rsp+C0h] [rbp-19h] BYREF

  v7 = -1;
  v23 = a4;
  v16 = -1;
  v22 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v20 = 0LL;
  v19 = 0LL;
  v9 = 0;
  v17 = 0;
  v15 = 0;
  memset_0(v24, 0, 0x48uLL);
  v10 = v21;
  if ( v21 )
  {
    if ( !*((_BYTE *)v21 + 456) )
      goto LABEL_6;
    if ( a5 + 7 < a5 || ((a5 + 7) & 0xFFFFFFF8) + 120 < 0x78 )
      goto LABEL_16;
    v18 = ((a5 + 7) & 0xFFFFFFF8) + 120;
    v11 = UMPDOBJ::bThunkLargeBitmap(v21, a1, &v20, &v19, &v17, &v15, &v18);
    v9 = v15;
    if ( v11 )
    {
LABEL_6:
      v24[1] = 25;
      LOBYTE(v24[0]) = 0;
      v25 = *(_QWORD *)v10;
      v26 = a1;
      v28 = v22;
      v27 = a2;
      v29 = v23;
      v30 = a5;
      v31 = (void *)(a6 & -(__int64)(a5 != 0));
      if ( !a5
        || !(unsigned int)UMPDOBJ::bNeedThunk(v10, (PVOID)(a6 & -(__int64)(a5 != 0)))
        || (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v31, a5) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 80), &v26, v9) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v10, (UMPDOBJ *)((char *)v10 + 128), (const void **)&v28, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v29, 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v10, v24, 0x48u, &v16, Size) != -1 )
                v7 = v16;
            }
          }
        }
      }
    }
    if ( v17 )
      UMPDOBJ::RestoreBitmap(v10, a1, v20, v19, Size, v9);
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v7;
}
