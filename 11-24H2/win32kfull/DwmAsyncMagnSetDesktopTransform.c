/*
 * XREFs of DwmAsyncMagnSetDesktopTransform @ 0x14021B3EC
 * Callers:
 *     MagSetLensContextInformation @ 0x1401AD0BC (MagSetLensContextInformation.c)
 *     MagpDecomposeDesktop @ 0x1401FCB14 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x14026E5D0 (MagContextThreadCallout.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopTransform(PVOID Object, __int64 a2, __int64 *a3, int a4, int a5)
{
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-88h] BYREF
  __int16 v12; // [rsp+24h] [rbp-84h]
  int v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+4Ch] [rbp-5Ch]
  __int64 v15; // [rsp+54h] [rbp-54h]
  int v16; // [rsp+5Ch] [rbp-4Ch]
  int v17; // [rsp+60h] [rbp-48h]

  v9 = -1073741823;
  if ( Object )
  {
    memset_0(&v11, 0, 0x44uLL);
    v11 = 4456476;
    v12 = 0x8000;
    v15 = *a3;
    v17 = a5;
    v13 = 1073741938;
    v14 = a2;
    v16 = a4;
    EtwUpdateEvent(0LL);
    v9 = LpcRequestPort(Object, &v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
