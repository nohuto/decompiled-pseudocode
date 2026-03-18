/*
 * XREFs of GreSetBitmapContentOwner @ 0x14002D374
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     ChangeWindowBitmapOwner @ 0x140285530 (ChangeWindowBitmapOwner.c)
 *     GreSetLWContentOwner @ 0x14030FF18 (GreSetLWContentOwner.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreSetBitmapContentOwner(HSURF a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  SURFACE *v7; // rcx
  SURFACE *v8; // rbx
  int v9; // edx
  _BYTE v11[32]; // [rsp+20h] [rbp-30h] BYREF
  SURFACE *v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    SURFREF::SURFREF((SURFREF *)v11, a1);
    v7 = v12;
    if ( v12 && (*((_DWORD *)v12 + 28) & 0x800) != 0 )
    {
      v8 = 0LL;
      if ( v12 != (SURFACE *)-24LL )
      {
        v9 = *((_DWORD *)v12 + 28);
        if ( (v9 & 0x80004000) != 0 && (v9 & 0x200) == 0 )
        {
          v8 = v12;
          GreLockDisplayDevice(*((_QWORD *)v12 + 6));
          v7 = v12;
        }
      }
      W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v7 + 272));
      v13 = *((_QWORD *)v12 + 6);
      PDEVOBJ::vSync((PDEVOBJ *)&v13, (struct _SURFOBJ *)((char *)v12 + 24), 0LL, 2u);
      if ( a2 != -1 )
        *((_QWORD *)v12 + 81) = a2;
      *((_DWORD *)v12 + 164) = a3;
      W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v12 + 272));
      v6 = 1;
      if ( a3 && (unsigned int)SURFACE::Map(v12) <= 1 )
        SURFACE::bUnMap(v12);
      if ( v8 )
        GreUnlockDisplayDevice(*((_QWORD *)v8 + 6));
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v11);
  }
  return v6;
}
