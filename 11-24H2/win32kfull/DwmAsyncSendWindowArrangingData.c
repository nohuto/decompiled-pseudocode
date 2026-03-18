/*
 * XREFs of DwmAsyncSendWindowArrangingData @ 0x1401E0C40
 * Callers:
 *     bSetDevPreviewRect @ 0x1401D713C (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1401E09F0 (bMoveDevPreviewRect.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSendWindowArrangingData(PVOID Object, __int64 a2, __int64 a3, __int128 *a4, __int64 a5)
{
  int v7; // esi
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  int v12; // [rsp+20h] [rbp-88h] BYREF
  __int16 v13; // [rsp+24h] [rbp-84h]
  int v14; // [rsp+48h] [rbp-60h]
  int v15; // [rsp+4Ch] [rbp-5Ch]
  __int64 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+68h] [rbp-40h]

  v7 = a2;
  v9 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset_0(&v12, 0, 0x50uLL);
    v10 = *a4;
    v12 = 5242920;
    v13 = 0x8000;
    v18 = a5;
    v14 = 1073741939;
    v15 = v7;
    v16 = a3;
    v17 = v10;
    EtwUpdateEvent(0LL);
    v9 = LpcRequestPort(Object, &v12);
    ObfDereferenceObject(Object);
  }
  return v9;
}
