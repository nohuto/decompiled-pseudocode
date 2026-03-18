/*
 * XREFs of GreMarkDeletableBrush @ 0x1C00D5A10
 * Callers:
 *     RecolorDeskPattern @ 0x1C009FC30 (RecolorDeskPattern.c)
 *     SetDesktopPattern @ 0x1C00D6380 (SetDesktopPattern.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00D5DB4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00D5E54 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

void __fastcall GreMarkDeletableBrush(HBRUSH a1)
{
  __int64 v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v3, a1);
  if ( v3[0] && (*(_DWORD *)(v3[0] + 40LL) & 0x200) == 0 && a1 )
  {
    LOBYTE(v2) = 16;
    HmgMarkDeletable(a1, v2);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v3);
}
