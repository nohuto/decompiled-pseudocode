/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x140333780
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, char *a4)
{
  int v5; // r13d
  unsigned int v6; // r12d
  UMPDOBJ *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // r14d
  size_t Size; // [rsp+20h] [rbp-79h]
  unsigned int v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+44h] [rbp-55h] BYREF
  int v20; // [rsp+48h] [rbp-51h] BYREF
  UMPDOBJ *v21; // [rsp+50h] [rbp-49h] BYREF
  void *v22; // [rsp+58h] [rbp-41h] BYREF
  void *v23; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v25; // [rsp+70h] [rbp-29h]
  __int64 v26; // [rsp+78h] [rbp-21h]
  struct DHPDEV__ *v27; // [rsp+80h] [rbp-19h]
  void *v28; // [rsp+88h] [rbp-11h]
  struct _SURFOBJ *v29; // [rsp+90h] [rbp-9h] BYREF
  char *v30; // [rsp+98h] [rbp-1h]

  v18 = 1;
  *(_WORD *)((char *)v24 + 1) = 0;
  HIBYTE(v24[0]) = 0;
  v25 = 0LL;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v23 = 0LL;
  v22 = 0LL;
  *(_WORD *)((char *)v24 + 1) = 0;
  HIBYTE(v24[0]) = 0;
  v25 = 0LL;
  v10 = v21;
  if ( !v21 )
    goto LABEL_16;
  v24[1] = 66;
  LOBYTE(v24[0]) = 0;
  v11 = *(_QWORD *)v21;
  v28 = a2;
  v12 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v26 = v11;
  v13 = 1;
  v27 = a1;
  v14 = 1;
  v30 = a4;
  v15 = 1;
  v29 = a3;
  if ( *((_BYTE *)v21 + 456) )
  {
    if ( v12 + 7 >= v12 && ((v12 + 7) & 0xFFFFFFF8) + 64 >= 0x40 )
    {
      v18 = ((v12 + 7) & 0xFFFFFFF8) + 64;
      v13 = UMPDOBJ::bThunkLargeBitmap(v21, a3, &v23, &v22, &v19, &v20, &v18);
      v5 = v19;
      v14 = v13;
      v6 = v20;
      v15 = v13;
      v18 = v13;
      goto LABEL_6;
    }
LABEL_16:
    XUMPDOBJ::~XUMPDOBJ(&v21);
    return 0LL;
  }
LABEL_6:
  if ( v13 )
  {
    if ( !(unsigned int)UMPDOBJ::pso(v10, (UMPDOBJ *)((char *)v10 + 80), &v29, v6)
      || (v14 = 1, (v30 = UMPDOBJ::_AllocUserMem(v10, v12, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v10, v24, 0x38u, &v18, Size) == -1)
      || !v18 )
    {
      v14 = 0;
    }
    v15 = v14;
  }
  if ( v5 )
  {
    UMPDOBJ::RestoreBitmap(v10, a3, v23, v22, Size, v6);
    v14 = v15;
  }
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v14;
}
