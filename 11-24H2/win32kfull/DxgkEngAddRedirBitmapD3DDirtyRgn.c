/*
 * XREFs of DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1400CE740
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1400CE900 (GreAddBitmapD3DDirtyRgn.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgn(HDC a1, unsigned int *a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64, unsigned int *); // rax
  _QWORD v7[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v3 = v7[0];
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 48LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v7[0] + 496LL);
      if ( (*(_DWORD *)(v5 + 116) & 1) != 0 )
      {
        ++*(_DWORD *)(v5 + 92);
        v6 = *(void (__fastcall **)(__int64, unsigned int *))(v4 + 3464);
        if ( v6 )
          v6((*(_QWORD *)(v7[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v7[0] + 496LL) != 0LL), a2);
        v3 = v7[0];
      }
    }
    if ( a2 )
      GreAddBitmapD3DDirtyRgn(*(_QWORD *)(v3 + 472), *a2, *((_QWORD *)a2 + 1));
  }
  DCOBJA::~DCOBJA((DCOBJA *)v7);
}
