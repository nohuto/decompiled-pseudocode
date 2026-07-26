/*
 * XREFs of ndisNsiGetInterfaceRwInformation @ 0x14015C4E0
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14004F5B0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // r13
  char v6; // r14
  __int64 v7; // rdi
  char *v8; // rdx
  unsigned int v9; // ecx
  char *v10; // r12
  unsigned int v11; // ebx
  int v12; // ebp
  char v14; // r8
  __int64 v15; // r13
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  int v18; // edi
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int (__fastcall *v21)(__int64, _QWORD, unsigned int *, char *); // rax
  _QWORD *v22; // rdi
  __int64 v23; // r12
  unsigned __int16 v24; // cx
  char *v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // eax
  const void *v28; // rdx
  __int64 v29; // rdi
  char v30; // [rsp+50h] [rbp-2A8h]
  unsigned int v31; // [rsp+54h] [rbp-2A4h] BYREF
  char *v32; // [rsp+58h] [rbp-2A0h]
  unsigned int v33; // [rsp+60h] [rbp-298h]
  char *v34; // [rsp+68h] [rbp-290h]
  __int64 v35; // [rsp+70h] [rbp-288h]
  __int64 v36; // [rsp+78h] [rbp-280h]
  _QWORD *v37; // [rsp+80h] [rbp-278h]
  __int64 v38; // [rsp+88h] [rbp-270h]
  __int64 v39; // [rsp+90h] [rbp-268h]
  char v40[528]; // [rsp+A0h] [rbp-258h] BYREF

  v3 = a2;
  v38 = a3;
  v4 = 0;
  v39 = a2;
  v36 = a1;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    v3 = a1;
  v7 = a1;
  v35 = v3;
  memset(v40, 0, 0x204uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      v7,
      v6,
      v5);
  v10 = *(char **)(v5 + 40);
  v11 = *(_DWORD *)(v5 + 52);
  v12 = *(_DWORD *)(v5 + 48);
  v32 = v10;
  if ( !v10 )
  {
    *(_DWORD *)(v5 + 48) = 0;
    goto LABEL_7;
  }
  v14 = 0;
  v30 = 0;
  if ( v12 > 0 )
  {
    v15 = v7;
    while ( 1 )
    {
      if ( v14 )
      {
LABEL_31:
        v5 = v38;
        LOBYTE(v7) = v36;
        v6 = v39;
        break;
      }
      LOBYTE(v9) = 0;
      v8 = 0LL;
      v33 = v9;
      v16 = 0;
      if ( v11 > 0x218 )
      {
        if ( v11 == 570 )
        {
          v17 = 516;
          if ( *(_QWORD *)(v15 + 1424) )
          {
            v8 = *(char **)(v15 + 1424);
            v18 = 1088;
          }
          else
          {
            v18 = 1088;
            v9 = (unsigned int)v12 >= 0x204;
          }
        }
        else
        {
          if ( v11 != 1088 )
            goto LABEL_39;
          v18 = 1092;
          v30 = 1;
          v17 = 4;
          v8 = (char *)(v15 + 1484);
        }
      }
      else if ( v11 == 536 )
      {
        v17 = 34;
        v8 = (char *)(v35 + 1124);
        v18 = 570;
        if ( !*(_BYTE *)(v15 + 1393) )
        {
          v8 = 0LL;
          v16 = 16843010;
        }
      }
      else if ( v11 )
      {
        if ( v11 == 16 )
        {
          v18 = 20;
          v16 = 66184;
          v17 = 4;
        }
        else
        {
          if ( v11 != 20 )
            goto LABEL_39;
          v17 = 516;
          if ( !*(_BYTE *)(v15 + 1393) )
          {
            v16 = 66185;
            goto LABEL_21;
          }
          if ( !*(_BYTE *)(v15 + 1394) )
          {
            v8 = (char *)(v15 + 596);
LABEL_21:
            v18 = 536;
            goto LABEL_25;
          }
          v22 = *(_QWORD **)(v15 + 1408);
          v37 = v22;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0xEu,
              (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
              (char)v22,
              v40);
          memset(v40, 0, 0x204uLL);
          *(_WORD *)v40 = *(_WORD *)(v22[2] + 112LL) + 12 + *(_WORD *)(*(_QWORD *)(v22[4] + 4040LL) + 596LL);
          if ( *(_WORD *)v40 > 0x200u )
            *(_WORD *)v40 = 512;
          memmove(
            &v40[2],
            (const void *)(*(_QWORD *)(v22[4] + 4040LL) + 598LL),
            *(unsigned __int16 *)(*(_QWORD *)(v22[4] + 4040LL) + 596LL));
          v23 = *(unsigned __int16 *)(*(_QWORD *)(v22[4] + 4040LL) + 596LL);
          v24 = *(_WORD *)v40;
          v25 = &v40[v23 + 2];
          v34 = &v40[v23 + 2];
          if ( *(unsigned __int16 *)v40 - (unsigned int)v23 >= 2 )
          {
            *(_WORD *)v25 = 45;
            LODWORD(v23) = v23 + 2;
            v24 = *(_WORD *)v40;
            v25 += 2;
            v34 = v25;
          }
          if ( v24 > (unsigned int)v23 )
          {
            v26 = v22[2];
            v27 = *(unsigned __int16 *)(v26 + 112);
            v28 = *(const void **)(v26 + 120);
            if ( v24 - (unsigned int)v23 <= v27 )
              v27 = v24 - (_DWORD)v23;
            v29 = v27;
            memmove(v25, v28, v27);
            LODWORD(v23) = v29 + v23;
            v24 = *(_WORD *)v40;
            v25 = &v34[v29];
            v22 = v37;
          }
          if ( v24 - (unsigned int)v23 >= 2 )
          {
            *(_WORD *)v25 = 45;
            LODWORD(v23) = v23 + 2;
            v24 = *(_WORD *)v40;
            v25 += 2;
          }
          if ( v24 - (unsigned int)v23 >= 8 )
            *(_QWORD *)v25 = *(_QWORD *)(*(_QWORD *)(v22[5] + 8LL)
                                       + 2 * (((unsigned __int64)*(unsigned __int16 *)v22[5] - 8) >> 1));
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0xFu,
              (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
              (char)v22,
              v40);
          v9 = v33;
          v8 = v40;
          v10 = v32;
          v18 = 536;
        }
      }
      else
      {
        v17 = 16;
        v8 = (char *)(v15 + 580);
        v18 = 16;
      }
LABEL_25:
      if ( v12 < v17 )
        goto LABEL_39;
      if ( v16 )
      {
        v20 = *(_QWORD *)(v35 + 1320);
        v21 = *(unsigned int (__fastcall **)(__int64, _QWORD, unsigned int *, char *))(*(_QWORD *)(v35 + 1328) + 56LL);
        v31 = v17;
        if ( !v21(v20, v16, &v31, v10) )
        {
          if ( v31 < v17 )
            memset(&v10[v31], 0, v17 - v31);
          goto LABEL_29;
        }
        goto LABEL_46;
      }
      if ( !v8 )
      {
        if ( !(_BYTE)v9 )
        {
LABEL_39:
          v14 = 1;
          v30 = 1;
          goto LABEL_30;
        }
LABEL_46:
        memset(v10, 0, v17);
        goto LABEL_29;
      }
      memmove(v10, v8, v17);
LABEL_29:
      v14 = v30;
      v9 = v18 - v11;
      v11 = v18;
      v10 += v9;
      v32 = v10;
      v12 -= v9;
LABEL_30:
      if ( v12 <= 0 )
        goto LABEL_31;
    }
  }
  v19 = v11 - *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v5 + 48) = v19;
  if ( !v19 )
    v4 = -1073741811;
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      v7,
      v6,
      v5,
      v4);
  return v4;
}
