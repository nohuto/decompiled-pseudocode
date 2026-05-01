/*
 * XREFs of CrmSrvActivityAllocate @ 0x180030E68
 * Callers:
 *     CrmpInProcActivityAllocate @ 0x18006C1B0 (CrmpInProcActivityAllocate.c)
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B7A8 (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CrmRegistrationCreateActivity @ 0x1800315A0 (CrmRegistrationCreateActivity.c)
 *     CrmActivityCleanup @ 0x180032E00 (CrmActivityCleanup.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800347F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180055770 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityAllocate(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r12
  int v11; // ebx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // xmm0_8
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // r8d
  int Activity; // eax
  _QWORD *v20; // rcx
  int v21; // ecx
  __int64 i; // rdx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h]
  _DWORD Key[6]; // [rsp+68h] [rbp-98h] BYREF
  char v32[32]; // [rsp+80h] [rbp-80h] BYREF
  UUID *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+ACh] [rbp-54h]
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  unsigned int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  unsigned __int64 *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  char v48[16]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  char v52[32]; // [rsp+110h] [rbp+10h] BYREF
  UUID *v53; // [rsp+130h] [rbp+30h]
  int v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+13Ch] [rbp+3Ch]

  P = 0LL;
  v6 = -1LL;
  v26 = a5;
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 && (qword_1800E8300 & 1) == qword_1800E8300 )
  {
    v55 = 0;
    v53 = &Uuid;
    v54 = 16;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D2297, 0LL, 0LL, 3, v52);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 >= 309 || a3 > 0x640 || (v11 == 307) != (a3 == 1301) )
    goto LABEL_13;
  Key[0] = *(_DWORD *)(a2 + 24);
  Key[2] = 0;
  v29 = 0LL;
  v30 = 0;
  Key[1] = a3;
  v12 = (unsigned __int64 *)bsearch(Key, &CrmActivityToPolicyTable, 0x5DuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( !v12 )
  {
    if ( (unsigned int)(v11 - 9) > 0x7C || a3 - 301 > 0x7C )
      goto LABEL_13;
    v29 = __PAIR64__(a3, v11);
    v12 = &v29;
    v30 = 17;
  }
  v13 = *v12;
  v14 = *((_DWORD *)v12 + 2);
  v27 = v13;
  v28 = v14;
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
    v21 = 0;
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(a4 + 4 * i) >= 3u )
        goto LABEL_13;
      if ( *(_DWORD *)(a4 + 4 * i) != 2 )
        v21 = 1;
    }
    if ( !v21 )
      goto LABEL_13;
  }
  else if ( a4 )
  {
    goto LABEL_13;
  }
  Activity = CrmRegistrationCreateActivity(a2, a3, a4);
  v20 = P;
  v15 = Activity;
  if ( Activity >= 0 )
  {
    v6 = *((_QWORD *)P + 7);
    v15 = 0;
    *a1 = v6;
    *a6 = v20[18];
  }
LABEL_14:
  if ( (unsigned int)dword_1800E82E8 > 5 && (qword_1800E82F8 & 1) != 0 && (qword_1800E8300 & 1) == qword_1800E8300 )
  {
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v33 = &Uuid;
    v24 = *(_DWORD *)(a2 + 24);
    v36 = &v24;
    v39 = a2 + 72;
    v17 = *(unsigned __int8 *)(a2 + 73);
    v34 = 16;
    v37 = 4;
    v25 = a3;
    v43 = 4;
    v40 = 4 * v17 + 8;
    v42 = &v25;
    v45 = &v29;
    v29 = v6;
    v46 = 8;
    tlgCreate1Sz_wchar_t(v48, v26);
    v51 = 0;
    p_P = &P;
    v50 = v18;
    LODWORD(P) = v15;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E82E8, &unk_1800D252C, 0LL, 0LL, 9, v32);
  }
  return v15;
}
