/*
 * XREFs of ?UMPDDrvLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140333B90
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
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

_BOOL8 __fastcall UMPDDrvLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  int v10; // esi
  int v11; // r12d
  unsigned int v12; // r14d
  void *v13; // r13
  UMPDOBJ *v14; // rbx
  unsigned int v16; // eax
  BOOL v17; // edi
  size_t Size; // [rsp+20h] [rbp-C1h]
  unsigned int v19; // [rsp+40h] [rbp-A1h] BYREF
  int v20; // [rsp+44h] [rbp-9Dh] BYREF
  int v21; // [rsp+48h] [rbp-99h] BYREF
  int v22; // [rsp+4Ch] [rbp-95h]
  UMPDOBJ *v23; // [rsp+50h] [rbp-91h] BYREF
  void *v24; // [rsp+58h] [rbp-89h] BYREF
  void *v25; // [rsp+60h] [rbp-81h] BYREF
  struct _CLIPOBJ *v26; // [rsp+68h] [rbp-79h]
  struct _BRUSHOBJ *v27; // [rsp+70h] [rbp-71h]
  struct _RECTL *v28; // [rsp+78h] [rbp-69h]
  _DWORD v29[4]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v30; // [rsp+90h] [rbp-51h]
  struct _SURFOBJ *v31; // [rsp+98h] [rbp-49h] BYREF
  void *v32; // [rsp+A0h] [rbp-41h] BYREF
  void *v33; // [rsp+A8h] [rbp-39h] BYREF
  int v34; // [rsp+B0h] [rbp-31h]
  int v35; // [rsp+B4h] [rbp-2Dh]
  int v36; // [rsp+B8h] [rbp-29h]
  int v37; // [rsp+BCh] [rbp-25h]
  void *v38; // [rsp+C0h] [rbp-21h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp-19h]

  v10 = 1;
  v28 = a8;
  v11 = 0;
  v19 = 1;
  v12 = 0;
  v20 = 0;
  v21 = 0;
  v22 = a4;
  v27 = a3;
  v26 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  v25 = 0LL;
  v13 = 0LL;
  v24 = 0LL;
  memset_0(v29, 0, 0x50uLL);
  v14 = v23;
  if ( v23 )
  {
    v16 = 1;
    v17 = 1;
    if ( *((_BYTE *)v23 + 456) )
    {
      v19 = 152;
      v16 = UMPDOBJ::bThunkLargeBitmap(v23, a1, &v24, &v25, &v20, &v21, &v19);
      v11 = v20;
      v17 = v16;
      v12 = v21;
      v10 = v16;
      v13 = v24;
      v19 = v16;
    }
    if ( v16 )
    {
      v29[1] = 31;
      v17 = 0;
      LOBYTE(v29[0]) = 0;
      v30 = *(_QWORD *)v14;
      v32 = v26;
      v33 = v27;
      v34 = v22;
      v35 = a5;
      v36 = a6;
      v37 = a7;
      v38 = v28;
      v39 = a9;
      v31 = a1;
      if ( (unsigned int)UMPDOBJ::pso(v14, (UMPDOBJ *)((char *)v14 + 80), &v31, v12) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 128), (const void **)&v32, 0x18u, 0LL) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v14, (UMPDOBJ *)((char *)v14 + 160), (const void **)&v33, 0x18u, 0LL) )
          {
            if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v38, 0x10u) )
            {
              LODWORD(Size) = 4;
              if ( (unsigned int)UMPDOBJ::Thunk(v14, v29, 0x50u, &v19, Size) != -1 )
                v17 = v19 != 0;
            }
          }
        }
      }
      v10 = v17;
    }
    if ( v11 )
    {
      UMPDOBJ::RestoreBitmap(v14, a1, v13, v25, Size, v12);
      v17 = v10;
    }
    XUMPDOBJ::~XUMPDOBJ(&v23);
    return v17;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v23);
    return 0LL;
  }
}
