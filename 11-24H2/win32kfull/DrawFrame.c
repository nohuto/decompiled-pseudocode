/*
 * XREFs of DrawFrame @ 0x1401EA350
 * Callers:
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall DrawFrame(HDC a1, int *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rdx
  int v11; // [rsp+38h] [rbp-49h]
  int v12; // [rsp+3Ch] [rbp-45h]
  _DWORD v14[4]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v15; // [rsp+58h] [rbp-29h]
  int v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+64h] [rbp-1Dh]
  int v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+6Ch] [rbp-15h]
  __int64 v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+78h] [rbp-9h]
  int v22; // [rsp+7Ch] [rbp-5h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int v28; // [rsp+98h] [rbp+17h]
  int v29; // [rsp+9Ch] [rbp+1Bh]
  __int64 v30; // [rsp+A0h] [rbp+1Fh]

  v5 = *a2;
  v6 = a2[1];
  v12 = a2[2] - a3;
  v7 = v12 - *a2;
  v11 = a2[3] - a3;
  v8 = (a4 & 4) != 0 ? 0xFF6A0028 : 0;
  if ( (a4 & 0xFFFFFFF8) == 0xF8 )
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 4944LL);
  else
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 8 * ((__int64)a4 >> 3) + 4696);
  v16 = v5 + a3;
  v22 = v11;
  v26 = v12;
  v15 = v9;
  v20 = v9;
  v25 = v9;
  v30 = v9;
  v27 = v6 + a3;
  v14[0] = v5;
  v14[1] = v6;
  v14[2] = a3;
  v14[3] = v11 - v6;
  v17 = v6;
  v18 = v7;
  v19 = a3;
  v21 = v5;
  v23 = v7;
  v24 = a3;
  v28 = a3;
  v29 = v11 - v6;
  GrePolyPatBlt(a1, v8 + 15728673, (struct _POLYPATBLT *)v14, 4);
  return 1LL;
}
