/*
 * XREFs of GreGetDIBColorTable @ 0x140174780
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401748D8 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401748F8 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rdx
  SURFACE *v10; // rcx
  __int64 *v11; // rdx
  int v12; // r8d
  unsigned int v13; // ecx
  ULONG v15; // ecx
  _QWORD v16[3]; // [rsp+20h] [rbp-E0h] BYREF
  SURFACE *v17; // [rsp+38h] [rbp-C8h]
  HDC v18[18]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+158h] [rbp+58h] BYREF

  v7 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  if ( !a4 )
  {
    v15 = 87;
LABEL_19:
    EngSetLastError(v15);
    goto LABEL_14;
  }
  if ( !v16[0] )
  {
    v15 = 6;
    goto LABEL_19;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18);
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v16);
  v9 = Gre::Base::Globals(v8);
  v10 = *(SURFACE **)(v16[0] + 496LL);
  if ( v10 )
  {
    if ( v17 )
      v10 = v17;
  }
  else
  {
    v10 = (SURFACE *)*((_QWORD *)v9 + 533);
  }
  if ( ((unsigned int)SURFACE::bDIBSection(v10) || *v11) && (unsigned int)(v12 - 1) <= 2 )
  {
    v19 = *v11;
    v13 = *(_DWORD *)(v19 + 28);
    if ( a2 < v13 )
    {
      if ( a2 + a3 <= v13 )
        v13 = a2 + a3;
      v7 = v13 - a2;
      XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v19, a4, a2, v13 - a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ(v18);
LABEL_14:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v7;
}
