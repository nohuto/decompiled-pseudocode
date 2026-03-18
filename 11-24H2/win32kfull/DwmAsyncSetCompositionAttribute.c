/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1400872A4
 * Callers:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140087234 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline @ 0x1403244C8 (Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  unsigned __int16 v12; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int16 v13; // [rsp+22h] [rbp-57h]
  __int16 v14; // [rsp+24h] [rbp-55h]
  int v15; // [rsp+48h] [rbp-31h]
  int v16; // [rsp+4Ch] [rbp-2Dh]
  __int64 v17; // [rsp+50h] [rbp-29h]
  int v18; // [rsp+58h] [rbp-21h]
  int v19; // [rsp+5Ch] [rbp-1Dh]
  __int128 v20; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+70h] [rbp-9h]

  v5 = (int)a3;
  v8 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset_0(&v12, 0, 0x58uLL);
    v13 = 88;
    v12 = word_1403579D8[8 * v5] + 24;
    if ( (unsigned int)Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline()
      && v13 > (unsigned __int64)v12 + 40 )
    {
      v13 = v12 + 40;
    }
    v9 = *a4;
    v16 = 0;
    v10 = *((_QWORD *)a4 + 2);
    v14 = 0x8000;
    v19 = word_1403579D8[8 * v5];
    v15 = 1073741867;
    v17 = a2;
    v18 = v5;
    v20 = v9;
    v21 = v10;
    v8 = LpcRequestPort(Object, &v12);
    ObfDereferenceObject(Object);
  }
  return v8;
}
