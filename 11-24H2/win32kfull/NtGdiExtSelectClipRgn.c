/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x140018FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x14001D1D8 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400CE6CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CEC24 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  ULONG v8; // ecx
  DC *v9[14]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v10; // [rsp+90h] [rbp-70h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-60h]
  int v12; // [rsp+A8h] [rbp-58h]
  _QWORD v13[14]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v14; // [rsp+120h] [rbp+20h] BYREF
  __int64 v15; // [rsp+130h] [rbp+30h]
  int v16; // [rsp+138h] [rbp+38h]
  _QWORD v17[14]; // [rsp+140h] [rbp+40h] BYREF
  struct REGION *v18[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct REGION *v19; // [rsp+228h] [rbp+128h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v9, a1);
  v5 = 0;
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    goto LABEL_12;
  }
  v6 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    v8 = 87;
  }
  else
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v9[0]) + 8) & 0xFFFFFFFE) != 0 )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 1, 0);
        if ( v18[0] )
        {
          v6 = DC::iSelect(v9[0], v18[0], a3);
          if ( v6 )
          {
            DLODCOBJ::DLODCOBJ((DLODCOBJ *)v13);
            v11 = 0LL;
            v10 = 0LL;
            v12 = 0;
            v13[0] = 0LL;
            v6 = 0;
            memset(&v13[10], 0, 24);
            if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v10, (struct XDCOBJ *)v9, 1) )
            {
              v19 = XDCOBJ::prgnEffRao(v9);
              v6 = RGNOBJ::iComplexity((RGNOBJ *)&v19);
            }
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v10);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
      }
      else if ( a3 == 5 )
      {
        v6 = DC::iSelect(v9[0], 0LL, 5);
        if ( v6 )
        {
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v17);
          v15 = 0LL;
          v14 = 0LL;
          v16 = 0;
          v17[0] = 0LL;
          v6 = 0;
          memset(&v17[10], 0, 24);
          if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v14, (struct XDCOBJ *)v9, 1) )
          {
            v19 = DC::prgnVisSnap(v9[0]);
            v6 = RGNOBJ::iComplexity((RGNOBJ *)&v19);
          }
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v14);
        }
      }
      goto LABEL_11;
    }
    v8 = 6;
  }
  EngSetLastError(v8);
LABEL_11:
  v5 = v6;
LABEL_12:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v9);
  return v5;
}
