/*
 * XREFs of ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x180081988
 * Callers:
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x180081870 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AAF98 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 */

void __fastcall CScopedClipStack::RestoreScopeFromClipStack(CScopedClipStack *this, const struct CScopedClipStack *a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // r11d
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  bool v11; // zf

  v2 = *((_QWORD *)this + 243);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v6 = -858993459 * ((*((_QWORD *)this + 244) - v2) >> 3) - *(_DWORD *)(v4 - 176);
  v7 = v6;
  if ( v6 < 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v2) >> 3) )
  {
    do
    {
      v9 = v3;
      v10 = v2;
      if ( !v5 && *(_QWORD *)(v2 + 40 * v7 + 24) )
      {
        *(_QWORD *)(v2 + 40 * v7 + 24) = 0LL;
        --*(_QWORD *)(v4 - 160);
        v10 = *((_QWORD *)this + 243);
      }
      ++v3;
      v11 = *(_BYTE *)(v2 + 40 * v7 + 36) == 0;
      v2 = v10;
      if ( v11 )
        v3 = v9;
      v7 = ++v6;
    }
    while ( v6 < 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v10) >> 3) );
  }
  v8 = *(_QWORD *)(v4 - 16);
  if ( v8 )
  {
    while ( 0x84BDA12F684BDA13uLL * ((__int64)(*(_QWORD *)(v8 + 24) - *(_QWORD *)(v8 + 16)) >> 4) > v3 )
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(v8 + 16);
  }
}
