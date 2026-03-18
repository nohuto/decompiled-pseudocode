/*
 * XREFs of ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801547D0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801F2234 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(
        CExpressionManager *this,
        struct CBaseExpression *a2)
{
  __int64 v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // r11
  _QWORD *v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rdx

  v3 = *((_QWORD *)this + 71);
  v4 = (_QWORD *)*((_QWORD *)this + 66);
  v5 = *((_QWORD *)this + 68);
  v6 = *(_QWORD **)(v5
                  + 16
                  * (v3 & (0x100000001B3LL
                         * (HIBYTE(a2) ^ (0x100000001B3LL
                                        * (BYTE6(a2) ^ (0x100000001B3LL
                                                      * (BYTE5(a2) ^ (0x100000001B3LL
                                                                    * (BYTE4(a2) ^ (0x100000001B3LL
                                                                                  * (BYTE3(a2) ^ (0x100000001B3LL
                                                                                                * (BYTE2(a2) ^ (0x100000001B3LL * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))))))))))
                  + 8);
  if ( v6 == v4 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != (struct CBaseExpression *)v6[2] )
    {
      if ( v6 == *(_QWORD **)(v5
                            + 16
                            * (v3 & (0x100000001B3LL
                                   * (HIBYTE(a2) ^ (0x100000001B3LL
                                                  * (BYTE6(a2) ^ (0x100000001B3LL
                                                                * (BYTE5(a2) ^ (0x100000001B3LL
                                                                              * (BYTE4(a2) ^ (0x100000001B3LL
                                                                                            * (BYTE3(a2) ^ (0x100000001B3LL * (BYTE2(a2) ^ (0x100000001B3LL * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))))))))))) )
        goto LABEL_4;
      v6 = (_QWORD *)v6[1];
    }
  }
  if ( v6 && v6 != v4 )
  {
    v7 = 2
       * ((0x100000001B3LL
         * (*((unsigned __int8 *)v6 + 23) ^ (0x100000001B3LL
                                           * (*((unsigned __int8 *)v6 + 22) ^ (0x100000001B3LL
                                                                             * (*((unsigned __int8 *)v6 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v6 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v6 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v6 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v6 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v6 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v3);
    if ( *(_QWORD **)(v5 + 8 * v7 + 8) == v6 )
    {
      if ( *(_QWORD **)(v5 + 8 * v7) == v6 )
        *(_QWORD *)(v5 + 8 * v7) = v4;
      else
        v4 = (_QWORD *)v6[1];
      *(_QWORD *)(v5 + 8 * v7 + 8) = v4;
    }
    else if ( *(_QWORD **)(v5 + 8 * v7) == v6 )
    {
      *(_QWORD *)(v5 + 8 * v7) = *v6;
    }
    v8 = *v6;
    --*((_QWORD *)this + 67);
    *(_QWORD *)v6[1] = v8;
    *(_QWORD *)(v8 + 8) = v6[1];
    operator delete(v6, 0x18uLL);
  }
}
