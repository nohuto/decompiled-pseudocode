/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18012E050
 * Callers:
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18010A678 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x18012D9F0 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1801B97AC (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801E34FC (--1CProjectedShadow@@MEAA@XZ.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801ECF34 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801F5E8C (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801FACB0 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z @ 0x180297388 (-RemoveAllSharedLights@CVisual@@AEAAJW4LightBehavior@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

bool __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, unsigned __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // r10
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // r8
  bool result; // al
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  HANDLE ProcessHeap; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbx

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)this & 2LL;
  if ( (*(_QWORD *)this & 2) != 0 )
  {
    v6 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    v7 = *v6;
  }
  else
  {
    v7 = *(_QWORD *)this & 1LL;
    v6 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v7 == 1 )
  {
    if ( a2 == v6 )
    {
      result = 1;
      *(_QWORD *)this = 0LL;
      return result;
    }
    return 0;
  }
  if ( !v7 )
    return 0;
  v13 = 0;
  v14 = 0LL;
  do
  {
    if ( a2 == (unsigned __int64 *)v6[v14 + 2] )
      break;
    v14 = ++v13;
  }
  while ( v13 < v7 );
  v9 = v13;
  if ( v13 >= v7 )
    return 0;
  v10 = 1LL;
  if ( v5 )
    v11 = *v6;
  else
    v11 = v2 & 1;
  if ( v9 < v11 )
  {
    if ( v11 - v9 <= 1 )
      v10 = v11 - v9;
    if ( v11 == v10 )
    {
      if ( v11 > 1 )
      {
        if ( v6 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v6);
        }
      }
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v15 = v11 - v10;
      if ( v15 == 1 )
      {
        v16 = v6[(v10 & (v9 - 1)) + 2];
        operator delete(v6);
        *(_QWORD *)this = v16 | 1;
      }
      else
      {
        if ( v9 < v15 )
          memmove_0(&v6[v9 + 2], &v6[v9 + 2 + v10], 8 * (v15 - v9));
        *v6 = v15;
      }
    }
  }
  return 1;
}
