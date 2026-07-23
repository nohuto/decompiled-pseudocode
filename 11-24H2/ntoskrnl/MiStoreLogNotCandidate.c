/*
 * XREFs of MiStoreLogNotCandidate @ 0x14044F838
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogNotCandidate(int a1)
{
  int v1; // r8d
  int v2; // r9d
  int v3; // r10d
  int v4; // [rsp+20h] [rbp-88h]
  int v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h] BYREF
  __int64 v8[5]; // [rsp+50h] [rbp-58h] BYREF
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]
  int *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140E37658
    && a1 != -1073741401
    && **(_DWORD **)&qword_140E37658 > 5u
    && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
  {
    v10 = 0;
    v13 = 0;
    v8[4] = (__int64)&v6;
    v6 = v2;
    v11 = &v7;
    v9 = 4;
    v12 = 4;
    v7 = v3;
    tlgWriteEx_EtwWriteEx(v1, (int)&dword_140058B2C, v1, 1, v4, v5, 4u, (__int64)v8);
  }
}
