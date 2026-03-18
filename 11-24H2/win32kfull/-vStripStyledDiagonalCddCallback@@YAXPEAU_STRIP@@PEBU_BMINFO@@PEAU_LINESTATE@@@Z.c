/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1401E4A60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r12
  int v5; // ebp
  int v7; // edi
  int v8; // r11d
  __int64 v9; // rsi
  int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // ett
  unsigned int v13; // r9d
  int v14; // r14d
  int v15; // r12d
  unsigned int v16; // r15d
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  unsigned int v20; // [rsp+24h] [rbp-74h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+2Ch] [rbp-6Ch]
  char *v23; // [rsp+30h] [rbp-68h]
  void (__fastcall *v24)(__int64, _QWORD, _DWORD *); // [rsp+38h] [rbp-60h]
  char *v25; // [rsp+40h] [rbp-58h]
  _DWORD v26[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a3 + 20);
  v7 = *((_DWORD *)a3 + 5);
  v8 = 1;
  v9 = *((_QWORD *)a1 + 2);
  v23 = (char *)a1 + 28;
  v25 = (char *)a1 + 4 * *(int *)a1 + 28;
  v10 = -4 * *((_DWORD *)a1 + 2);
  v20 = *((_DWORD *)a3 + 1);
  if ( (*((_BYTE *)a1 + 4) & 8) == 0 )
    v10 = 4 * *((_DWORD *)a1 + 2);
  v21 = v10;
  if ( v10 <= 0 )
    v8 = -1;
  v11 = -v10;
  v22 = v8;
  if ( v10 > 0 )
    v11 = v10;
  v12 = v9 - *((_DWORD *)a1 + 110);
  v13 = (v12 % v11) >> 2;
  v14 = v12 / v11;
  v24 = *(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*((_QWORD *)a1 + 54) + 8LL);
  do
  {
    v15 = *(_DWORD *)v3;
    while ( 1 )
    {
      v16 = v13 + 1;
      if ( !v5 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v26[3] = v14 + 1;
        v26[0] = v13;
        v26[1] = v14;
        v26[2] = v13 + 1;
        v24(v17, v20, v26);
        v10 = v21;
        v8 = v22;
      }
      v9 += 4LL;
      v13 = v16;
      if ( !--v15 )
        break;
      v7 -= *((_DWORD *)a3 + 4);
      v14 += v8;
      v9 += v10;
      if ( v7 <= 0 )
      {
        v18 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v18;
        if ( (unsigned __int64)v18 > *((_QWORD *)a3 + 6) )
        {
          v18 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v18;
        }
        v7 += *v18;
        v5 = v5 == 0;
      }
    }
    v7 -= *((_DWORD *)a3 + 2);
    if ( v7 <= 0 )
    {
      v19 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v19;
      if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
      {
        v19 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v19;
      }
      v7 += *v19;
      v5 = v5 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v13 = v16 - 1;
      v9 += v10 - 4;
      v14 += v8;
    }
    v3 = v23 + 4;
    v23 = v3;
  }
  while ( v3 < v25 );
  *((_QWORD *)a1 + 2) = v9;
  *((_DWORD *)a3 + 20) = v5;
  *((_DWORD *)a3 + 5) = v7;
}
