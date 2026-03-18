/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x140162CE0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x140018E94 (GreCreateDIBitmapReal.c)
 *     GreGetBitmapBitsSize @ 0x14016305C (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1401630F8 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        void *a2,
        unsigned int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        unsigned int Size,
        char a7,
        unsigned __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  __int64 v12; // r13
  HANDLE v13; // rbx
  struct tagBITMAPINFO *v14; // rbx
  unsigned int BitmapBitsSize; // eax
  __int64 v16; // r12
  char CurrentThreadPreviousMode; // al
  __int64 v18; // r9
  char v19; // al
  signed int v20; // r12d
  signed __int64 v21; // rax
  int v22; // ecx
  ULONG v24; // ecx
  unsigned __int16 v25; // [rsp+70h] [rbp-78h]
  struct tagBITMAPINFO *v26; // [rsp+78h] [rbp-70h] BYREF
  __int64 v27; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-60h] BYREF
  __int64 v29; // [rsp+90h] [rbp-58h] BYREF
  __int64 v30; // [rsp+98h] [rbp-50h]
  __int128 v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+B0h] [rbp-38h]
  int v33; // [rsp+B8h] [rbp-30h]
  unsigned int v35; // [rsp+F8h] [rbp+10h]

  v25 = a3;
  DIBitmapReal = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  if ( !a2 || !a4 )
  {
    v24 = 87;
    goto LABEL_24;
  }
  v13 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63584);
  if ( PsGetCurrentProcessId() != v13 )
  {
    v24 = 5;
LABEL_24:
    EngSetLastError(v24);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, Size, &v26);
  v14 = v26;
  if ( v26 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(v26);
    v16 = BitmapBitsSize;
    v35 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v26 = (struct tagBITMAPINFO *)(a3 & 0xFFFF0000);
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      v28 = (unsigned __int64)a2;
      LOBYTE(v18) = CurrentThreadPreviousMode;
      Gre::SectionObj::SectionObj(&v27, &v28, 0LL, v18);
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 5;
      if ( v27 )
      {
        v28 = v25;
        v19 = Gre::MapViewOfSectionObj::Map(&v29, v27, 3LL, v25 + v16, &v26);
        if ( v19 )
          v12 = v31;
        v20 = v19 == 0 ? 0xC0000001 : 0;
        v21 = v28;
      }
      else
      {
        v20 = -1073741823;
        EngSetLastError(0xC0000001);
        v21 = v25;
      }
      if ( v20 < 0 )
        EngSetLastError(v20);
      else
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         2,
                         v21 + v12,
                         &v14->bmiHeader.biSize,
                         a5,
                         Size,
                         v35,
                         a2,
                         a3,
                         0LL,
                         a7 & 4 | 0xAu,
                         a8,
                         0LL);
      if ( DIBitmapReal )
      {
        v31 = 0uLL;
        v29 = 0LL;
        v30 = 0LL;
        v32 = 0LL;
        v22 = 5;
        v33 = 5;
      }
      else
      {
        EngSetLastError(0x57u);
        v22 = v33;
      }
      if ( v22 != 5 )
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v29);
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v27);
    }
    FreeThreadBufferWithTag(v14);
  }
  return DIBitmapReal;
}
