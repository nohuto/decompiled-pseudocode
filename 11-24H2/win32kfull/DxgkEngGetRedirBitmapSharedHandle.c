/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1400CF090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     GreGetDxSharedSurface @ 0x14015E6B0 (GreGetDxSharedSurface.c)
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _BYTE v5[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v6[11]; // [rsp+40h] [rbp-58h] BYREF
  int v7; // [rsp+A8h] [rbp+10h] BYREF
  char v8; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  v3 = v6[0];
  *a2 = 0LL;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 472);
    v7 = 0;
    v9 = 0LL;
    GreGetDxSharedSurface(v4, (_DWORD)a2, (unsigned int)&v9, (unsigned int)&v8, (__int64)&v7, (__int64)v5);
  }
  DCOBJA::~DCOBJA((DCOBJA *)v6);
}
