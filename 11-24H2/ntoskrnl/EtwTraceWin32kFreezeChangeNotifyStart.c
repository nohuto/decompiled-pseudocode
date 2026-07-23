/*
 * XREFs of EtwTraceWin32kFreezeChangeNotifyStart @ 0x1407A9C70
 * Callers:
 *     PspPostFreezeOperationWorker @ 0x140A783C0 (PspPostFreezeOperationWorker.c)
 *     PspWin32kProcessFreezeNotify @ 0x140A8A968 (PspWin32kProcessFreezeNotify.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void EtwTraceWin32kFreezeChangeNotifyStart()
{
  ULONG v0; // edx
  __int16 v1; // r8
  int v2; // r9d
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  ULONG v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int16 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140E09160 > 5 && tlgKeywordOn((__int64)&dword_140E09160, 4LL) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &v4;
    v9 = &v3;
    v4 = v2;
    v7 = v0;
    v3 = v1;
    v10 = 2;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09160, (unsigned __int8 *)&unk_140053710, 0LL, 0LL, v0, &v5);
  }
}
