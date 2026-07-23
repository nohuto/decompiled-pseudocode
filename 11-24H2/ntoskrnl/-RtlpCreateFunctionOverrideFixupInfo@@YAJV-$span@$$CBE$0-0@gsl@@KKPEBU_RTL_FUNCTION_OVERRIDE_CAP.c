/*
 * XREFs of ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x14093F818
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x14093F474 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14093FDFC (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x14093FEA8 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409403D4 (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14094070C (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCreateFunctionOverrideFixupInfo(
        __int128 *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct _RTL_FUNCTION_OVERRIDE_INFORMATION **a5,
        __int64 a6)
{
  __int128 v6; // xmm1
  struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v7; // r13
  __int64 v8; // r10
  unsigned int v9; // edi
  int v10; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  int *v15; // r15
  unsigned __int64 i; // rdx
  unsigned __int64 v17; // rax
  __int128 v18; // xmm6
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r12
  char *Pool2; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned int *v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r10
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rbx
  int v31; // eax
  __int128 v32; // xmm6
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  int *v36; // rbx
  int v37; // eax
  int v38; // r14d
  _DWORD *v39; // [rsp+28h] [rbp-E0h]
  __int128 v40; // [rsp+48h] [rbp-C0h]
  __int128 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+68h] [rbp-A0h]
  __int128 v43; // [rsp+78h] [rbp-90h]
  struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v44; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h]
  __int128 v46; // [rsp+98h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h]
  __int128 v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-38h]
  __int128 v51; // [rsp+E0h] [rbp-28h]
  int v52; // [rsp+158h] [rbp+50h]

  v6 = *a1;
  v7 = 0LL;
  v8 = a2 >> 12;
  v49 = 0LL;
  P = 0LL;
  v9 = a2;
  v44 = 0LL;
  v51 = 0LL;
  *a5 = 0LL;
  if ( (unsigned __int64)v6 >= 4 )
  {
    *(_QWORD *)&v40 = v6 - 4;
    *((_QWORD *)&v40 + 1) = *((_QWORD *)&v6 + 1) + 4LL;
    if ( *((_QWORD *)&v6 + 1) )
    {
      v12 = (unsigned int)**((_DWORD **)&v6 + 1);
      if ( (_DWORD)v12 )
      {
        v13 = v6 - 4;
        v14 = (unsigned int)v12;
        if ( v12 < (unsigned __int64)v40 )
        {
          v15 = (int *)(*((_QWORD *)&v6 + 1) + 4LL);
          i = v40 - (unsigned int)v12;
          v17 = *((_QWORD *)&v40 + 1) + v12;
          *(_QWORD *)&v48 = v40 - v14;
          if ( (_QWORD)v40 - v14 == -1LL )
            goto LABEL_53;
          *((_QWORD *)&v48 + 1) = v17;
          if ( v14 > (unsigned __int64)v40 )
            goto LABEL_53;
          *(_QWORD *)&v40 = v14;
          if ( *((_QWORD *)&v6 + 1) == -4LL )
            goto LABEL_53;
          v18 = v40;
          if ( i )
          {
            v19 = 2 * v8;
            v20 = (unsigned int)v8;
            Pool2 = (char *)ExAllocatePool2(0x100uLL, 8 * v8, 0x6F467452u);
            P = Pool2;
            v13 = (unsigned __int64)Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741801;
            if ( v20 <= v19 )
            {
              *((_QWORD *)&v41 + 1) = Pool2;
              *(_QWORD *)&v41 = v20;
              *(_QWORD *)&v43 = v20;
              v13 = 0LL;
              *((_QWORD *)&v43 + 1) = &Pool2[4 * (v19 - v20)];
              LODWORD(v49) = 0;
              v52 = 0;
              v50 = v41;
              if ( v14 < 0x10 )
              {
                v22 = 0LL;
              }
              else
              {
                *(_QWORD *)&v41 = v14 - 16;
                *((_QWORD *)&v41 + 1) = *((_QWORD *)&v6 + 1) + 20LL;
                v22 = *((_QWORD *)&v6 + 1) + 4LL;
                v13 = 0LL;
                v40 = v41;
              }
              while ( v22 )
              {
                for ( i = v22; i != v22 + 4; i += 4LL )
                {
                  v23 = *(unsigned int *)i;
                  if ( v23 >= (unsigned __int64)v9 - 4 || (unsigned int)v23 < a3 )
                    goto LABEL_2;
                }
                v24 = *(unsigned int *)(v22 + 8);
                if ( !(_DWORD)v24 )
                  goto LABEL_2;
                if ( (v24 & 3) != 0 )
                  goto LABEL_2;
                v13 = (unsigned int)v24;
                if ( v24 > (unsigned __int64)v40 )
                  goto LABEL_2;
                v25 = (unsigned int *)*((_QWORD *)&v40 + 1);
                if ( !*((_QWORD *)&v40 + 1) )
                  goto LABEL_53;
                if ( (v24 & 3) != 0 )
                  goto LABEL_53;
                i = (unsigned __int64)(unsigned int)v24 >> 2;
                if ( (unsigned __int64)v40 < (unsigned int)v24 )
                  goto LABEL_53;
                v26 = *((_QWORD *)&v40 + 1) + v24;
                v27 = v40 - v13;
                if ( (_QWORD)v40 - v13 == -1LL )
                  goto LABEL_53;
                v28 = *((_QWORD *)&v40 + 1) + 4 * i;
                while ( v25 != (unsigned int *)v28 )
                {
                  v29 = *v25;
                  i = v9 - 4LL;
                  if ( v29 >= i || (unsigned int)v29 < a3 )
                    goto LABEL_2;
                  ++v25;
                }
                v13 = *(unsigned int *)(v22 + 12);
                if ( !(_DWORD)v13 || (v13 & 3) != 0 || v13 > v27 )
                  goto LABEL_2;
                *(_QWORD *)&v47 = *(unsigned int *)(v22 + 12);
                *((_QWORD *)&v47 + 1) = v26;
                if ( !v26 )
                  goto LABEL_53;
                v30 = v27 - v13;
                v22 = v13 + v26;
                *(_QWORD *)&v41 = v30;
                if ( v30 == -1LL )
                  goto LABEL_53;
                *((_QWORD *)&v41 + 1) = v13 + v26;
                v40 = v41;
                v46 = v47;
                v10 = RtlpParseFunctionOverrideRelocations(v9, &v46, a3, &v49);
                if ( v10 < 0 )
                  goto LABEL_3;
                if ( v30 < 0x10 )
                {
                  v22 = 0LL;
                }
                else
                {
                  *(_QWORD *)&v42 = v30 - 16;
                  *((_QWORD *)&v42 + 1) = v22 + 16;
                  v40 = v42;
                }
                v9 = a2;
                v13 = (unsigned int)++v52;
              }
              *(_QWORD *)&v42 = v20;
              *((_QWORD *)&v42 + 1) = P;
              if ( P || !v20 )
              {
                v46 = v42;
                v31 = RtlpAllocateFunctionOverrideInfo(&v46, (unsigned int)v13, &v44);
                v7 = v44;
                v10 = v31;
                if ( v31 >= 0 )
                {
                  DWORD2(v51) = 0;
                  LODWORD(v49) = 1;
                  *(_QWORD *)&v51 = v44;
                  v40 = v18;
                  v50 = v43;
                  if ( v14 < 0x10 )
                  {
                    v15 = 0LL;
                  }
                  else
                  {
                    *(_QWORD *)&v43 = v14 - 16;
                    *((_QWORD *)&v43 + 1) = *((_QWORD *)&v6 + 1) + 20LL;
                    v40 = v43;
                  }
                  v32 = v48;
                  while ( v15 )
                  {
                    v13 = (unsigned int)v15[2];
                    v33 = (unsigned int)v15[3];
                    if ( (unsigned __int64)v40 < v13 )
                      goto LABEL_53;
                    if ( (unsigned __int64)v40 - v13 < v33 )
                      goto LABEL_53;
                    i = *((_QWORD *)&v40 + 1);
                    *(_QWORD *)&v43 = (unsigned int)v15[3];
                    *((_QWORD *)&v43 + 1) = *((_QWORD *)&v40 + 1) + v13;
                    if ( v13 > (unsigned __int64)v40 || !*((_QWORD *)&v40 + 1) && v13 )
                      goto LABEL_53;
                    if ( (v13 & 3) != 0 )
                      goto LABEL_53;
                    *((_QWORD *)&v42 + 1) = *((_QWORD *)&v40 + 1);
                    *(_QWORD *)&v42 = v13 >> 2;
                    if ( !*((_QWORD *)&v40 + 1) && v13 >= 4 )
                      goto LABEL_53;
                    v34 = (unsigned int)(v13 + v33);
                    v13 = v34;
                    if ( (unsigned __int64)v40 < v34 )
                      goto LABEL_53;
                    v35 = v40 - v34;
                    v36 = (int *)(*((_QWORD *)&v40 + 1) + v34);
                    *(_QWORD *)&v48 = v40 - v34;
                    if ( (_QWORD)v40 - v34 == -1LL )
                      goto LABEL_53;
                    *((_QWORD *)&v48 + 1) = *((_QWORD *)&v40 + 1) + v34;
                    v40 = v48;
                    v46 = v43;
                    v10 = RtlpParseFunctionOverrideRelocations(a2, &v46, a3, &v49);
                    if ( v10 < 0 )
                      goto LABEL_3;
                    v37 = *v15;
                    v38 = DWORD2(v51);
                    v46 = v42;
                    v39 = (_DWORD *)((char *)v7 + 16 * DWORD2(v51) + 40);
                    v41 = v32;
                    *v39 = v37;
                    v10 = RtlpParseBinaryDecisionDiagram(&v41, &v46, (unsigned int)v15[1], a4, v39, a6);
                    if ( v10 < 0 )
                      goto LABEL_3;
                    if ( v35 < 0x10 )
                    {
                      v15 = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)&v47 = v35 - 16;
                      *((_QWORD *)&v47 + 1) = v36 + 4;
                      v15 = v36;
                      v40 = v47;
                    }
                    DWORD2(v51) = v38 + 1;
                  }
                  v10 = RtlpSortAndValidateRelocations(v7);
                  if ( v10 >= 0 )
                    *a5 = v7;
                }
                goto LABEL_3;
              }
            }
LABEL_53:
            gsl::details::terminate((gsl::details *)v13, i);
            __debugbreak();
          }
        }
      }
    }
  }
LABEL_2:
  v10 = -1073741701;
LABEL_3:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 < 0 && v7 )
    SddlpFree(v7);
  return (unsigned int)v10;
}
