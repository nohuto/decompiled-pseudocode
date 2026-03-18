/*
 * XREFs of NtGdiGetTextFaceW @ 0x1400BB210
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(HDC a1, int a2, char *a3, int a4)
{
  int TextFaceW; // ebx
  unsigned __int16 *v9; // rdi
  BOOL v10; // r15d
  int v11; // eax
  size_t v12; // r8
  _QWORD v14[10]; // [rsp+30h] [rbp-68h] BYREF

  TextFaceW = 0;
  v9 = 0LL;
  v10 = 1;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
      v9 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
    v10 = v9 != 0LL;
  }
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v14, a1);
  if ( v10 && v14[0] )
  {
    TextFaceW = GrepGetTextFaceW((struct UDCOBJ *)v14, a2, v9, a4);
    if ( TextFaceW > 0 && a3 )
    {
      v11 = 0;
      if ( TextFaceW <= a2 )
        v11 = TextFaceW;
      TextFaceW = v11;
      if ( v11 )
      {
        v12 = 2LL * v11;
        if ( &a3[v12] <= a3 || (unsigned __int64)&a3[v12] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v9, v12);
      }
    }
    if ( v9 )
      FreeTmpBuffer(v9);
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v14);
  return (unsigned int)TextFaceW;
}
