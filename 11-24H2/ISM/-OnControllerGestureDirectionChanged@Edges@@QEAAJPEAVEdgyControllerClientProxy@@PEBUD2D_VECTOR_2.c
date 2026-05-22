/*
 * XREFs of ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AA0DC
 * Callers:
 *     ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156C90 (-OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A83EC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A98F8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerGestureDirectionChanged(
        Edges *this,
        struct EdgyControllerClientProxy *a2,
        const struct D2D_VECTOR_2F *a3)
{
  char *v3; // rdx
  unsigned int v6; // ebx
  int Edge; // eax
  const char *v8; // r9
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)a2 + 88;
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) > 7uLL )
    v3 = *(char **)v3;
  Edge = Edges::FindEdge(this, (const unsigned __int16 *)v3);
  if ( Edge >= 0 )
  {
    v9 = (__int64)Edge << 7;
    *(struct D2D_VECTOR_2F *)(v9 + *(_QWORD *)this + 56) = *a3;
    if ( a3->x != 0.0 && a3->y != 0.0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1D4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v8);
    v10 = 0;
    v11 = 256;
    if ( a3->x == 0.0 )
    {
      if ( a3->y != 0.0 )
      {
        v11 = 288;
        v10 = 1;
      }
    }
    else
    {
      v11 = 272;
      v10 = 2;
    }
    v6 = 0;
    *(_DWORD *)(v9 + *(_QWORD *)this + 92) = v11;
    *(_DWORD *)(v9 + *(_QWORD *)this + 96) = v10;
  }
  return v6;
}
