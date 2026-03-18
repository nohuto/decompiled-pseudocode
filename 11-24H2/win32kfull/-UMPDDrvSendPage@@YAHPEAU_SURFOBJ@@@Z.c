/*
 * XREFs of ?UMPDDrvSendPage@@YAHPEAU_SURFOBJ@@@Z @ 0x140334CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvSendPage(struct _SURFOBJ *a1)
{
  int v1; // esi
  int v2; // r15d
  unsigned int v3; // r14d
  UMPDOBJ *v4; // rbx
  void *v5; // r12
  void *v6; // r13
  unsigned int v8; // eax
  BOOL v9; // edi
  size_t Size; // [rsp+28h] [rbp-49h]
  unsigned int v11; // [rsp+48h] [rbp-29h] BYREF
  int v12; // [rsp+4Ch] [rbp-25h] BYREF
  int v13; // [rsp+50h] [rbp-21h] BYREF
  struct _SURFOBJ *v14; // [rsp+58h] [rbp-19h]
  UMPDOBJ *v15; // [rsp+60h] [rbp-11h] BYREF
  void *v16; // [rsp+68h] [rbp-9h] BYREF
  void *v17; // [rsp+70h] [rbp-1h] BYREF
  __int128 v18; // [rsp+78h] [rbp+7h] BYREF
  struct _SURFOBJ *v19[2]; // [rsp+88h] [rbp+17h] BYREF

  v14 = a1;
  v1 = 1;
  v2 = 0;
  v11 = 1;
  v3 = 0;
  v12 = 0;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  v4 = v15;
  v5 = 0LL;
  v6 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v19 = 0LL;
  if ( v15 )
  {
    v8 = 1;
    v9 = 1;
    if ( *((_BYTE *)v15 + 456) )
    {
      v11 = 40;
      v8 = UMPDOBJ::bThunkLargeBitmap(v15, v14, &v16, &v17, &v12, &v13, &v11);
      v2 = v12;
      v9 = v8;
      v3 = v13;
      v1 = v8;
      v5 = v16;
      v6 = v17;
      v11 = v8;
    }
    if ( v8 )
    {
      LOBYTE(v18) = 0;
      DWORD1(v18) = 32;
      v19[0] = *(struct _SURFOBJ **)v4;
      v19[1] = v14;
      v9 = 0;
      if ( (unsigned int)UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 80), &v19[1], v3) )
      {
        LODWORD(Size) = 4;
        if ( (unsigned int)UMPDOBJ::Thunk(v4, &v18, 0x20u, &v11, Size) != -1 )
        {
          if ( v11 )
            v9 = 1;
        }
      }
      v1 = v9;
    }
    if ( v2 )
    {
      UMPDOBJ::RestoreBitmap(v4, v14, v5, v6, Size, v3);
      v9 = v1;
    }
    XUMPDOBJ::~XUMPDOBJ(&v15);
    return v9;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v15);
    return 0LL;
  }
}
