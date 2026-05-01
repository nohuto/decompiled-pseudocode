/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x180031280
 * Callers:
 *     <none>
 * Callees:
 *     CrmRegistrationCreateActivity @ 0x180031620 (CrmRegistrationCreateActivity.c)
 *     CrmActivityCleanup @ 0x180032E80 (CrmActivityCleanup.c)
 *     _tlgCreate1Sz_wchar_t @ 0x180034870 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r12
  int v11; // ebx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int Activity; // eax
  _QWORD *v19; // rcx
  int v20; // ecx
  unsigned int i; // edx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h]
  _DWORD Key[6]; // [rsp+68h] [rbp-98h] BYREF
  char v31[32]; // [rsp+80h] [rbp-80h] BYREF
  UUID *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  unsigned int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  char v43[16]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char v46[32]; // [rsp+110h] [rbp+10h] BYREF
  UUID *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]

  v7 = -1LL;
  v25 = a5;
  P = 0LL;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
  {
    v47 = &Uuid;
    v48 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D1297, 0LL, 0LL, 3, v46);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 >= 309 || a3 > 0x640 || (v11 == 307) != (a3 == 1301) )
    goto LABEL_13;
  Key[2] = 0;
  v28 = 0LL;
  v29 = 0;
  Key[0] = v11;
  Key[1] = a3;
  v12 = (unsigned __int64 *)bsearch(Key, &CrmActivityToPolicyTable, 0x5DuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( !v12 )
  {
    if ( (unsigned int)(v11 - 9) > 0x7B || a3 - 301 > 0x7B )
      goto LABEL_13;
    v28 = __PAIR64__(a3, v11);
    v12 = &v28;
    v29 = 17;
  }
  v13 = *v12;
  v14 = *((_DWORD *)v12 + 2);
  v26 = v13;
  v27 = v14;
  if ( (_DWORD)v13 != v11 )
  {
LABEL_13:
    v15 = -1073741811;
    goto LABEL_14;
  }
  if ( a3 == 1301 )
  {
    if ( !a4 )
      goto LABEL_13;
    v20 = 0;
    for ( i = 0; i < 8; ++i )
    {
      if ( *(_DWORD *)(a4 + 4LL * i) >= 3u )
        goto LABEL_13;
      if ( *(_DWORD *)(a4 + 4LL * i) != 2 )
        v20 = 1;
    }
    if ( !v20 )
      goto LABEL_13;
  }
  else if ( a4 )
  {
    goto LABEL_13;
  }
  Activity = CrmRegistrationCreateActivity(a2, a3, a4);
  v19 = P;
  v15 = Activity;
  if ( Activity >= 0 )
  {
    v7 = *((_QWORD *)P + 7);
    v15 = 0;
    *a1 = v7;
    *a6 = v19[18];
  }
LABEL_14:
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 && (qword_1800E7300 & 1) == qword_1800E7300 )
  {
    v32 = &Uuid;
    v23 = *(_DWORD *)(a2 + 24);
    v34 = &v23;
    v36 = a2 + 72;
    v17 = *(unsigned __int8 *)(a2 + 73);
    v33 = 16LL;
    v35 = 4LL;
    v38 = 0;
    v24 = a3;
    v37 = 4 * v17 + 8;
    v39 = &v24;
    v41 = &v28;
    v40 = 4LL;
    v28 = v7;
    v42 = 8LL;
    tlgCreate1Sz_wchar_t(v43, v25);
    LODWORD(P) = v15;
    p_P = &P;
    v45 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D152C, 0LL, 0LL, 9, v31);
  }
  if ( v15 >= 0 )
    return 0;
  return (unsigned int)v15;
}
