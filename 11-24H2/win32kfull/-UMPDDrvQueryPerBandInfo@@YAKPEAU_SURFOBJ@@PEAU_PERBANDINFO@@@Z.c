/*
 * XREFs of ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1401C0780
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D9158 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvQueryPerBandInfo(struct _SURFOBJ *a1, struct _PERBANDINFO *a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  UMPDOBJ *v6; // rbx
  char *v7; // rax
  char *KernelPtr; // rax
  unsigned int v10; // eax
  char *v11; // rax
  size_t Size; // [rsp+20h] [rbp-49h]
  unsigned int v13; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h] BYREF
  int v15; // [rsp+48h] [rbp-21h] BYREF
  void *v16; // [rsp+50h] [rbp-19h] BYREF
  void *v17; // [rsp+58h] [rbp-11h] BYREF
  UMPDOBJ *v18; // [rsp+60h] [rbp-9h] BYREF
  __int128 v19; // [rsp+68h] [rbp-1h] BYREF
  struct _SURFOBJ *v20[2]; // [rsp+78h] [rbp+Fh] BYREF
  void *v21; // [rsp+88h] [rbp+1Fh]

  v2 = 0;
  v13 = 1;
  v15 = 0;
  v14 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v6 = v18;
  v17 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( v18 )
  {
    if ( !*((_BYTE *)v18 + 456)
      || (v13 = 72, v10 = UMPDOBJ::bThunkLargeBitmap(v18, a1, &v17, &v16, &v15, &v14, &v13), v4 = v14, (v13 = v10) != 0) )
    {
      DWORD1(v19) = 75;
      LOBYTE(v19) = 0;
      v20[0] = *(struct _SURFOBJ **)v6;
      v20[1] = a1;
      if ( (unsigned int)UMPDOBJ::pso(v6, (UMPDOBJ *)((char *)v6 + 80), &v20[1], v4) )
      {
        v7 = UMPDOBJ::_AllocUserMem(v6, 0x14u, 0);
        v21 = v7;
        if ( v7 )
        {
          if ( a2 )
          {
            KernelPtr = UMPDOBJ::GetKernelPtr((char **)v6, v7);
            *(_OWORD *)KernelPtr = *(_OWORD *)&a2->bRepeatThisBand;
            *((_DWORD *)KernelPtr + 4) = a2->ulVertRes;
          }
          LODWORD(Size) = 4;
          if ( (unsigned int)UMPDOBJ::Thunk(v6, &v19, 0x28u, &v13, Size) != -1 && a2 )
          {
            v11 = UMPDOBJ::GetKernelPtr((char **)v6, (char *)v21);
            *(_OWORD *)&a2->bRepeatThisBand = *(_OWORD *)v11;
            a2->ulVertRes = *((_DWORD *)v11 + 4);
          }
        }
      }
    }
    if ( v15 )
      UMPDOBJ::RestoreBitmap(v6, a1, v17, v16, Size, v4);
    v2 = v13;
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v2;
}
