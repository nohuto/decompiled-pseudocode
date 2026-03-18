/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x1400C5740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qzppq_EtwWriteTransfer @ 0x1400C58F8 (McTemplateK0qzppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAuditApiSetWindowsHookEx(int a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v6; // bl
  int v7; // r11d
  char v8; // al
  __int16 *v9; // r9
  _WORD *v10; // rax
  __int16 v11; // r10
  int v12; // [rsp+40h] [rbp-288h]
  _BYTE *v13; // [rsp+48h] [rbp-280h]
  _BYTE v14[528]; // [rsp+90h] [rbp-238h] BYREF
  __int16 *v15; // [rsp+2D8h] [rbp+10h]

  v15 = (__int16 *)a2;
  v6 = a3;
  v7 = a1;
  v12 = a1;
  v13 = 0LL;
  LODWORD(a2) = 1024;
  if ( (*(_WORD *)(&WPP_MAIN_CB.Reserved + 1) & 0x400) != 0 )
  {
    if ( (unsigned __int8)(byte_14029ADC8 - 1) <= 2u
      || (qword_14029ADB0 & 0x400) == 0
      || (v8 = 1, (qword_14029ADB8 & 0x400) != qword_14029ADB8) )
    {
      v8 = 0;
    }
    if ( v8 )
    {
      if ( v15 )
      {
        v9 = v15;
        a3 = 2147483646LL;
        a2 = 260LL;
        v10 = v14;
        a1 = 0;
        while ( a2 )
        {
          if ( !a3 )
            goto LABEL_14;
          v11 = *v9;
          if ( !*v9 )
            goto LABEL_14;
          ++v9;
          *v10++ = v11;
          --a2;
          --a3;
          ++a1;
        }
        --v10;
        --a1;
LABEL_14:
        *v10 = 0;
        v13 = v14;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
        McTemplateK0qzppq_EtwWriteTransfer(a1, a2, (_BYTE)a3, v7, (__int64)v13, v6, a4, a5, v12);
    }
  }
}
