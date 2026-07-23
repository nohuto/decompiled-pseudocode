/*
 * XREFs of DrvDbGetObjectSubKeyList @ 0x1409250F8
 * Callers:
 *     DrvDbGetObjectList @ 0x140925254 (DrvDbGetObjectList.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyList(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  _QWORD v17[6]; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[516]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v20; // [rsp+258h] [rbp+158h]
  __int64 v21; // [rsp+260h] [rbp+160h]
  _WORD *v22; // [rsp+268h] [rbp+168h]
  unsigned int v23; // [rsp+270h] [rbp+170h]
  unsigned int v24; // [rsp+274h] [rbp+174h]

  *a7 = 0;
  if ( a5 && a6 )
    *a5 = 0;
  memset_0(v19, 0, sizeof(v19));
  v20 = a3;
  v18 = a8;
  v12 = 0LL;
  v21 = a4;
  v22 = a5;
  v23 = a6;
  v24 = 0;
  if ( a1 )
    v12 = *(_QWORD *)(a1 + 224);
  v17[3] = v12;
  v17[1] = DrvDbGetObjectSubKeyCallback;
  v17[4] = PnpCtxInternalEnumKeyCallback;
  v17[2] = &v18;
  v17[0] = a1;
  v17[5] = v17;
  v13 = RegRtlEnumKeyWithCallback(a2);
  if ( v13 >= 0 )
  {
    v14 = v24;
    *a7 = v24;
    if ( v14 )
    {
      v15 = v14 + 1;
      *a7 = v15;
      if ( a5 && v15 <= a6 )
        a5[v15 - 1] = 0;
      else
        return (unsigned int)-1073741789;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v13;
}
