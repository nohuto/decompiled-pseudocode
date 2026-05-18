/*
 * XREFs of sub_18000E984 @ 0x18000E984
 * Callers:
 *     sub_18000D120 @ 0x18000D120 (sub_18000D120.c)
 *     sub_18000D1CC @ 0x18000D1CC (sub_18000D1CC.c)
 *     sub_18000D2B8 @ 0x18000D2B8 (sub_18000D2B8.c)
 * Callees:
 *     sub_18000D074 @ 0x18000D074 (sub_18000D074.c)
 *     sub_18000DF34 @ 0x18000DF34 (sub_18000DF34.c)
 *     sub_18000E784 @ 0x18000E784 (sub_18000E784.c)
 *     sub_18000EFC8 @ 0x18000EFC8 (sub_18000EFC8.c)
 *     sub_18000EFF0 @ 0x18000EFF0 (sub_18000EFF0.c)
 *     sub_18000F004 @ 0x18000F004 (sub_18000F004.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000FC6C @ 0x18000FC6C (sub_18000FC6C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18000E984(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int *a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  unsigned int v17; // edi
  int v18; // esi
  int v19; // eax
  _WORD *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v24; // [rsp+88h] [rbp+10h]

  v24 = a2;
  *lpOutputString = 0;
  *a13 = 0;
  v17 = *a8;
  *(_DWORD *)(a15 + 8) = *a8;
  *(_DWORD *)(a15 + 12) = a8[1];
  v18 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = sub_18000F024(v17);
        break;
      case 2:
        if ( (v17 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          sub_18000D074(a1, a2, a3, a4, a5, a6, 0x8007029C);
          *(_DWORD *)(a15 + 8) = -2147024228;
          *(_DWORD *)(a15 + 12) = sub_18000E784(-2147024228);
        }
        v19 = sub_18000F004(v17);
        break;
      case 3:
        v19 = sub_18000EFF0(v17);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v19 = sub_18000EFC8(v17);
  }
  v18 = v19;
LABEL_12:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  if ( a8[2] == 1 )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&dword_1801C439C);
  v20 = a9;
  if ( !a9 || !*a9 )
    v20 = 0LL;
  *(_QWORD *)(a15 + 24) = v20;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = v24;
  *(_DWORD *)(a15 + 68) = v18;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  *(_QWORD *)(a15 + 120) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_QWORD *)(a15 + 96) = 0LL;
  if ( qword_1801C4388 )
    v21 = qword_1801C4388();
  else
    v21 = 0LL;
  *(_QWORD *)(a15 + 128) = v21;
  if ( qword_1801C4310 )
    qword_1801C4310(a15);
  if ( qword_1801C4340 )
    qword_1801C4340(a15, a13, 1024LL);
  if ( qword_1801C4338 )
    qword_1801C4338(a15);
  if ( qword_1801C4360 && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    qword_1801C4360(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000FC6C();
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = sub_18000E784(-2147418113);
  }
  if ( !byte_1801C42F8
    && (!qword_1801C42E8 ? (v22 = !IsDebuggerPresent()) : (v22 = (unsigned __int8)qword_1801C42E8() == 0), v22)
    || (*(_BYTE *)(a15 + 4) & 2) != 0 )
  {
    if ( qword_1801C4300 && !byte_1801C4320 )
      qword_1801C4300(a15, 0LL, 0LL);
  }
  else
  {
    if ( qword_1801C4300 && !byte_1801C4320 )
      qword_1801C4300(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000DF34(lpOutputString, 2048LL, a15);
    OutputDebugStringW(lpOutputString);
  }
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || byte_1801C4308 )
  {
    if ( qword_1801C4350 )
      qword_1801C4350();
  }
}
