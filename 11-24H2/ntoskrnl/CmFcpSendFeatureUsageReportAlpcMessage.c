/*
 * XREFs of CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C183C
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwAlpcDeletePortSection @ 0x1406A7450 (ZwAlpcDeletePortSection.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1406A75D0 (ZwAlpcSendWaitReceivePort.c)
 *     CmFcpCreateAlpcSectionView @ 0x140AC0FAC (CmFcpCreateAlpcSectionView.c)
 */

__int64 __fastcall CmFcpSendFeatureUsageReportAlpcMessage(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  unsigned __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int128 v9; // [rsp+50h] [rbp-39h] BYREF
  __int128 v10; // [rsp+60h] [rbp-29h]
  __int128 v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+80h] [rbp-9h]
  _DWORD v13[2]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v14; // [rsp+90h] [rbp+7h]
  __int128 v15; // [rsp+A0h] [rbp+17h]

  v13[0] = 0x40000000;
  v8 = 0LL;
  v13[1] = 0;
  v12 = 0LL;
  v7 = 56LL;
  v14 = 0LL;
  v15 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v5 = CmFcpCreateAlpcSectionView(a1, a2, (unsigned int)(8 * a3), v13, &v8);
  if ( v5 >= 0 )
  {
    DWORD2(v10) = 0;
    WORD2(v9) = -32767;
    LODWORD(v9) = 3670032;
    DWORD2(v11) = 2;
    LODWORD(v12) = a3;
    v5 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, _DWORD *, __int128 *, unsigned __int64 *, _QWORD, _QWORD))ZwAlpcSendWaitReceivePort)(
           a1,
           0x20000LL,
           &v9,
           v13,
           &v9,
           &v7,
           0LL,
           0LL);
    if ( v5 >= 0 )
    {
      if ( v7 >= 0x30 && BYTE4(v9) == 2 )
      {
        v5 = 0;
        if ( v11 < 0 )
          v5 = HIDWORD(v11);
      }
      else
      {
        v5 = -1073741823;
      }
    }
  }
  if ( v8 )
    ZwAlpcDeletePortSection(a1, 0LL);
  return (unsigned int)v5;
}
