/*
 * XREFs of TcglibpGetTableColumnData @ 0x14013F300
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x14013B87C (TcglibActivateLockingSpEx.c)
 *     TcglibGetMsid @ 0x14013C2D4 (TcglibGetMsid.c)
 *     TcglibSetSidPin @ 0x14013CD8C (TcglibSetSidPin.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     TcglibpGetSecretProtection @ 0x1401407CC (TcglibpGetSecretProtection.c)
 * Callees:
 *     TcglibpGetTableColumns @ 0x14013F370 (TcglibpGetTableColumns.c)
 */

__int64 __fastcall TcglibpGetTableColumnData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v17 = 0;
  v12 = a4;
  v15 = a5;
  v16 = a6;
  v8[0] = a4;
  v8[1] = a4;
  v9 = &v12;
  v13 = 4;
  v14 = 8;
  v10 = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))TcglibpGetTableColumns)(a1, a2, a3, v8);
  if ( a7 )
    *a7 = v16;
  return result;
}
