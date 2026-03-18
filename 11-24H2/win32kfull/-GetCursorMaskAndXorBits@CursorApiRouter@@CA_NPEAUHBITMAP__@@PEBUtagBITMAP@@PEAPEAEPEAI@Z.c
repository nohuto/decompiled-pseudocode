/*
 * XREFs of ?GetCursorMaskAndXorBits@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@PEAPEAEPEAI@Z @ 0x1402DA044
 * Callers:
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402DA618 (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DA830 (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreGetBitmapBits @ 0x14030DA38 (GreGetBitmapBits.c)
 */

bool __fastcall CursorApiRouter::GetCursorMaskAndXorBits(
        HBITMAP a1,
        const struct tagBITMAP *a2,
        unsigned __int8 **a3,
        unsigned int *a4)
{
  bool v5; // zf
  unsigned int BitmapBits; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  unsigned __int64 v13; // rax
  bool result; // al
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2->bmPlanes == 1;
  *a3 = 0LL;
  *a4 = 0;
  if ( v5 && a2->bmBitsPixel == 1 )
  {
    v15 = 0;
    BitmapBits = GreGetBitmapBits(a1, 0LL, 0LL, &v15);
    v10 = BitmapBits;
    if ( BitmapBits )
    {
      v11 = Win32AllocPoolZInit(BitmapBits, 1129607282LL);
      v12 = (unsigned __int8 *)v11;
      if ( v11 )
      {
        if ( (unsigned int)GreGetBitmapBits(a1, v10, v11, &v15) == v10 )
        {
          v13 = (unsigned int)a2->bmHeight * (unsigned __int64)(((a2->bmWidth + 15) >> 3) & 0xFFFFFFFE);
          if ( v13 <= 0xFFFFFFFF && v10 >= (unsigned int)v13 )
          {
            *a3 = v12;
            result = 1;
            *a4 = v10;
            return result;
          }
          v15 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1258);
        }
        Win32FreePool(v12);
      }
    }
  }
  else
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1216);
  }
  return 0;
}
