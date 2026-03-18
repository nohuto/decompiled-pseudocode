/*
 * XREFs of _lambda_25828e919f6f014123ebe7d58fe0bd3b_::operator() @ 0x1401AA924
 * Callers:
 *     _DXGKCALLONEXIT__lambda_25828e919f6f014123ebe7d58fe0bd3b____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006A7D4 (_DXGKCALLONEXIT__lambda_25828e919f6f014123ebe7d58fe0bd3b____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

char __fastcall lambda_25828e919f6f014123ebe7d58fe0bd3b_::operator()(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *v3; // rax
  int v4; // r9d
  int v5; // r8d
  __int64 v6; // rax
  int *v7; // rcx
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  int v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+84h] [rbp-7Ch]
  int v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+8Ch] [rbp-74h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  __int16 *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  __int64 *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  int v40; // [rsp+ECh] [rbp-14h]
  __int64 *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]

  v1 = *a1;
  v3 = a1[2];
  v21 = 0LL;
  v25 = 0;
  v22 = 0LL;
  v4 = *(_DWORD *)v1;
  v5 = *((_DWORD *)v1 + 1);
  v6 = *v3;
  v24 = 0;
  v23 = 0LL;
  v21 = 0LL;
  v7 = (int *)a1[1];
  v20[0] = 30;
  v20[1] = 72;
  v22 = 0LL;
  v29 = *v7;
  v8 = (unsigned __int64 *)a1[3];
  v26 = 110;
  v27 = v5;
  v28 = v4;
  v9 = *v8;
  v30 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v20, v9);
  v10 = a1[4];
  if ( *(_BYTE *)v10 )
  {
    if ( (unsigned int)dword_14015E650 > 5 )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_14015E650, 0x800000000004LL);
      if ( (_BYTE)v10 )
      {
        v11 = *a1;
        v43 = 0;
        v40 = 0;
        v37 = 0;
        v12 = *v11;
        v13 = a1[2];
        v34 = 0;
        v17 = v12;
        v42 = 8;
        v14 = *v13;
        v16 = 1;
        v41 = &v17;
        v38 = &v18;
        v35 = &v16;
        v32 = &v19;
        v18 = v14;
        v39 = 8;
        v33 = 8;
        v19 = 2048LL;
        v36 = 2;
        LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E650, byte_14013C2AA, 0LL, 0LL, 6u, &v31);
      }
    }
  }
  return (char)v10;
}
