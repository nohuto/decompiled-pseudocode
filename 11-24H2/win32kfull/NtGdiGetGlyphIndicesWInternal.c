/*
 * XREFs of NtGdiGetGlyphIndicesWInternal @ 0x1401D6720
 * Callers:
 *     NtGdiGetGlyphIndicesW @ 0x1401D66F0 (NtGdiGetGlyphIndicesW.c)
 * Callees:
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@@@Z @ 0x14018C724 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVUDCOBJ@@PEBGKPEAGKHW4EntryPoint@RFONTOBJ@.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesWInternal(HDC a1, char *a2, int a3, char *a4, unsigned int a5, int a6)
{
  __int64 v7; // r12
  _BYTE *v9; // rsi
  int v10; // edi
  int v11; // edx
  int *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int *GlyphIndicesW; // rax
  unsigned int v17; // ecx
  size_t v18; // r15
  __int64 v19; // rdx
  int v20; // ecx
  __int64 SessionState; // rax
  int v22; // [rsp+48h] [rbp-1E0h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-1D8h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-1D0h]
  unsigned int v25; // [rsp+5Ch] [rbp-1CCh] BYREF
  void *Src; // [rsp+60h] [rbp-1C8h] BYREF
  char *v27; // [rsp+68h] [rbp-1C0h] BYREF
  HDC v28; // [rsp+70h] [rbp-1B8h] BYREF
  HDC v29; // [rsp+78h] [rbp-1B0h]
  unsigned __int16 *v30; // [rsp+88h] [rbp-1A0h]
  _QWORD v31[10]; // [rsp+90h] [rbp-198h] BYREF
  _QWORD v32[10]; // [rsp+E0h] [rbp-148h] BYREF
  _BYTE v33[56]; // [rsp+130h] [rbp-F8h] BYREF
  _BYTE v34[56]; // [rsp+168h] [rbp-C0h] BYREF
  _BYTE v35[64]; // [rsp+1A0h] [rbp-88h] BYREF

  v7 = a3;
  Src = a2;
  v29 = a1;
  v28 = a1;
  v22 = a3;
  v27 = a4;
  v9 = 0LL;
  v23 = 0LL;
  v10 = -1;
  if ( a3 < 0 )
  {
    v11 = -1;
    v12 = &v22;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v12, v11);
  }
  if ( a3 || a2 || a4 || a5 )
  {
    v17 = 0;
    if ( a5 <= 1 )
      v17 = a5;
    v24 = v17;
    v25 = v17;
    if ( a3 > 16 )
    {
      if ( (unsigned __int64)a3 <= 0x9C4000 )
      {
        v9 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)(4 * a3));
        v23 = v9;
        a2 = (char *)Src;
      }
    }
    else
    {
      v9 = v35;
      v23 = v35;
    }
    if ( v9 )
    {
      v18 = 2 * v7;
      Src = (void *)(2 * v7);
      v30 = (unsigned __int16 *)&v9[2 * v7];
      if ( &a2[2 * v7] < a2 || (unsigned __int64)&a2[2 * v7] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(&v9[v18], a2, v18);
      v10 = v7;
      if ( (_DWORD)v7 != -1 )
      {
        SessionState = W32GetSessionState(v20, v19);
        EUDCCountRegion::EUDCCountRegion(
          (EUDCCountRegion *)v34,
          (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
        if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v34) )
        {
          UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v32, v29);
          if ( v32[0] )
          {
            v10 = *GrepGetGlyphIndicesW(&v27, (struct UDCOBJ *)v32, v30, v7, (__int64)v9, v24, a6, 7);
          }
          else
          {
            v10 = -1;
            ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v28, -1);
          }
          UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v32);
        }
        else
        {
          v10 = -1;
          ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&Src, -1);
        }
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
        if ( v10 != -1 )
        {
          if ( (unsigned __int64)&a4[v18] > MmUserProbeAddress || &a4[v18] <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(a4, v9, v18);
        }
      }
      if ( v9 != v35 )
        FreeTmpBuffer(v9);
    }
    v11 = v10;
    v12 = (int *)&v23;
    return (unsigned int)*ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v12, v11);
  }
  v13 = W32GetSessionState((_DWORD)a1, 0LL);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v33,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(v13 + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v33) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v31, a1);
    if ( v31[0] )
      GlyphIndicesW = GrepGetGlyphIndicesW(&v23, (struct UDCOBJ *)v31, 0LL, 0, 0LL, 0, a6, 7);
    else
      GlyphIndicesW = ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v25, -1);
    v14 = *GlyphIndicesW;
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v31);
  }
  else
  {
    v14 = *ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v22, -1);
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v33);
  return v14;
}
