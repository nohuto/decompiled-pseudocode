/*
 * XREFs of ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1403345F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1400D875C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D9158 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1401C06FC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1401C10AC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1401C11A4 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ?pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z @ 0x140206A4C (-pxo@UMPDOBJ@@QEAAHPEAPEAU_XFORMOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDDrvQueryDeviceSupport(
        struct _SURFOBJ *a1,
        struct _XLATEOBJ *a2,
        struct _XFORMOBJ *a3,
        int a4,
        unsigned int a5,
        void *a6,
        unsigned int Size,
        void *a8)
{
  unsigned int v10; // esi
  UMPDOBJ *v11; // rbx
  unsigned int v12; // eax
  ULONG v13; // ecx
  unsigned int v14; // r15d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  ULONG v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // rsi
  char *v22; // rdx
  char *KernelPtr; // rax
  size_t v25; // [rsp+20h] [rbp-108h]
  unsigned int v26; // [rsp+40h] [rbp-E8h] BYREF
  int v27; // [rsp+44h] [rbp-E4h] BYREF
  int v28; // [rsp+48h] [rbp-E0h] BYREF
  UMPDOBJ *v29; // [rsp+50h] [rbp-D8h] BYREF
  int v30; // [rsp+58h] [rbp-D0h]
  void *v31; // [rsp+60h] [rbp-C8h] BYREF
  void *v32; // [rsp+68h] [rbp-C0h] BYREF
  struct _XFORMOBJ *v33; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+80h] [rbp-A8h]
  struct _SURFOBJ *v36; // [rsp+88h] [rbp-A0h]
  _DWORD v37[4]; // [rsp+90h] [rbp-98h] BYREF
  char *v38; // [rsp+A0h] [rbp-88h]
  struct _SURFOBJ *v39; // [rsp+A8h] [rbp-80h] BYREF
  struct _XLATEOBJ *v40; // [rsp+B0h] [rbp-78h] BYREF
  struct _XFORMOBJ *v41; // [rsp+B8h] [rbp-70h] BYREF
  int v42; // [rsp+C0h] [rbp-68h]
  unsigned int v43; // [rsp+C4h] [rbp-64h]
  void *v44; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp-58h]
  void *v46; // [rsp+D8h] [rbp-50h]

  v30 = a4;
  v33 = a3;
  v34 = (unsigned __int64)a8;
  v35 = (unsigned __int64)a6;
  v36 = a1;
  v10 = 1;
  v26 = 1;
  v28 = 0;
  v27 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v32 = 0LL;
  v31 = 0LL;
  memset_0(v37, 0, 0x50uLL);
  v11 = v29;
  if ( !v29 )
    goto LABEL_33;
  v12 = 1;
  if ( !*((_BYTE *)v29 + 456) )
  {
    v14 = a5;
    goto LABEL_14;
  }
  v13 = a2 ? ((4 * a2->cEntries + 7) & 0xFFFFFFF8) + 120 : 96;
  v14 = a5;
  if ( a5 + 7 < a5 )
    goto LABEL_33;
  v15 = (a5 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_33;
  v16 = (Size + 7) & 0xFFFFFFF8;
  v17 = v13 + v15;
  if ( v13 + v15 < v13 )
    goto LABEL_33;
  v18 = v13 + v15;
  v19 = v17 + v16;
  v20 = -1;
  if ( v18 + v16 >= v18 )
    v20 = v19;
  v26 = v20;
  if ( v19 < v18 )
  {
LABEL_33:
    XUMPDOBJ::~XUMPDOBJ(&v29);
    return 0LL;
  }
  v12 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v32, &v31, &v28, &v27, &v26);
  v10 = v12;
  v26 = v12;
LABEL_14:
  if ( v12 )
  {
    v37[1] = 76;
    LOBYTE(v37[0]) = 0;
    v38 = *(char **)v11;
    v39 = a1;
    v40 = a2;
    v41 = v33;
    v21 = (void *)(v34 & -(__int64)(Size != 0));
    v42 = v30;
    v43 = v14;
    v44 = (void *)(v35 & -(__int64)(v14 != 0));
    v45 = Size;
    v46 = v21;
    if ( (!v14 || (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v44, v14))
      && (!Size || (v46 = UMPDOBJ::_AllocUserMem(v11, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v11, (UMPDOBJ *)((char *)v11 + 80), &v39, (unsigned int)v27)
      && (unsigned int)UMPDOBJ::pxlo(v11, &v40)
      && (unsigned int)UMPDOBJ::pxo(v11, &v41)
      && (LODWORD(v25) = 4, (unsigned int)UMPDOBJ::Thunk(v11, v37, 0x50u, &v26, v25) != -1) )
    {
      if ( Size )
      {
        v22 = (char *)v46;
        if ( (unsigned __int64)v46 + Size > MmUserProbeAddress || (char *)v46 + Size < v46 )
        {
          v22 = (char *)v46;
          v11 = v29;
        }
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v11, v22);
        memmove(v21, KernelPtr, Size);
      }
      v10 = v26;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v28 )
    UMPDOBJ::RestoreBitmap(v11, a1, v32, v31, v25, v27);
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
