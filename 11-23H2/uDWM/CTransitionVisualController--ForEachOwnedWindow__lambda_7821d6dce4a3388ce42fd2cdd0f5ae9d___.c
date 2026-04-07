/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800E9AD8
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800E9AD8 (CTransitionVisualController--ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800EB91C (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800E9AD8 (CTransitionVisualController--ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___.c)
 *     _lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d_::operator() @ 0x1800E9F98 (_lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 680) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 440);
    if ( !v6 || (*(_BYTE *)(v6 + 248) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 680) & 0xFFF) == 0xFFF )
        {
          v9 = lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
