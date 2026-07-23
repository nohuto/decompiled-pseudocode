/*
 * XREFs of MmStoreLogConsumedPoison @ 0x1404B6670
 * Callers:
 *     SmLogConsumedPoison @ 0x1404B664C (SmLogConsumedPoison.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogConsumedPoison(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // ecx
  unsigned __int8 *v8; // rdx
  __int64 v9; // r11
  int v10; // [rsp+20h] [rbp-59h]
  int v11; // [rsp+28h] [rbp-51h]
  ULONG v12; // [rsp+30h] [rbp-49h]
  int v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-19h] BYREF
  __int64 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  __int64 *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  __int64 *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  if ( *(_QWORD *)&qword_140E37658 )
  {
    if ( a3 )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
      {
        v29 = 0;
        v18 = &v15;
        v8 = (unsigned __int8 *)&word_140058D62;
        v15 = v9;
        v21 = &v13;
        v7 = 8;
        v14 = *v3;
        v24 = &v14;
        v27 = &v16;
        v12 = 6;
        v16 = 0x1000000LL;
        v28 = 8;
        goto LABEL_9;
      }
    }
    else if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 0x400000000002LL) )
    {
      v14 = v6;
      v18 = &v14;
      v7 = (_DWORD)v3 + 8;
      v15 = 0x1000000LL;
      v21 = &v13;
      v8 = (unsigned __int8 *)byte_140058D01;
      v24 = &v15;
      v12 = 5;
LABEL_9:
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v13 = v4;
      v19 = v7;
      v25 = v7;
      v22 = 4;
      tlgWriteEx_EtwWriteEx(v5, v8, (__int64)v3, 1u, v10, v11, v12, &v17);
    }
  }
}
