/*
 * XREFs of GreSetDIBColorTable @ 0x140174640
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ @ 0x1400D2008 (-pSurfaceEff@XDCOBJ@@QEBAPEAVSURFACE@@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401748D8 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401749C8 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 */

__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-118h] BYREF
  _QWORD v14[14]; // [rsp+30h] [rbp-108h] BYREF
  HDC v15[18]; // [rsp+A0h] [rbp-98h] BYREF

  v7 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  if ( v14[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
    if ( (unsigned int)SURFACE::bDIBSection(v8) && (unsigned int)(*(_DWORD *)(v10 + 96) - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v14[0] + 976LL) + 152LL) |= 0xFu;
      v13 = *(_QWORD *)(v9 + 128);
      v11 = *(_DWORD *)(v13 + 28);
      if ( a2 < v11 )
      {
        if ( a2 + a3 <= v11 )
          v11 = a2 + a3;
        v7 = v11 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v13, a4, a2, v11 - a2);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::~DEVLOCKOBJ(v15);
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return v7;
}
