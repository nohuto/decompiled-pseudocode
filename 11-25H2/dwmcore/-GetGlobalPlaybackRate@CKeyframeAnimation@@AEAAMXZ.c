/*
 * XREFs of ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ @ 0x1801BE170
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CKeyframeAnimation::GetGlobalPlaybackRate(CKeyframeAnimation *this)
{
  unsigned __int64 v1; // rdx
  _QWORD *v2; // rsi
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  v1 = *((_QWORD *)this + 7);
  v2 = *(_QWORD **)(*((_QWORD *)this + 3) + 824LL);
  if ( !v1 )
    return *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v3 = v2[60];
  v4 = (_QWORD *)v2[58];
  v5 = *(_QWORD **)(v3
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(v1) ^ (0x100000001B3LL
                                   * (BYTE6(v1) ^ (0x100000001B3LL
                                                 * (BYTE5(v1) ^ (0x100000001B3LL
                                                               * (BYTE4(v1) ^ (0x100000001B3LL
                                                                             * (BYTE3(v1) ^ (0x100000001B3LL
                                                                                           * (BYTE2(v1) ^ (0x100000001B3LL * (BYTE1(v1) ^ (0x100000001B3LL * ((unsigned __int8)v1 ^ 0xCBF29CE484222325uLL)))))))))))))))) & v2[63])
                  + 8);
  if ( v5 == v4 )
  {
LABEL_3:
    v5 = 0LL;
  }
  else
  {
    while ( v1 != v5[2] )
    {
      if ( v5 == *(_QWORD **)(v3
                            + 16
                            * ((0x100000001B3LL
                              * (HIBYTE(v1) ^ (0x100000001B3LL
                                             * (BYTE6(v1) ^ (0x100000001B3LL
                                                           * (BYTE5(v1) ^ (0x100000001B3LL
                                                                         * (BYTE4(v1) ^ (0x100000001B3LL
                                                                                       * (BYTE3(v1) ^ (0x100000001B3LL * (BYTE2(v1) ^ (0x100000001B3LL * (BYTE1(v1) ^ (0x100000001B3LL * ((unsigned __int8)v1 ^ 0xCBF29CE484222325uLL)))))))))))))))) & v2[63])) )
        goto LABEL_3;
      v5 = (_QWORD *)v5[1];
    }
  }
  if ( v5 && v5 != v4 )
    return *(float *)(v5[3] + 72LL);
  else
    return *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
}
