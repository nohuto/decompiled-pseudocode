/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x1C00BE410
 * Callers:
 *     <none>
 * Callees:
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00476E0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00C0DD8 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreGetBitmapBitsSize @ 0x1C00C2398 (GreGetBitmapBitsSize.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        void *a2,
        unsigned int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  struct tagBITMAPINFO *v12; // rdi
  unsigned int BitmapBitsSize; // eax
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  NTSTATUS v15; // eax
  signed int v16; // r15d
  PVOID v17; // r12
  ULONG v19; // ecx
  struct tagBITMAPINFO *v20; // [rsp+60h] [rbp-78h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-68h] BYREF
  __int64 v23; // [rsp+78h] [rbp-60h]
  __int64 v24; // [rsp+80h] [rbp-58h]
  __int64 v25[3]; // [rsp+88h] [rbp-50h] BYREF
  __int16 v26; // [rsp+A0h] [rbp-38h]
  PVOID Object; // [rsp+E8h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+F0h] [rbp+18h]

  v29 = a3;
  Object = a2;
  DIBitmapReal = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  MappedBase = 0LL;
  if ( !a2 || !a4 )
  {
    v19 = 87;
    goto LABEL_21;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v19 = 5;
LABEL_21:
    EngSetLastError(v19);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v20);
  v12 = v20;
  if ( v20 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(v20);
    v24 = BitmapBitsSize;
    v22 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v20 = (struct tagBITMAPINFO *)(a3 & 0xFFFF0000);
      v23 = (unsigned __int16)a3;
      v22 = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      Object = 0LL;
      v15 = ObReferenceObjectByHandle(a2, 4u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
      v16 = v15;
      v17 = Object;
      if ( v15 < 0 )
      {
        EngSetLastError(v15);
      }
      else
      {
        v16 = MmMapViewInSessionSpaceEx(Object, &MappedBase, &v22, &v20, 0LL);
        ObfDereferenceObject(v17);
        v17 = 0LL;
      }
      if ( v16 < 0 )
      {
        EngSetLastError(v16);
      }
      else
      {
        v25[0] = (__int64)MappedBase + v23;
        v25[1] = v24;
        v25[2] = 0LL;
        v26 = 0;
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         2u,
                         v25,
                         &v12->bmiHeader.biSize,
                         a5,
                         Size,
                         a2,
                         a3,
                         0LL,
                         a7 & 4 | 0xAu,
                         a8,
                         0LL);
      }
      if ( !DIBitmapReal )
      {
        EngSetLastError(0x57u);
        if ( MappedBase )
          MmUnmapViewInSessionSpace(MappedBase);
        if ( v17 )
          ObfDereferenceObject(v17);
      }
    }
    FreeThreadBufferWithTag(v12);
  }
  return DIBitmapReal;
}
