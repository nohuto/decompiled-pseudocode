/*
 * XREFs of ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x14026588C
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1402135F4 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     sqrt_0 @ 0x140340222 (sqrt_0.c)
 */

__int64 __fastcall UpdateIntObjUsage(__int64 a1, __int64 a2, __int16 a3, int a4, __int64 a5)
{
  unsigned int v5; // r13d
  int v6; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  double v26; // xmm1_8
  double v27; // xmm2_8
  unsigned int v28; // eax
  double i; // xmm0_8
  double j; // xmm0_8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 UserSessionState; // rax
  int v63; // r14d
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // xmm1_8
  __int64 v69; // [rsp+20h] [rbp-38h]
  __int64 v70; // [rsp+28h] [rbp-30h]
  __int64 v71; // [rsp+68h] [rbp+10h]

  v5 = 2;
  v6 = *(_DWORD *)(a2 + 20) & 2;
  result = W32GetUserSessionState(a1, a2);
  v71 = result;
  v14 = result + 17176;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( *(_DWORD *)(result + 17320) )
      {
        *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17288) = a5;
        v56 = *(_QWORD *)(W32GetUserSessionState(v55, v54) + 17288);
        if ( v56 > *(_QWORD *)(W32GetUserSessionState(v58, v57) + 17280) )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17280) )
          {
            v59 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17288);
            UserSessionState = W32GetUserSessionState(v61, v60);
            v13 = v6 != 0 ? 0x30 : 0;
            *(_QWORD *)(v13 + v14 + 40) += v59 - *(_QWORD *)(UserSessionState + 17280);
          }
        }
      }
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17280) = a5;
      v63 = a4 - 1;
      if ( v63 )
      {
        if ( v63 == 1 )
        {
          v65 = -*(_DWORD *)(a2 + 24);
          if ( *(int *)(a2 + 24) > 0 )
            v65 = *(_DWORD *)(a2 + 24);
          v64 = v6 != 0 ? 0x30 : 0;
          *(_DWORD *)(v64 + v14 + 20) += v65;
        }
      }
      else
      {
        v67 = -*(_DWORD *)(a2 + 24);
        if ( *(int *)(a2 + 24) > 0 )
          v67 = *(_DWORD *)(a2 + 24);
        v66 = v6 != 0 ? 0x30 : 0;
        *(_DWORD *)(v66 + v14 + 16) += v67;
      }
    }
  }
  else
  {
    if ( !a1 )
      return result;
    if ( (a3 & 1) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17280) = a5;
      v13 = v6 != 0 ? 0x30 : 0;
      ++*(_DWORD *)(v13 + v14);
    }
    if ( (a3 & 2) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17288) = a5;
      v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 17288);
      if ( v17 > *(_QWORD *)(W32GetUserSessionState(v19, v18) + 17280)
        && *(_QWORD *)(W32GetUserSessionState(v21, v20) + 17280) )
      {
        v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 17288);
        v25 = W32GetUserSessionState(v24, v23);
        v21 = v6 != 0 ? 0x30 : 0;
        *(_QWORD *)(v21 + v14 + 40) += v22 - *(_QWORD *)(v25 + 17280);
      }
      *(_QWORD *)(W32GetUserSessionState(v21, v20) + 17280) = a5;
    }
    if ( (a3 & 0x80u) != 0 )
    {
      v12 = (unsigned int)-*(_DWORD *)(a2 + 24);
      if ( *(int *)(a2 + 24) > 0 )
        v12 = *(unsigned int *)(a2 + 24);
      v13 = v6 != 0 ? 0x30 : 0;
      if ( (*(_DWORD *)(a2 + 20) & 4) != 0 )
        *(_DWORD *)(v13 + v14 + 28) += v12;
      else
        *(_DWORD *)(v13 + v14 + 4) += v12;
    }
    if ( (a3 & 0x2000) != 0 && !*(_DWORD *)(W32GetUserSessionState(v13, v12) + 17356) )
    {
      *(_DWORD *)(W32GetUserSessionState(v13, v12) + 17356) = 1;
      v13 = v6 != 0 ? 0x30 : 0;
      ++*(_DWORD *)(v13 + v14 + 24);
    }
    LOBYTE(v13) = (*(_BYTE *)(a2 + 20) & 4) != 0;
    if ( ((unsigned __int8)v13 & ((a3 & 0x1000) != 0)) != 0 )
    {
      v26 = DOUBLE_1_0;
      v69 = *(_QWORD *)(a2 + 12);
      v27 = DOUBLE_1_0;
      v70 = *(_QWORD *)(v71 + 17308);
      v28 = 2;
      for ( i = (double)((int)v69 - (int)v70); ; i = i * i )
      {
        if ( (v28 & 1) != 0 )
          v27 = v27 * i;
        v28 >>= 1;
        if ( !v28 )
          break;
      }
      for ( j = (double)(HIDWORD(v69) - HIDWORD(v70)); ; j = j * j )
      {
        if ( (v5 & 1) != 0 )
          v26 = v26 * j;
        v5 >>= 1;
        if ( !v5 )
          break;
      }
      v31 = v6 != 0 ? 0x30 : 0;
      *(double *)(v31 + v14 + 32) = sqrt_0(v26 + v27) + *(double *)(v31 + v14 + 32);
    }
    if ( (a3 & 0x100) != 0 )
    {
      v32 = v6 != 0 ? 0x30 : 0;
      ++*(_DWORD *)(v32 + v14 + 8);
      *(_DWORD *)(W32GetUserSessionState(v32, v12) + 17356) = 0;
    }
    if ( (a3 & 0x400) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17288) = a5;
      v35 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 17288);
      if ( v35 > *(_QWORD *)(W32GetUserSessionState(v37, v36) + 17280)
        && *(_QWORD *)(W32GetUserSessionState(v39, v38) + 17280) )
      {
        v40 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 17288);
        *(_QWORD *)(v14 + 40) += v40 - *(_QWORD *)(W32GetUserSessionState(v42, v41) + 17280);
      }
      *(_QWORD *)(W32GetUserSessionState(v39, v38) + 17280) = a5;
      v43 = v6 != 0 ? 0x30 : 0;
      ++*(_DWORD *)(v43 + v14 + 12);
    }
    if ( (a3 & 0x800) != 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 17288) = a5;
      v46 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 17288);
      if ( v46 > *(_QWORD *)(W32GetUserSessionState(v48, v47) + 17280) )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v50, v49) + 17280) )
        {
          v51 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 17288);
          *(_QWORD *)(v14 + 88) += v51 - *(_QWORD *)(W32GetUserSessionState(v53, v52) + 17280);
        }
      }
      *(_QWORD *)(W32GetUserSessionState(v50, v49) + 17280) = a5;
    }
  }
  v68 = *(_QWORD *)(a2 + 16);
  result = *(unsigned int *)(a2 + 24);
  *(_OWORD *)(v71 + 17296) = *(_OWORD *)a2;
  *(_QWORD *)(v71 + 17312) = v68;
  *(_DWORD *)(v71 + 17320) = result;
  return result;
}
