/*
 * XREFs of DxgkEngGetRedirBitmapSharedHandle @ 0x1C0159A80
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0083A90 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngGetRedirBitmapSharedHandle(HDC a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  HWND v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  __int64 v12; // [rsp+98h] [rbp+28h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)&v8, a1);
  v3 = v8;
  *a2 = 0LL;
  if ( v3 )
  {
    v4 = (HWND)v3[59];
    LODWORD(v10) = 0;
    v12 = 0LL;
    GreGetDxSharedSurface(v4, a2, &v12, &v11, &v10, &v7);
    if ( v8 )
    {
      LODWORD(v10) = 0;
      v5 = *v8;
      HmgDecrementShareReferenceCountEx(v8, &v10);
      if ( (_DWORD)v10 )
        GrepDeleteDC(v5, 0x2000000LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v9);
}
