/*
 * XREFs of GreSetBitmapContentOwner @ 0x1C0024E1C
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 *     ChangeWindowBitmapOwner @ 0x1C01BC434 (ChangeWindowBitmapOwner.c)
 *     GreSetLWContentOwner @ 0x1C02D4A44 (GreSetLWContentOwner.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
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
    if ( v12 )
    {
      if ( (*((_DWORD *)v12 + 28) & 0x800) != 0 )
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
        if ( a3 && (unsigned int)SURFACE::Map(v12, v11) <= 1 )
          SURFACE::bUnMap(v12, v11, 0LL);
        if ( v8 )
          GreUnlockDisplayDevice(*((_QWORD *)v8 + 6));
        v7 = v12;
      }
      if ( v7 )
        DEC_SHARE_REF_CNT(v7);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  }
  return v6;
}
