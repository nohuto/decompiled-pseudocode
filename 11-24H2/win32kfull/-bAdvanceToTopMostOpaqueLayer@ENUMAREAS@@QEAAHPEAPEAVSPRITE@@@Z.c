/*
 * XREFs of ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x14004EFA0
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x14004F094 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032D89C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall ENUMAREAS::bAdvanceToTopMostOpaqueLayer(ENUMAREAS *this, struct SPRITE **a2)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  _DWORD *v10; // rbx
  __int64 result; // rax

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  v4 = *((_QWORD *)this + 9);
  v7 = 0LL;
  v8 = *(_QWORD *)(v2 + 8) + v2 - 16;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, v2) + 96) + 4824LL) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 8);
      if ( (*(_DWORD *)v9 & 8) != 0 )
      {
        v10 = *(_DWORD **)(v9 + 184);
        if ( !v10
          || REGION_CORE::get_sizeScan((REGION_CORE *)(v10 + 6)) <= 0x38
          && v10[13] <= *(_DWORD *)v4
          && v10[15] >= *(_DWORD *)(v4 + 4)
          && v10[14] <= *((_DWORD *)this + 9)
          && v10[16] >= *((_DWORD *)this + 10) )
        {
          v7 = v4;
        }
      }
      if ( v4 >= v8 || *(_DWORD *)(v4 + 16) != *(_DWORD *)v4 )
        break;
      v4 += 16LL;
    }
  }
  if ( v7 && *a2 != *(struct SPRITE **)(v7 + 8) )
  {
    *((_QWORD *)this + 9) = v7;
    v3 = 1;
  }
  result = v3;
  *a2 = *(struct SPRITE **)(*((_QWORD *)this + 9) + 8LL);
  return result;
}
