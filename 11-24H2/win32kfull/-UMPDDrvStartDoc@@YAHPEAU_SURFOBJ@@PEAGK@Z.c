/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x140334E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1401CACB8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  int v3; // esi
  int v4; // r12d
  unsigned int v5; // r15d
  UMPDOBJ *v7; // rbx
  void *v8; // r13
  unsigned int v9; // eax
  BOOL v10; // edi
  __int64 v11; // rax
  unsigned int v12; // eax
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v15; // [rsp+40h] [rbp-49h] BYREF
  int v16; // [rsp+44h] [rbp-45h] BYREF
  int v17; // [rsp+48h] [rbp-41h] BYREF
  int v18; // [rsp+4Ch] [rbp-3Dh]
  struct _SURFOBJ *v19; // [rsp+50h] [rbp-39h]
  UMPDOBJ *v20; // [rsp+58h] [rbp-31h] BYREF
  void *v21; // [rsp+60h] [rbp-29h] BYREF
  void *v22; // [rsp+68h] [rbp-21h] BYREF
  __int128 v23; // [rsp+70h] [rbp-19h] BYREF
  struct _SURFOBJ *v24[2]; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int16 *v25[2]; // [rsp+90h] [rbp+7h] BYREF

  v19 = a1;
  v3 = 1;
  v16 = 0;
  v15 = 1;
  v4 = 0;
  v17 = 0;
  v5 = 0;
  v18 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v7 = v20;
  v21 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  if ( !v20 )
    goto LABEL_19;
  v9 = 1;
  v10 = 1;
  if ( *((_BYTE *)v20 + 456) )
  {
    v15 = 56;
    if ( !a2 )
    {
LABEL_9:
      v9 = UMPDOBJ::bThunkLargeBitmap(v20, v19, &v21, &v22, &v16, &v17, &v15);
      v4 = v16;
      v10 = v9;
      v5 = v17;
      v3 = v9;
      v8 = v21;
      v15 = v9;
      goto LABEL_10;
    }
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
    v12 = 2 * v11 + 2;
    if ( v12 + 7 >= v12 && ((v12 + 7) & 0xFFFFFFF8) + 56 >= 0x38 )
    {
      v15 = ((v12 + 7) & 0xFFFFFFF8) + 56;
      goto LABEL_9;
    }
LABEL_19:
    XUMPDOBJ::~XUMPDOBJ(&v20);
    return 0LL;
  }
LABEL_10:
  if ( v9 )
  {
    DWORD1(v23) = 35;
    v10 = 0;
    LOBYTE(v23) = 0;
    v24[0] = *(struct _SURFOBJ **)v7;
    v24[1] = v19;
    LODWORD(v25[1]) = v18;
    v25[0] = a2;
    if ( (unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 80), &v24[1], v5) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkStringW(v7, v25) )
      {
        LODWORD(Size) = 4;
        if ( (unsigned int)UMPDOBJ::Thunk(v7, &v23, 0x30u, &v15, Size) != -1 )
          v10 = v15 != 0;
      }
    }
    v3 = v10;
  }
  if ( v4 )
  {
    UMPDOBJ::RestoreBitmap(v7, v19, v8, v22, Size, v5);
    v10 = v3;
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v10;
}
