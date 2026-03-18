/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x140306840
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402576B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void EtwTraceThreadWorkOnBehalfUpdate()
{
  unsigned __int8 v0; // dl
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( EtwpPsProvRegHandle
    && (EtwpLevelKeywordEnabled(*(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL, 4u, 0x8000000000002000uLL)
     || *(_BYTE *)(v2 + 101) && EtwpLevelKeywordEnabled(*(_QWORD *)(v2 + 40) + 96LL, v0, v1)) )
  {
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 1296);
    else
      v5 = 0;
    v7 = v5;
    UserData.Ptr = (ULONGLONG)&v7;
    *(_QWORD *)&UserData.Size = 4LL;
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 1296);
    else
      v6 = 0;
    v8 = v6;
    v11 = 4LL;
    v10 = &v8;
    EtwWriteEx(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
}
