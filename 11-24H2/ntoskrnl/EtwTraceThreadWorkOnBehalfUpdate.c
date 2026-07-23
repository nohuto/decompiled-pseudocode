/*
 * XREFs of EtwTraceThreadWorkOnBehalfUpdate @ 0x1402D11F0
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceThreadWorkOnBehalfUpdate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  if ( EtwpPsProvRegHandle )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(
                            *(_QWORD *)(EtwpPsProvRegHandle + 32) + 96LL,
                            a2,
                            0x8000000000002000uLL,
                            EtwpPsProvRegHandle)
      || *(_WORD *)(v4 + 102) && (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, v2, v3, v4) )
    {
      if ( v5 )
        v7 = *(_DWORD *)(v5 + 1296);
      else
        v7 = 0;
      v9 = v7;
      UserData.Ptr = (ULONGLONG)&v9;
      *(_QWORD *)&UserData.Size = 4LL;
      if ( v6 )
        v8 = *(_DWORD *)(v6 + 1296);
      else
        v8 = 0;
      v10 = v8;
      v13 = 4LL;
      v12 = &v10;
      EtwWriteEx(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
}
