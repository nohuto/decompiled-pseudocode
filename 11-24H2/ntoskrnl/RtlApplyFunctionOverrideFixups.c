/*
 * XREFs of RtlApplyFunctionOverrideFixups @ 0x14093BF84
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 * Callees:
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x14093C208 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

__int64 __fastcall RtlApplyFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        char a5)
{
  char v5; // bp
  const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *v8; // r14
  __int64 result; // rax
  _DWORD *v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int16 v13; // bx
  unsigned __int16 v14; // r13
  unsigned __int16 v15; // di
  unsigned __int16 v16; // r13
  unsigned __int16 v17; // r11
  unsigned __int16 v18; // r10
  unsigned int v19; // edx
  unsigned int v20; // r9d
  int v21; // r8d
  __int64 v22; // rbx
  int v23; // ecx
  unsigned int v24; // ebp
  unsigned int v25; // r15d
  __int64 v26; // r9
  bool v27; // bl
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned __int16 v30; // cx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  unsigned int v34; // ebp
  __int64 v35; // rax
  unsigned int *v36; // [rsp+28h] [rbp-40h]
  unsigned int v38; // [rsp+78h] [rbp+10h]

  v5 = a4;
  v8 = a1;
  result = (__int64)RtlpGetFunctionOverrideIndex(a1, a2);
  v36 = (unsigned int *)result;
  v10 = (_DWORD *)result;
  v11 = 0;
  if ( *(_DWORD *)result )
  {
    v12 = a2 << 12;
    LOBYTE(v13) = 4;
    v38 = v12;
    do
    {
      v14 = v10[2 * v11 + 1];
      v15 = v14 & 0xFFF;
      v16 = v14 >> 12;
      v17 = (HIWORD(v10[2 * v11 + 1]) >> 3) & 7;
      v18 = HIWORD(v10[2 * v11 + 1]) & 7;
      v19 = *((_DWORD *)v8 + 4 * (unsigned int)v10[2 * v11 + 2] + 10);
      if ( a5 )
      {
        v22 = *((_QWORD *)v8 + 2);
        v20 = *((_DWORD *)v8 + 4 * (unsigned int)v10[2 * v11 + 2] + 12);
        v21 = (*((_DWORD *)v8 + 4 * (unsigned int)v10[2 * v11 + 2] + 13) >> 1) & 1;
      }
      else
      {
        v20 = *((_DWORD *)v8 + 4 * (unsigned int)v10[2 * v11 + 2] + 11);
        v21 = *((_DWORD *)v8 + 4 * (unsigned int)v10[2 * v11 + 2] + 13) & 1;
        v22 = *((_QWORD *)v8 + 1) & -(__int64)(((unsigned __int8)v13 & (unsigned __int8)*((_DWORD *)v8
                                                                                        + 4
                                                                                        * (unsigned int)v10[2 * v11 + 2]
                                                                                        + 13)) != 0);
      }
      result = v18;
      if ( !v5 )
        v19 = v20;
      v23 = 0;
      if ( !v5 )
        v23 = v21;
      v24 = v12 + v15;
      if ( !v18 )
        result = 4LL;
      v25 = result + v24;
      LODWORD(v26) = v19;
      if ( v23 )
      {
        if ( v16 == 1 )
        {
          result = v25;
          v26 = v22 + v19;
          v29 = v26 - v25;
          if ( v26 < v25 )
          {
            if ( v29 < (__int64)0xFFFFFFFF80000000uLL )
              LODWORD(v26) = v19;
          }
          else
          {
            if ( v29 <= 0x7FFFFFFF )
              v19 = v26;
            LODWORD(v26) = v19;
          }
        }
        else if ( (unsigned int)v16 - 2 <= 1 )
        {
          result = v24;
          v31 = v22 + v19;
          v32 = v31 - v24;
          if ( v31 >= v24 )
          {
            if ( v32 <= 134217724 )
              LODWORD(v26) = v31;
          }
          else
          {
            LODWORD(v26) = v31;
            if ( v32 < -134217728 )
              LODWORD(v26) = v19;
          }
        }
      }
      v27 = v18 || v17;
      if ( v16 != 1 )
      {
        if ( v16 == 2 )
        {
          LOBYTE(v13) = 4;
          result = *(_DWORD *)(v15 + a3) ^ (*(_DWORD *)(v15 + a3) ^ ((int)(v26 - v24) / 4)) & 0x3FFFFFFu;
          *(_DWORD *)(v15 + a3) = result;
        }
        else
        {
          if ( v16 == 3 )
          {
            if ( (!v27 || v17)
              && (v33 = v15,
                  v34 = v24 & 0xFFFFF000,
                  v15 += 4,
                  result = ((int)(v26 - v34) >> 12) & 0x1FFFFC,
                  *(_DWORD *)(v33 + a3) = *(_DWORD *)(v33 + a3) & 0x9F00001F | (8
                                                                              * (result | ((((int)(v26 - v34) >> 12) & 3) << 26))),
                  !v27)
              || v18 )
            {
              result = *(unsigned int *)(v15 + a3);
              *(_DWORD *)(v15 + a3) = result ^ (result ^ ((_DWORD)v26 << 10)) & 0x3FFC00;
            }
          }
          LOBYTE(v13) = 4;
        }
        goto LABEL_20;
      }
      v28 = v26 - v25;
      v13 = v16 - 1 + 4;
      if ( v18 )
      {
        v28 >>= 8 * (v13 - v18);
      }
      else
      {
        if ( !v17 )
          goto LABEL_19;
        v18 = v17;
      }
      if ( v18 != v13 )
      {
        v30 = 0;
        do
        {
          v35 = v30++;
          result = v15 + v35;
          *(_BYTE *)(result + a3) = v28;
          v28 >>= 8;
        }
        while ( v30 < v18 );
        v8 = a1;
        goto LABEL_20;
      }
LABEL_19:
      result = v15;
      *(_DWORD *)(v15 + a3) = v28;
LABEL_20:
      v10 = v36;
      ++v11;
      v12 = v38;
      v5 = a4;
    }
    while ( v11 < *v36 );
  }
  return result;
}
