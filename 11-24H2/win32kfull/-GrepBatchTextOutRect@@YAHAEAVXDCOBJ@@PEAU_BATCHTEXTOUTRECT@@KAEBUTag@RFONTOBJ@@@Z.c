/*
 * XREFs of ?GrepBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1400C45F4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1400C47DC (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepBatchTextOutRect(
        struct XDCOBJ *a1,
        struct _BATCHTEXTOUTRECT *a2,
        unsigned int a3,
        const struct RFONTOBJ::Tag *a4)
{
  __int64 v6; // rcx
  int v7; // esi
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE v14[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[40]; // [rsp+40h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( a3 < 0x28 )
    return 0LL;
  GreProbeAndReadFromUntrustedVa(v15, 0x28uLL, a2, 0x28uLL, 4uLL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v7 = *(_DWORD *)(v6 + 176);
  v8 = *(_DWORD *)(v6 + 180);
  if ( v7 != *(_DWORD *)&v15[4] )
  {
    *(_DWORD *)(v6 + 176) = *(_DWORD *)&v15[4];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)&v15[36];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v10 = *(_QWORD *)(v9 + 324);
  if ( v10 != *(_QWORD *)&v15[28] )
  {
    *(_DWORD *)(v9 + 324) = *(_DWORD *)&v15[28];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)&v15[32];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  ExtTextOutRect(v14, a1, &v15[12], a4);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v11 + 176) != v7 )
  {
    *(_DWORD *)(v11 + 176) = v7;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v8;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( v10 != *(_QWORD *)(v12 + 324) )
  {
    *(_DWORD *)(v12 + 324) = v10;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v10);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  return 1LL;
}
