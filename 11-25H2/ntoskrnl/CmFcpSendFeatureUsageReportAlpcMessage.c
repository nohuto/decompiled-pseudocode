/*
 * XREFs of CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C2E14
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcDeletePortSection @ 0x14069C180 (ZwAlpcDeletePortSection.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 */

__int64 __fastcall CmFcpSendFeatureUsageReportAlpcMessage(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+48h] [rbp-41h] BYREF
  __int128 v8; // [rsp+50h] [rbp-39h]
  __int128 v9; // [rsp+60h] [rbp-29h]
  __int128 v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+80h] [rbp-9h]
  _DWORD v12[2]; // [rsp+88h] [rbp-1h] BYREF
  __int128 v13; // [rsp+90h] [rbp+7h]
  __int128 v14; // [rsp+A0h] [rbp+17h]

  v12[0] = 0x40000000;
  v7 = 0LL;
  v12[1] = 0;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v5 = CmFcpCreateAlpcSectionView(a1, a2, (unsigned int)(8 * a3), v12, &v7);
  if ( v5 >= 0 )
  {
    DWORD2(v9) = 0;
    WORD2(v8) = -32767;
    LODWORD(v8) = 3670032;
    DWORD2(v10) = 2;
    LODWORD(v11) = a3;
    v5 = ZwAlpcSendWaitReceivePort(a1, 0x20000LL);
    if ( v5 >= 0 )
    {
      if ( BYTE4(v8) == 2 )
      {
        v5 = 0;
        if ( v10 < 0 )
          v5 = HIDWORD(v10);
      }
      else
      {
        v5 = -1073741823;
      }
    }
  }
  if ( v7 )
    ZwAlpcDeletePortSection(a1, 0LL);
  return (unsigned int)v5;
}
