/*
 * XREFs of ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x1800F6A10
 * Callers:
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800F68F8 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079178 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 */

void __fastcall CScopedClipStack::RestoreScopeFromClipStack(CScopedClipStack *this, const struct CScopedClipStack *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned int v7; // r11d
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  bool v11; // zf

  v2 = *((_QWORD *)this + 243);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 244) - v2) >> 3);
  v7 = -858993459 * ((__int64)(*((_QWORD *)this + 244) - v2) >> 3) - *(_DWORD *)(v4 - 176);
  v8 = v7;
  if ( v7 < v6 )
  {
    do
    {
      v10 = v3;
      v6 = v2;
      if ( !v5 && *(_QWORD *)(v2 + 40 * v8 + 24) )
      {
        *(_QWORD *)(v2 + 40 * v8 + 24) = 0LL;
        --*(_QWORD *)(v4 - 160);
        v6 = *((_QWORD *)this + 243);
      }
      ++v3;
      v11 = *(_BYTE *)(v2 + 40 * v8 + 36) == 0;
      v2 = v6;
      if ( v11 )
        v3 = v10;
      v8 = ++v7;
    }
    while ( v7 < 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 244) - v6) >> 3) );
  }
  v9 = *(_QWORD *)(v4 - 16);
  if ( v9 )
  {
    while ( 0x84BDA12F684BDA13uLL * ((__int64)(*(_QWORD *)(v9 + 24) - *(_QWORD *)(v9 + 16)) >> 4) > v3 )
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back(
        (__int64 *)(v9 + 16),
        v6);
  }
}
