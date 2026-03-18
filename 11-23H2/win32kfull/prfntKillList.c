/*
 * XREFs of prfntKillList @ 0x1C00C54B0
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00C5280 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0115720 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 * Callees:
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C007E070 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C007E108 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C007E1B0 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00CE118 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CE188 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall prfntKillList(Gre::Base *a1)
{
  __int64 v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 *v4; // rbx
  struct RFONT *v5; // rsi
  __int64 v6; // rcx
  struct RFONT *v7; // rax
  __int64 *v8; // rdx
  struct RFONT *v9; // rsi
  __int64 v10; // rcx
  struct RFONT *v11; // rax
  __int64 *v12; // rdx
  int v13; // ecx
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  struct RFONT *v18; // [rsp+78h] [rbp+38h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v1 = 0LL;
  v20 = 0LL;
  v3 = Gre::Base::Globals(a1);
  v17 = *((_QWORD *)v3 + 3);
  GreAcquireSemaphore(v17);
  v16 = *((_QWORD *)v3 + 1);
  GreAcquireSemaphore(v16);
  GreAcquireHmgrSemaphore();
  v4 = (__int64 *)*((_QWORD *)v3 + 760);
  if ( v4 )
  {
    do
    {
      if ( (v4[5] & 1) != 0 )
      {
        v19 = v4;
        v5 = PDEVOBJ::prfntActive((PDEVOBJ *)&v19);
        while ( v5 )
        {
          v6 = *(_QWORD *)a1;
          v7 = v5;
          v18 = v5;
          v5 = (struct RFONT *)*((_QWORD *)v5 + 84);
          if ( *((_QWORD *)v7 + 16) == v6 && *((int *)v7 + 165) <= 0 )
          {
            v15 = *(_QWORD *)(v6 + 72);
            RFONTOBJ::vRemove((__int64)&v18, &v15, 0);
            *(_QWORD *)(*(_QWORD *)a1 + 72LL) = v15;
            if ( (v4[5] & 0x800000) != 0 )
              v8 = (__int64 *)v4[437];
            else
              v8 = v4;
            RFONTOBJ::vRemove((__int64)&v18, v8 + 189, 1);
            RFONTOBJ::vInsert(&v18, &v20, 1LL);
          }
          v18 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
        }
        v9 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v19);
        while ( v9 )
        {
          v10 = *(_QWORD *)a1;
          v11 = v9;
          v18 = v9;
          v9 = (struct RFONT *)*((_QWORD *)v9 + 84);
          if ( *((_QWORD *)v11 + 16) == v10 )
          {
            v15 = *(_QWORD *)(v10 + 72);
            RFONTOBJ::vRemove((__int64)&v18, &v15, 0);
            *(_QWORD *)(*(_QWORD *)a1 + 72LL) = v15;
            if ( (v4[5] & 0x800000) != 0 )
              v12 = (__int64 *)v4[437];
            else
              v12 = v4;
            RFONTOBJ::vRemove((__int64)&v18, v12 + 190, 1);
            RFONTOBJ::vInsert(&v18, &v20, 1LL);
            v13 = PDEVOBJ::cInactive((PDEVOBJ *)&v19) - 1;
            if ( (v4[5] & 0x800000) != 0 )
              *(_DWORD *)(v4[437] + 1528) = v13;
            else
              *((_DWORD *)v4 + 382) = v13;
          }
          v18 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
        }
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 );
    v1 = v20;
  }
  GreReleaseHmgrSemaphore();
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  return v1;
}
