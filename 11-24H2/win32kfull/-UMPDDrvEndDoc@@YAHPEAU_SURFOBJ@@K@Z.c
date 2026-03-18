/*
 * XREFs of ?UMPDDrvEndDoc@@YAHPEAU_SURFOBJ@@K@Z @ 0x140332FB0
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

_BOOL8 __fastcall UMPDDrvEndDoc(struct _SURFOBJ *a1, int a2)
{
  int v3; // esi
  int v4; // r12d
  unsigned int v5; // r14d
  UMPDOBJ *v6; // rbx
  void *v7; // r13
  unsigned int v9; // eax
  BOOL v10; // edi
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v12; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+44h] [rbp-35h] BYREF
  int v14; // [rsp+48h] [rbp-31h] BYREF
  int v15; // [rsp+4Ch] [rbp-2Dh]
  UMPDOBJ *v16; // [rsp+50h] [rbp-29h] BYREF
  void *v17; // [rsp+58h] [rbp-21h] BYREF
  void *v18; // [rsp+60h] [rbp-19h] BYREF
  __int128 v19; // [rsp+68h] [rbp-11h] BYREF
  struct _SURFOBJ *v20[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+Fh]

  v15 = a2;
  v3 = 1;
  v4 = 0;
  v12 = 1;
  v5 = 0;
  v13 = 0;
  v14 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  v18 = 0LL;
  v6 = v16;
  v7 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( v16 )
  {
    v9 = 1;
    v10 = 1;
    if ( *((_BYTE *)v16 + 456) )
    {
      v12 = 48;
      v9 = UMPDOBJ::bThunkLargeBitmap(v16, a1, &v17, &v18, &v13, &v14, &v12);
      v4 = v13;
      v10 = v9;
      v5 = v14;
      v3 = v9;
      v7 = v17;
      v12 = v9;
    }
    if ( v9 )
    {
      DWORD1(v19) = 34;
      LOBYTE(v19) = 0;
      v20[0] = *(struct _SURFOBJ **)v6;
      LODWORD(v21) = v15;
      v20[1] = a1;
      v10 = 0;
      if ( (unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 80), &v20[1], v5) )
      {
        LODWORD(Size) = 4;
        if ( (unsigned int)UMPDOBJ::Thunk(v6, &v19, 0x28u, &v12, Size) != -1 )
        {
          if ( v12 )
            v10 = 1;
        }
      }
      v3 = v10;
    }
    if ( v4 )
    {
      UMPDOBJ::RestoreBitmap(v6, a1, v7, v18, Size, v5);
      v10 = v3;
    }
    XUMPDOBJ::~XUMPDOBJ(&v16);
    return v10;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v16);
    return 0LL;
  }
}
