/*
 * XREFs of xxxSetWindowRgn @ 0x1400F4A4C
 * Callers:
 *     NtUserSetWindowRgn @ 0x1400F4980 (NtUserSetWindowRgn.c)
 *     NtUserSetWindowRgnEx @ 0x14029F2D0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1400F4B34 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     MirrorRegion @ 0x1400F553C (MirrorRegion.c)
 */

__int64 __fastcall xxxSetWindowRgn(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = 0;
  if ( a2 )
  {
    v6 = UserValidateCopyRgn(a2);
    v7 = v6;
    if ( !v6 )
    {
LABEL_6:
      GreDeleteObject(v7);
      return v3;
    }
    MirrorRegion(a1, v6, 0LL);
  }
  else
  {
    v7 = 1LL;
  }
  v8 = InternalBeginDeferWindowPos(1LL);
  if ( !v8
    || (v9 = _DeferWindowPos(v8, a1, 0LL, 0LL, 0, 0, 0, a3 != 0 ? 16783415 : 16783423, 0)) == 0
    || (*(_QWORD *)(*(_QWORD *)(v9 + 40) + 112LL) = v7, (v3 = xxxEndDeferWindowPosEx((struct tagSMWP *)v9, 0LL)) == 0) )
  {
    if ( v7 != 1 )
      goto LABEL_6;
  }
  return v3;
}
