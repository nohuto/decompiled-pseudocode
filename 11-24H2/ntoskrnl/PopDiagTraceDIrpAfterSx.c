/*
 * XREFs of PopDiagTraceDIrpAfterSx @ 0x1403CC400
 * Callers:
 *     PoHandleIrp @ 0x1403CBD64 (PoHandleIrp.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDIrpAfterSx(__int64 a1)
{
  __int64 v1; // r11
  __int64 v2; // rax
  __int64 v3; // rax
  const wchar_t *v4; // r8
  NTSTATUS v5; // eax
  wchar_t *v6; // rdx
  int v7; // r8d
  int v9; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13[6]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  wchar_t pszDest[64]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v2 = *(_QWORD *)(v1 + 232);
  if ( v2 && (v3 = *(_QWORD *)(v2 + 8), (v4 = *(const wchar_t **)(v3 + 64)) != 0LL) && *(_WORD *)(v3 + 56) )
    v5 = RtlStringCbCopyNW(pszDest, 0x80uLL, v4, *(unsigned __int16 *)(v3 + 56));
  else
    v5 = -1073741823;
  v6 = pszDest;
  if ( v5 < 0 )
    v6 = (wchar_t *)&SourceString;
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    if ( (qword_140E07690 & 0x400000000000LL) == 0
      || (LOBYTE(v5) = 1, (qword_140E07698 & 0x400000000000LL) != qword_140E07698) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 )
    {
      v11 = *(_DWORD *)(v1 + 192);
      v13[4] = (__int64)&v11;
      v13[5] = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v14, v6);
      v12 = 0x1000000LL;
      v15 = &v12;
      v16 = 8LL;
      LOBYTE(v5) = tlgWriteEx_EtwWriteEx((int)&dword_140E07680, (int)&byte_14004B82B, v7, 1, v9, v10, 5u, (__int64)v13);
    }
  }
  return v5;
}
