/*
 * XREFs of ?bSpComputeUncoveredSpriteRegion@@YAHAEAVPDEVOBJ@@AEAVRGNOBJ@@@Z @ 0x1401C9314
 * Callers:
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1401C91D8 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?DownloadScans@ENUMUNCOVERED@@QEBA?AUSCAN_DATA@1@XZ @ 0x1401C9420 (-DownloadScans@ENUMUNCOVERED@@QEBA-AUSCAN_DATA@1@XZ.c)
 *     ?vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z @ 0x140263E0C (-vSpComputeSpriteRanges@@YAXPEAU_SPRITESTATE@@W4vSpComputeSpriteRangesOptions@@@Z.c)
 */

__int64 __fastcall bSpComputeUncoveredSpriteRegion(struct PDEVOBJ *a1, struct RGNOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // ebx
  int *v9; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 196LL) )
    vSpComputeSpriteRanges(v2 + 80);
  v4 = *(_QWORD *)(v2 + 224);
  v11 = *(_DWORD *)(v2 + 132);
  v12 = v4;
  v5 = v4 + *(_QWORD *)(v4 + 8);
  v14 = v4 + 8;
  v6 = *(_QWORD *)(v2 + 232) - v4;
  v13 = v5;
  v15 = v6;
  ENUMUNCOVERED::DownloadScans(&v11, &v9);
  if ( v9 && v10 )
  {
    v16 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
    v7 = RGNCOREOBJ::bUpload((RGNCOREOBJ *)&v16, v9, v10);
    Win32FreePool(v9);
    return v7;
  }
  else
  {
    RGNOBJ::vSet(a2);
    if ( v9 )
      Win32FreePool(v9);
    return 1LL;
  }
}
