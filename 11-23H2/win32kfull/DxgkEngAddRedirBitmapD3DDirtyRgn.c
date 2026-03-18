/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0159840
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0083A90 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0158F7A (GreAddBitmapD3DDirtyRgn.c)
 */

__int64 __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, __int64 a2)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rbx
  __int64 *v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v9, a1);
  v3 = v9;
  if ( v9 )
  {
    v4 = v9[6];
    if ( v4 )
    {
      v5 = v9[62];
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, __int64))(v4 + 3448);
        if ( v6 )
          v6((v9[62] + 24) & -(__int64)(v9[62] != 0), a2);
        v3 = v9;
      }
    }
    if ( a2 )
    {
      GreAddBitmapD3DDirtyRgn((Gre::Base *)v3[59], *(_DWORD *)a2, *(const struct _RECTL **)(a2 + 8));
      v3 = v9;
    }
    if ( v3 )
    {
      v11 = 0;
      v7 = *v3;
      HmgDecrementShareReferenceCountEx(v3, &v11);
      if ( v11 )
        GrepDeleteDC(v7, 0x2000000LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
}
