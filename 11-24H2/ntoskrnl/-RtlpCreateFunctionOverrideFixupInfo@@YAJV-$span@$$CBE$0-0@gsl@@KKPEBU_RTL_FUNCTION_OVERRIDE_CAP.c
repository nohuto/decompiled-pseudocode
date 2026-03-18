/*
 * XREFs of ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x1409EB484
 * Callers:
 *     RtlCreateFunctionOverrideFixupInfo @ 0x1409EB0E0 (RtlCreateFunctionOverrideFixupInfo.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F8960 (-terminate@details@gsl@@YAXXZ.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409EBA68 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x1409EBB14 (-RtlpParseFunctionOverrideRelocations@@YAJKV-$span@$$CBE$0-0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_P.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x1409EC040 (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409EC378 (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCreateFunctionOverrideFixupInfo(
        __int128 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
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
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v27; // r10
  unsigned __int64 v28; // rbx
  int v29; // eax
  __int128 v30; // xmm6
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  int *v33; // rbx
  int v34; // eax
  int v35; // r14d
  _DWORD *v36; // [rsp+28h] [rbp-E0h]
  __int128 v37; // [rsp+48h] [rbp-C0h]
  __int128 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+68h] [rbp-A0h]
  __int128 v40; // [rsp+78h] [rbp-90h]
  struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v41; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h]
  __int128 v43; // [rsp+98h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-60h]
  __int128 v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-38h]
  __int128 v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+158h] [rbp+50h]
  unsigned int v51; // [rsp+168h] [rbp+60h]
  unsigned __int64 v52; // [rsp+170h] [rbp+68h]

  v52 = a4;
  v51 = a3;
  v6 = *a1;
  v7 = 0LL;
  v8 = a2 >> 12;
  v46 = 0LL;
  P = 0LL;
  v9 = a2;
  v41 = 0LL;
  v48 = 0LL;
  *a5 = 0LL;
  if ( (unsigned __int64)v6 >= 4 )
  {
    *(_QWORD *)&v37 = v6 - 4;
    *((_QWORD *)&v37 + 1) = *((_QWORD *)&v6 + 1) + 4LL;
    if ( *((_QWORD *)&v6 + 1) )
    {
      v12 = (unsigned int)**((_DWORD **)&v6 + 1);
      if ( (_DWORD)v12 )
      {
        v13 = v6 - 4;
        v14 = (unsigned int)v12;
        if ( v12 < (unsigned __int64)v37 )
        {
          v15 = (int *)(*((_QWORD *)&v6 + 1) + 4LL);
          i = v37 - (unsigned int)v12;
          v17 = *((_QWORD *)&v37 + 1) + v12;
          *(_QWORD *)&v45 = v37 - v14;
          if ( (_QWORD)v37 - v14 == -1LL )
            goto LABEL_53;
          *((_QWORD *)&v45 + 1) = v17;
          if ( v14 > (unsigned __int64)v37 )
            goto LABEL_53;
          *(_QWORD *)&v37 = v14;
          if ( *((_QWORD *)&v6 + 1) == -4LL )
            goto LABEL_53;
          v18 = v37;
          if ( i )
          {
            v19 = 2 * v8;
            v20 = (unsigned int)v8;
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            P = Pool2;
            v13 = (unsigned __int64)Pool2;
            if ( !Pool2 )
              return (unsigned int)-1073741801;
            if ( v20 <= v19 )
            {
              *((_QWORD *)&v38 + 1) = Pool2;
              *(_QWORD *)&v38 = v20;
              *(_QWORD *)&v40 = v20;
              v13 = 0LL;
              *((_QWORD *)&v40 + 1) = &Pool2[4 * (v19 - v20)];
              LODWORD(v46) = 0;
              v49 = 0;
              v47 = v38;
              if ( v14 < 0x10 )
              {
                v22 = 0LL;
              }
              else
              {
                *(_QWORD *)&v38 = v14 - 16;
                *((_QWORD *)&v38 + 1) = *((_QWORD *)&v6 + 1) + 20LL;
                v22 = *((_QWORD *)&v6 + 1) + 4LL;
                v13 = 0LL;
                v37 = v38;
              }
              while ( v22 )
              {
                a4 = v22 + 4;
                for ( i = v22; i != a4; i += 4LL )
                {
                  v23 = *(unsigned int *)i;
                  if ( v23 >= (unsigned __int64)v9 - 4 || (unsigned int)v23 < v51 )
                    goto LABEL_2;
                }
                v24 = *(unsigned int *)(v22 + 8);
                if ( !(_DWORD)v24 )
                  goto LABEL_2;
                if ( (v24 & 3) != 0 )
                  goto LABEL_2;
                v13 = (unsigned int)v24;
                if ( v24 > (unsigned __int64)v37 )
                  goto LABEL_2;
                a3 = *((_QWORD *)&v37 + 1);
                if ( !*((_QWORD *)&v37 + 1) )
                  goto LABEL_53;
                if ( (v24 & 3) != 0 )
                  goto LABEL_53;
                i = (unsigned __int64)(unsigned int)v24 >> 2;
                if ( (unsigned __int64)v37 < (unsigned int)v24 )
                  goto LABEL_53;
                v25 = *((_QWORD *)&v37 + 1) + v24;
                v26 = v37 - v13;
                if ( (_QWORD)v37 - v13 == -1LL )
                  goto LABEL_53;
                v27 = *((_QWORD *)&v37 + 1) + 4 * i;
                while ( a3 != v27 )
                {
                  a4 = *(unsigned int *)a3;
                  i = v9 - 4LL;
                  if ( a4 >= i || (unsigned int)a4 < v51 )
                    goto LABEL_2;
                  a3 += 4LL;
                }
                v13 = *(unsigned int *)(v22 + 12);
                if ( !(_DWORD)v13 || (v13 & 3) != 0 || v13 > v26 )
                  goto LABEL_2;
                *(_QWORD *)&v44 = *(unsigned int *)(v22 + 12);
                *((_QWORD *)&v44 + 1) = v25;
                if ( !v25 )
                  goto LABEL_53;
                v28 = v26 - v13;
                v22 = v13 + v25;
                *(_QWORD *)&v38 = v28;
                if ( v28 == -1LL )
                  goto LABEL_53;
                *((_QWORD *)&v38 + 1) = v13 + v25;
                v37 = v38;
                v43 = v44;
                v10 = RtlpParseFunctionOverrideRelocations(v9, &v43, v51, &v46);
                if ( v10 < 0 )
                  goto LABEL_3;
                if ( v28 < 0x10 )
                {
                  v22 = 0LL;
                }
                else
                {
                  *(_QWORD *)&v39 = v28 - 16;
                  *((_QWORD *)&v39 + 1) = v22 + 16;
                  v37 = v39;
                }
                v9 = a2;
                v13 = (unsigned int)++v49;
              }
              *(_QWORD *)&v39 = v20;
              *((_QWORD *)&v39 + 1) = P;
              if ( P || !v20 )
              {
                v43 = v39;
                v29 = RtlpAllocateFunctionOverrideInfo(&v43, (unsigned int)v13, &v41);
                v7 = v41;
                v10 = v29;
                if ( v29 >= 0 )
                {
                  DWORD2(v48) = 0;
                  LODWORD(v46) = 1;
                  *(_QWORD *)&v48 = v41;
                  v37 = v18;
                  v47 = v40;
                  if ( v14 < 0x10 )
                  {
                    v15 = 0LL;
                  }
                  else
                  {
                    *(_QWORD *)&v40 = v14 - 16;
                    *((_QWORD *)&v40 + 1) = *((_QWORD *)&v6 + 1) + 20LL;
                    v37 = v40;
                  }
                  v30 = v45;
                  while ( v15 )
                  {
                    v13 = (unsigned int)v15[2];
                    a3 = (unsigned int)v15[3];
                    if ( (unsigned __int64)v37 < v13 )
                      goto LABEL_53;
                    if ( (unsigned __int64)v37 - v13 < a3 )
                      goto LABEL_53;
                    i = *((_QWORD *)&v37 + 1);
                    *(_QWORD *)&v40 = (unsigned int)v15[3];
                    *((_QWORD *)&v40 + 1) = *((_QWORD *)&v37 + 1) + v13;
                    if ( v13 > (unsigned __int64)v37 || !*((_QWORD *)&v37 + 1) && v13 )
                      goto LABEL_53;
                    if ( (v13 & 3) != 0 )
                      goto LABEL_53;
                    *((_QWORD *)&v39 + 1) = *((_QWORD *)&v37 + 1);
                    *(_QWORD *)&v39 = v13 >> 2;
                    if ( !*((_QWORD *)&v37 + 1) && v13 >= 4 )
                      goto LABEL_53;
                    v31 = (unsigned int)(v13 + a3);
                    v13 = v31;
                    if ( (unsigned __int64)v37 < v31 )
                      goto LABEL_53;
                    v32 = v37 - v31;
                    v33 = (int *)(*((_QWORD *)&v37 + 1) + v31);
                    *(_QWORD *)&v45 = v37 - v31;
                    if ( (_QWORD)v37 - v31 == -1LL )
                      goto LABEL_53;
                    *((_QWORD *)&v45 + 1) = *((_QWORD *)&v37 + 1) + v31;
                    v37 = v45;
                    v43 = v40;
                    v10 = RtlpParseFunctionOverrideRelocations(a2, &v43, v51, &v46);
                    if ( v10 < 0 )
                      goto LABEL_3;
                    v34 = *v15;
                    v35 = DWORD2(v48);
                    v43 = v39;
                    v36 = (_DWORD *)((char *)v7 + 16 * DWORD2(v48) + 40);
                    v38 = v30;
                    *v36 = v34;
                    v10 = RtlpParseBinaryDecisionDiagram(&v38, &v43, (unsigned int)v15[1], v52, v36, a6);
                    if ( v10 < 0 )
                      goto LABEL_3;
                    if ( v32 < 0x10 )
                    {
                      v15 = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)&v44 = v32 - 16;
                      *((_QWORD *)&v44 + 1) = v33 + 4;
                      v15 = v33;
                      v37 = v44;
                    }
                    DWORD2(v48) = v35 + 1;
                  }
                  v10 = RtlpSortAndValidateRelocations(v7);
                  if ( v10 >= 0 )
                    *a5 = v7;
                }
                goto LABEL_3;
              }
            }
LABEL_53:
            gsl::details::terminate((gsl::details *)v13, i, a3, a4);
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
