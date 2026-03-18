/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1400F8634
 * Callers:
 *     EngCreateDeviceSurface @ 0x1400F84A0 (EngCreateDeviceSurface.c)
 *     EngCreateDeviceBitmap @ 0x1400F8580 (EngCreateDeviceBitmap.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1400F85C0 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1400F8600 (EngCreateBitmap.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x140038F80 (--1SURFMEM@@QEAA@XZ.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1400F86A0 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        unsigned int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rbx
  struct _BASEOBJECT *v9[3]; // [rsp+40h] [rbp-18h] BYREF

  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))CreateDriverSurfMem)(
    v9,
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  v7 = 0LL;
  if ( v9[0] )
    v7 = *((_QWORD *)v9[0] + 4);
  SURFMEM::~SURFMEM(v9);
  return v7;
}
