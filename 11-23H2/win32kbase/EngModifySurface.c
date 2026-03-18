/*
 * XREFs of EngModifySurface @ 0x1C00ABA10
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EE40 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     ?dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z @ 0x1C0047980 (-dhpdev@SURFACE@@QEAAXPEAUDHPDEV__@@@Z.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00AC70C (HmgShareLockIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C00 (--0SURFREF@@QEAA@XZ.c)
 */

BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  __int64 v12; // rax
  __int64 v13; // r10
  _BOOL8 v14; // r9
  int v15; // ecx
  HDEV v16; // rax
  FLONG v17; // r14d
  BOOL v18; // ecx
  BOOL v19; // ebx
  _BYTE v21[32]; // [rsp+20h] [rbp-30h] BYREF
  SURFACE *v22; // [rsp+40h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v21);
  if ( !hdev
    || (v12 = HmgShareLockIgnoreStockBit(hsurf), v22 = (SURFACE *)v12, (v13 = v12) == 0)
    || (v14 = pvReserved == 0LL, (flSurface & 0xFFFFFFF0) != 0) )
  {
    v19 = 0;
    goto LABEL_22;
  }
  v15 = *(_DWORD *)(v12 + 112);
  if ( (v15 & 0x400000) == 0 && *(_WORD *)(v12 + 100) != 1 )
    LODWORD(v14) = 0;
  v16 = *(HDEV *)(v12 + 48);
  if ( v16 && v16 != hdev )
    LODWORD(v14) = 0;
  v17 = flHooks & 0xFFFFB7FF;
  if ( v15 < 0 && (((_DWORD)hdev[43] & 0x3B5EF) != v17 || ((_DWORD)hdev[10] & 0x400) == 0) )
    LODWORD(v14) = 0;
  if ( pvScan0 && lDelta )
  {
    v19 = 0;
    if ( (v17 & 0x1000) != 0 || (flSurface & 1) == 0 )
      v19 = v14;
    if ( v19 )
    {
      *(_QWORD *)(v13 + 80) = pvScan0;
      *((_DWORD *)v22 + 22) = lDelta;
      *((_WORD *)v22 + 50) = 0;
      if ( lDelta <= 0 )
      {
        *((_QWORD *)v22 + 9) = (char *)pvScan0 + lDelta * (*((_DWORD *)v22 + 15) - 1);
        *((_WORD *)v22 + 51) &= ~1u;
      }
      else
      {
        *((_QWORD *)v22 + 9) = pvScan0;
        *((_WORD *)v22 + 51) |= 1u;
      }
LABEL_13:
      if ( (flSurface & 1) != 0 )
        *((_WORD *)v22 + 51) |= 0x20u;
      else
        *((_WORD *)v22 + 51) &= ~0x20u;
      if ( (flSurface & 2) != 0 )
        *((_DWORD *)v22 + 28) |= 0x200u;
      else
        *((_DWORD *)v22 + 28) &= ~0x200u;
      if ( (flSurface & 4) != 0 )
        *((_DWORD *)v22 + 29) |= 0x100u;
      else
        *((_DWORD *)v22 + 29) &= ~0x100u;
      if ( (flSurface & 8) != 0 )
        *((_DWORD *)v22 + 29) |= 0x2000u;
      else
        *((_DWORD *)v22 + 29) &= ~0x2000u;
      *((_QWORD *)v22 + 3) = dhsurf;
      *((_QWORD *)v22 + 17) = 0LL;
      SURFACE::hdev(v22, hdev);
      SURFACE::dhpdev(v22, *((struct DHPDEV__ **)hdev + 221));
      *((_DWORD *)v22 + 28) = v17 | *((_DWORD *)v22 + 28) & 0xFFFC4A10;
    }
  }
  else
  {
    v18 = 0;
    if ( (v17 & 0x29) == 0x29 )
      v18 = v14;
    v19 = dhsurf != 0LL && (flSurface & 1) != 0 && v18;
    if ( v19 )
    {
      *(_QWORD *)(v13 + 80) = 0LL;
      *((_QWORD *)v22 + 9) = 0LL;
      *((_DWORD *)v22 + 22) = 0;
      if ( *((_WORD *)v22 + 50) != 1 )
        *((_WORD *)v22 + 50) = 3;
      goto LABEL_13;
    }
  }
LABEL_22:
  SURFREF::~SURFREF((SURFREF *)v21);
  return v19;
}
