/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x140333960
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10; // rdi
  UMPDOBJ *v14; // rbx
  size_t Size; // [rsp+20h] [rbp-A1h]
  __int64 v17; // [rsp+30h] [rbp-91h] BYREF
  UMPDOBJ *v18; // [rsp+38h] [rbp-89h] BYREF
  void *v19; // [rsp+40h] [rbp-81h]
  _DWORD v20[4]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v21; // [rsp+60h] [rbp-61h]
  struct DHPDEV__ *v22; // [rsp+68h] [rbp-59h]
  void *v23; // [rsp+70h] [rbp-51h] BYREF
  void *v24; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-41h]
  void *v26; // [rsp+88h] [rbp-39h] BYREF
  unsigned int v27; // [rsp+90h] [rbp-31h]
  void *v28; // [rsp+98h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp-21h]
  unsigned int v30; // [rsp+A4h] [rbp-1Dh]

  v10 = 0LL;
  v19 = a7;
  v17 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset_0(v20, 0, 0x58uLL);
  v14 = v18;
  if ( v18 )
  {
    v20[1] = 64;
    LOBYTE(v20[0]) = 0;
    v21 = *(_QWORD *)v18;
    v28 = v19;
    v22 = a1;
    v23 = a2;
    v30 = a9;
    v24 = a3;
    v25 = a4;
    v26 = a5;
    v27 = a6;
    v29 = a8;
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v23, 0x148u) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v24, a4) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v26, a6) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v28, a8) )
          {
            LODWORD(Size) = 8;
            if ( (unsigned int)UMPDOBJ::Thunk(v14, v20, 0x58u, &v17, Size) != -1 )
              v10 = v17;
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v10;
}
