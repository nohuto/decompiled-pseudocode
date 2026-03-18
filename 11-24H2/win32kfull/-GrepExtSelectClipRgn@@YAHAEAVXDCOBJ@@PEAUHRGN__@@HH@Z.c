/*
 * XREFs of ?GrepExtSelectClipRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@HH@Z @ 0x140016AF8
 * Callers:
 *     GreExtSelectClipRgn @ 0x140038DAC (GreExtSelectClipRgn.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CEC24 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GrepExtSelectClipRgn(DC **this, HRGN a2, int a3, int a4)
{
  unsigned int v7; // ebx
  DC *v9; // rdx
  struct REGION *v10; // r8
  ULONG v11; // ecx
  struct REGION *v12; // [rsp+28h] [rbp-99h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-91h] BYREF
  __int64 v14; // [rsp+48h] [rbp-79h]
  int v15; // [rsp+50h] [rbp-71h]
  _QWORD v16[10]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-19h]
  __int64 v18; // [rsp+B0h] [rbp-11h]
  __int64 v19; // [rsp+B8h] [rbp-9h]
  struct REGION *v20[8]; // [rsp+C8h] [rbp+7h] BYREF

  v7 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    v11 = 87;
LABEL_20:
    EngSetLastError(v11);
    return v7;
  }
  if ( !a4 && (*(_DWORD *)(HmgPentryFromPobj(*this) + 8) & 0xFFFFFFFE) == 0 )
  {
    v11 = 6;
    goto LABEL_20;
  }
  if ( a2 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 1, 0);
    if ( v20[0] )
    {
      v7 = DC::iSelect(*this, v20[0], a3);
      if ( v7 )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
        v14 = 0LL;
        *(_OWORD *)&v13[1] = 0LL;
        v15 = 0;
        v16[0] = 0LL;
        v19 = 0LL;
        v7 = 0;
        v18 = 0LL;
        v17 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v13[1], (struct XDCOBJ *)this, 1) )
        {
          v12 = XDCOBJ::prgnEffRao((XDCOBJ *)this);
          v7 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v13[1]);
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
  }
  else if ( a3 == 5 )
  {
    v7 = DC::iSelect(*this, 0LL, 5);
    if ( v7 )
    {
      DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
      v14 = 0LL;
      *(_OWORD *)&v13[1] = 0LL;
      v15 = 0;
      v16[0] = 0LL;
      v19 = 0LL;
      v7 = 0;
      v18 = 0LL;
      v17 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v13[1], (struct XDCOBJ *)this, 1) )
      {
        v9 = *this;
        if ( !*((_QWORD *)*this + 145) || (*((_DWORD *)v9 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(*this) )
          v10 = (struct REGION *)*((_QWORD *)v9 + 143);
        v12 = v10;
        v7 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v13[1]);
    }
  }
  return v7;
}
