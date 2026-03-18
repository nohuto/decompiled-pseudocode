/*
 * XREFs of NtGdiCreateDIBSection @ 0x14025E4E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x140018E94 (GreCreateDIBitmapReal.c)
 *     GreGetBitmapBitsSize @ 0x14016305C (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1401630F8 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreGetDCDpiScaleValue @ 0x14018D780 (GreGetDCDpiScaleValue.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        unsigned int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        unsigned __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rsi
  int DCDpiScaleValue; // r9d
  const struct tagBITMAPINFO *v14; // r8
  int v15; // r11d
  LONG biHeight; // eax
  LONG biWidth; // eax
  LONG v18; // ecx
  int v19; // ebx
  ULONG v20; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  HANDLE v24; // rax
  void *v25; // rbx
  void *v26; // rcx
  int v28; // [rsp+70h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-70h] BYREF
  const struct tagBITMAPINFO *v30; // [rsp+80h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-60h] BYREF
  PVOID Object; // [rsp+90h] [rbp-58h] BYREF
  _DWORD v33[2]; // [rsp+98h] [rbp-50h] BYREF
  PVOID v34; // [rsp+A0h] [rbp-48h]
  unsigned int BitmapBitsSize; // [rsp+108h] [rbp+20h]

  DIBitmapReal = 0LL;
  v28 = 0;
  if ( a4 )
  {
    v30 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v30);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v14 = v30;
        v15 = 0x7FFFFFFF / DCDpiScaleValue;
        biHeight = -v30->bmiHeader.biHeight;
        if ( v30->bmiHeader.biHeight > 0 )
          biHeight = v30->bmiHeader.biHeight;
        if ( v15 < biHeight )
          goto LABEL_11;
        biWidth = v30->bmiHeader.biWidth;
        v18 = -biWidth;
        if ( biWidth > 0 )
          v18 = v30->bmiHeader.biWidth;
        if ( v15 < v18 )
LABEL_11:
          ExRaiseStatus(-1073741675);
        v30->bmiHeader.biHeight *= DCDpiScaleValue;
        v14->bmiHeader.biWidth = biWidth * DCDpiScaleValue;
      }
    }
    if ( v30 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize((__int64)v30);
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_43:
        FreeThreadBufferWithTag(v30);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v33[0] = a3 & 0xFFFF0000;
        v33[1] = 0;
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        v34 = Object;
        if ( v19 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v22);
          v19 = MmMapViewOfSection(v34, CurrentProcess, &BaseAddress, 0LL, RegionSize, v33, &RegionSize, 1, 0, 4);
          if ( v19 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(v34);
          goto LABEL_23;
        }
        v20 = 87;
      }
      else
      {
        v19 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v19 >= 0 )
          goto LABEL_23;
        v20 = 8;
      }
      EngSetLastError(v20);
LABEL_23:
      if ( v19 >= 0 )
      {
        Object = (char *)BaseAddress + (unsigned __int16)a3;
        if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
          v24 = GrepSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        else
          v24 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v25 = v24;
        v34 = v24;
        if ( v24
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               2,
                               (__int64)Object,
                               &v30->bmiHeader.biSize,
                               a5,
                               Size,
                               BitmapBitsSize,
                               a2,
                               a3,
                               v24,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v26 = (void *)a9;
          if ( a9 >= MmUserProbeAddress )
            v26 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v26, &Object, 8uLL);
          v28 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v28 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v25 )
            {
              if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
                GrepUnsecureVirtualMemory(v25);
              else
                MmUnsecureVirtualMemory(v25);
            }
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Object, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_43;
    }
  }
  return DIBitmapReal;
}
