/*
 * XREFs of BcpDisplayProgress @ 0x1406997F4
 * Callers:
 *     BcpGetComponentOffsets @ 0x140699C40 (BcpGetComponentOffsets.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140697F6C (BgpDisplayCharacterEx.c)
 *     BcpConvertProgressToString @ 0x1406988EC (BcpConvertProgressToString.c)
 *     BcpCursorLessThan @ 0x1406989C8 (BcpCursorLessThan.c)
 *     BcpDisplayCriticalString @ 0x140698ACC (BcpDisplayCriticalString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, __int64 a3)
{
  __int64 v5; // r15
  UNICODE_STRING *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  UNICODE_STRING *v9; // rcx
  __int64 v10; // xmm0_8
  int v11; // r13d
  unsigned int v12; // ebx
  unsigned int v13; // esi
  char *v14; // rax
  int v15; // r12d
  char *v16; // rcx
  int v17; // r14d
  unsigned int v18; // edi
  unsigned __int64 v20; // [rsp+48h] [rbp-19h]
  int v21; // [rsp+58h] [rbp-9h] BYREF
  int v22; // [rsp+5Ch] [rbp-5h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-1h] BYREF
  int v24; // [rsp+68h] [rbp+7h]
  __int64 v25; // [rsp+70h] [rbp+Fh] BYREF
  char *v26; // [rsp+78h] [rbp+17h]
  char v27; // [rsp+80h] [rbp+1Fh] BYREF

  v21 = 0;
  v22 = 0;
  v5 = 84LL * a2;
  v23 = 0LL;
  v6 = &stru_140E3E9E0;
  v24 = 0;
  if ( a1 != 1 )
    v6 = &stru_140E3EA00;
  BcpDisplayCriticalString(v6, *(_DWORD *)((char *)&unk_140E0EED0 + v5 + 8), a3, a2);
  v25 = 0x80000LL;
  v26 = &v27;
  BcpConvertProgressToString(a1, (__int64)&v25);
  BcpDisplayCriticalString(&v25, *(_DWORD *)((char *)&unk_140E0EED0 + v5 + 8), v7, a2);
  v9 = &stru_140E3E9F0;
  if ( a1 != 1 )
    v9 = &stru_140E3EA10;
  BcpDisplayCriticalString(v9, *(_DWORD *)((char *)&unk_140E0EED0 + v5 + 8), v8, a2);
  v10 = *(_QWORD *)&BcpCursor;
  v11 = dword_140EEFAE8;
  v25 = *(_QWORD *)&BcpCursor;
  LODWORD(v26) = dword_140EEFAE8;
  if ( BcpCursorLessThan(&v25) )
  {
    v12 = BcpCursor;
    v13 = *(&BcpCursor + 1);
    v14 = (char *)&unk_140E0EED0 + v5;
    v15 = *(_DWORD *)(*(_QWORD *)(qword_140E3EAA0 + 24) + 40LL);
    v16 = (char *)&unk_140E0EED0 + v5;
    if ( BcpTextBoxLeftEdgeOverride )
      v17 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    else
      v17 = *((_DWORD *)v16 + 4) + *((_DWORD *)v14 + 8);
    if ( BcpTextBoxRightEdgeOverride )
      v18 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v18 = *((_DWORD *)v14 + 8) + *((_DWORD *)v16 + 4) + *(_DWORD *)((char *)&unk_140E0EED0 + v5 + 24);
LABEL_12:
    v23 = __PAIR64__(v13, v12);
    while ( BcpCursorLessThan(&v23) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140E3EAA0, v12, v13, v15, v15, &v21, &v22, v20) < 0 )
        return 0LL;
      v12 += v21;
      LODWORD(v23) = v12;
      if ( v12 > v18 )
      {
        v13 += v22;
        v12 = v17;
        goto LABEL_12;
      }
    }
    v10 = v25;
  }
  if ( (dword_140EF0050 & 0x1000000) == 0 )
  {
    BcpProgressEnd = v10;
    dword_140EEFF68 = v11;
  }
  return 0LL;
}
