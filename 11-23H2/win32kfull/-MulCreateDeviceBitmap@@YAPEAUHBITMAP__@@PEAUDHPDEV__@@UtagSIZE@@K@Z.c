/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C015B280
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02B2620 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02B2950 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  __int64 **v3; // rsi
  struct _MDSURF *v4; // rdi
  HBITMAP Bitmap; // rbp
  __int64 *v9; // rcx
  __int64 (__fastcall *v10)(__int64, SIZEL, _QWORD); // rax
  HSURF v11; // rax
  HSURF v12; // r12
  SURFOBJ *v13; // r14
  __int64 v14; // rcx
  _BYTE v16[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 *v18; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v9 = v3[6];
      v18 = v9;
      if ( (v9[224] & 0x8000000) != 0 )
      {
        v10 = (__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v9[343];
        if ( v10 )
        {
          v11 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v10)(v9[221], sizl, iFormat);
          v12 = v11;
          if ( v11 )
          {
            v13 = EngLockSurface(v11);
            if ( v13 )
            {
              if ( !v4 )
              {
                v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
                if ( !v4 )
                  goto LABEL_18;
                Bitmap = EngCreateBitmap(sizl, 0, iFormat, 1u, 0LL);
                if ( !Bitmap )
                {
                  EngFreeMem(v4);
LABEL_18:
                  EngUnlockSurface(v13);
                  EngDeleteSurface(v12);
                  return 0LL;
                }
              }
              v14 = *((_QWORD *)v4 + 1);
              *(_QWORD *)v4 = a1;
              *(_QWORD *)(v14 + 8LL * *((unsigned int *)v3 + 4)) = v13;
              LODWORD(v13[1].hsurf) |= 0x80000u;
              *(_QWORD *)&v13[1].cjBits = Bitmap;
              vSetupDevBitmap((struct PDEVOBJ *)&v18, (struct SURFACE *)&v13[-1].pvScan0);
            }
          }
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      SURFREF::SURFREF((SURFREF *)v16, (HSURF)Bitmap);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 112) |= 0x400000u;
        *(_WORD *)(v17 + 100) = 3;
        *(_QWORD *)(v17 + 24) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
        if ( v17 )
          DEC_SHARE_REF_CNT(v17);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v16);
    }
  }
  return Bitmap;
}
