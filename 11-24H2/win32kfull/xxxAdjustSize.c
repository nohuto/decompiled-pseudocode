/*
 * XREFs of xxxAdjustSize @ 0x140074BF8
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxAdjustSize(struct tagWND *a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v8; // kr00_16
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // ecx
  int v15; // ecx
  _BYTE v16[40]; // [rsp+20h] [rbp-48h] BYREF

  result = 0LL;
  v5 = *((_QWORD *)a1 + 5);
  memset(v16, 0, sizeof(v16));
  if ( (*(_BYTE *)(v5 + 31) & 0xC0) == 0 || (*(_BYTE *)(v5 + 30) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v16, 0LL);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      v8 = *(_OWORD *)v16;
    else
      v8 = *(_OWORD *)&v16[24];
    v9 = DWORD2(v8);
    if ( *a2 < SDWORD2(v8) )
      v9 = *a2;
    if ( (int)v8 <= v9 )
    {
      v10 = DWORD2(v8);
      if ( *a2 < SDWORD2(v8) )
        v10 = *a2;
    }
    else
    {
      v10 = v8;
    }
    *a2 = v10;
    v11 = *a3;
    v12 = HIDWORD(*((_QWORD *)&v8 + 1));
    v13 = DWORD1(v8);
    if ( *a3 >= SHIDWORD(v8) )
      v11 = HIDWORD(v8);
    if ( SDWORD1(v8) <= v11 )
    {
      if ( *a3 < SHIDWORD(v8) )
        LODWORD(v12) = *a3;
      LODWORD(v13) = v12;
    }
    *a3 = v13;
    v14 = *a2;
    result = 0xFFFFLL;
    if ( *a2 > 0xFFFF )
    {
      v14 = 0xFFFF;
    }
    else if ( v14 < 0 )
    {
      v14 = 0;
    }
    *a2 = v14;
    v15 = *a3;
    if ( *a3 <= 0xFFFF )
    {
      result = (unsigned int)v15;
      if ( v15 < 0 )
        result = 0LL;
    }
    *a3 = result;
  }
  return result;
}
