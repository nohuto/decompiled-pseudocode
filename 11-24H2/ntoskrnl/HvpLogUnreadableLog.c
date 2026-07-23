/*
 * XREFs of HvpLogUnreadableLog @ 0x14096C0F8
 * Callers:
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall HvpLogUnreadableLog(char a1, int a2)
{
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  char *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 8) != 0 && (qword_140E09F70 & 8) == qword_140E09F70 )
  {
    v8 = 0;
    v11 = 0;
    v6 = &v3;
    v3 = a1;
    v9 = &v4;
    v4 = a2;
    v10 = 4;
    v7 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)word_14005694A, 0LL, 0LL, 4u, &v5);
  }
}
