/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x14032AB18
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x140329100 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14004F4C0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1400D5534 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400D5640 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, LONG a3)
{
  unsigned int v3; // edi
  __int64 *v8; // rbx
  __int64 v9; // r8
  struct _SURFOBJ *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  _DWORD *pvScan0; // r14
  struct _POINTL v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _SPRITESTATE *v18[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v19; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  v16 = 0LL;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v17 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v17);
  v10 = (struct _SURFOBJ *)v8[129];
  v19.right = a2 + 1;
  v19.bottom = a3 + 1;
  v11 = *((_QWORD *)a1 + 2);
  v19.left = a2;
  v19.top = a3;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 104LL);
  if ( (*(_DWORD *)(v12 + 24) & 2) != 0 )
    v13 = **(_DWORD **)(v12 + 112) | *(_DWORD *)(*(_QWORD *)(v12 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
  else
    v13 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v19, v9) )
  {
    v16.x = -a2;
    v16.y = -a3;
    pvScan0 = v10->pvScan0;
    *pvScan0 = 0;
    vSpComposite(a1, &v16, v10, &v19);
    if ( (v13 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v16, v10, &v19);
      LOBYTE(v3) = (v13 & *pvScan0) != v13;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v14);
  return v3;
}
