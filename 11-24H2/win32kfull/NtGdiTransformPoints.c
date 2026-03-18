/*
 * XREFs of NtGdiTransformPoints @ 0x140095490
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z @ 0x14009565C (-GrepTransformPoints@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@1HH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiTransformPoints(HDC a1, void *Src, char *a3, int a4, int a5)
{
  __int64 v5; // rsi
  unsigned int v9; // edi
  struct tagPOINT *v10; // rbx
  size_t v11; // r8
  _QWORD v13[14]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE Srca[80]; // [rsp+C0h] [rbp-98h] BYREF

  v5 = a4;
  v9 = 1;
  v10 = (struct tagPOINT *)Srca;
  if ( a4 > 0 )
  {
    if ( a4 > 10 )
    {
      v10 = 0LL;
      if ( (unsigned int)a4 <= 0x4E2000 )
        v10 = (struct tagPOINT *)AllocFreeTmpBuffer((unsigned int)(8 * a4));
    }
    if ( v10 )
      memmove(v10, Src, 8 * v5);
    else
      v9 = 0;
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
    if ( v9 )
    {
      v9 = v13[0] ? GrepTransformPoints((struct XDCOBJ *)v13, v10, v10, v5, a5) : 0;
      if ( v9 )
      {
        v11 = 8LL * (int)v5;
        if ( &a3[v11] <= a3 || (unsigned __int64)&a3[v11] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v10, v11);
      }
    }
    if ( v10 && v10 != (struct tagPOINT *)Srca )
      FreeTmpBuffer(v10);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  }
  return v9;
}
