/*
 * XREFs of PerfReadWrappingCounter @ 0x140002410
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfReadWrappingCounter(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall *v4)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *); // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 result; // rax
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+90h] [rbp-70h] BYREF
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  char *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]

  v4 = *(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(a1 + 48);
  v9 = *(_QWORD *)(a1 + 56);
  v21 = 0LL;
  v22 = 0LL;
  v4(v9, 0LL, &v22, &v21);
  v10 = *(unsigned int *)(a1 + 520);
  if ( (unsigned int)v10 >= 8 )
  {
    *(_DWORD *)(a1 + 520) = 0;
    v10 = 0LL;
  }
  v11 = 56 * v10;
  *(_QWORD *)(v11 + a1 + 72) = v21;
  *(_QWORD *)(v11 + a1 + 80) = v22;
  *(_QWORD *)(v11 + a1 + 88) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v11 + a1 + 96) = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(v11 + a1 + 120) = a2;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 40);
  v14 = v21;
  if ( a2 )
  {
    if ( v12 )
    {
      v14 = v12 & v21;
      v21 &= v12;
    }
    v15 = v22;
    if ( v13 )
    {
      v15 = v13 & v22;
      v22 &= v13;
    }
  }
  else
  {
    if ( v12 )
    {
      v14 = v12 & v21;
      v21 = v14;
      if ( v14 < *(_QWORD *)a1 )
        *(_QWORD *)(a1 + 16) += v12 + 1;
    }
    v15 = v22;
    *(_QWORD *)(a1 + 16) += v14 - *(_QWORD *)a1;
    if ( v13 )
    {
      v15 &= v13;
      v22 = v15;
      if ( v15 < *(_QWORD *)(a1 + 8) )
        *(_QWORD *)(a1 + 24) += v13 + 1;
    }
    *(_QWORD *)(a1 + 24) += v15 - *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v15;
  v16 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(v11 + a1 + 104) = v16;
  v17 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v11 + a1 + 112) = v17;
  if ( (unsigned int)dword_140018C98 > 5 )
  {
    v23 = *(_DWORD *)(a1 + 520);
    v34 = &v23;
    v24 = *(_DWORD *)(a1 + 64);
    v36 = &v24;
    v25 = *(_QWORD *)(v11 + a1 + 72);
    v38 = &v25;
    v26 = *(_QWORD *)(v11 + a1 + 80);
    v40 = &v26;
    v42 = &v27;
    v44 = &v28;
    v29 = *(_QWORD *)(v11 + a1 + 88);
    v46 = &v29;
    v30 = *(_QWORD *)(v11 + a1 + 96);
    v48 = &v30;
    v50 = &v31;
    v52 = &v32;
    v20 = *(_BYTE *)(v11 + a1 + 120);
    v54 = &v20;
    v31 = v16;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 8LL;
    v41 = 8LL;
    v27 = v12;
    v43 = 8LL;
    v28 = v13;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v51 = 8LL;
    v32 = v17;
    v53 = 8LL;
    v55 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140018C98,
      (unsigned __int8 *)dword_140014EB9,
      v17,
      v12,
      (ULONG)13,
      &v33);
  }
  v18 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 520);
  *a3 = v18;
  result = *(_QWORD *)(a1 + 16);
  *a4 = result;
  return result;
}
