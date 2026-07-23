/*
 * XREFs of HalpMcaReadError @ 0x14053D70C
 * Callers:
 *     HalpCmcPollProcessor @ 0x1404784BC (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x14053DD18 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpMcaStuckErrorCheck @ 0x1404782E4 (HalpMcaStuckErrorCheck.c)
 *     HalpWheaReadMsrStatus @ 0x14047872C (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     HalpMcaPopulateErrorData @ 0x14053D48C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadErrorUncorrected @ 0x1405411B0 (HalpMcaReadErrorUncorrected.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpMcaReadError(int a1, void *a2, int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  char v8; // r13
  unsigned __int64 v9; // rax
  unsigned int v10; // r15d
  int v11; // r14d
  __int64 MsrStatus; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r11
  unsigned __int8 CpuVendor; // al
  unsigned __int64 v17; // rdx
  char v18; // r8
  char v19; // r9
  char v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int8 v23; // al
  char v25; // [rsp+38h] [rbp-31h]
  __int16 v26; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v27; // [rsp+40h] [rbp-29h]
  int v28; // [rsp+44h] [rbp-25h]
  unsigned int v29; // [rsp+48h] [rbp-21h]
  __int64 v30; // [rsp+50h] [rbp-19h]
  __int64 v31; // [rsp+58h] [rbp-11h]
  __int128 v32; // [rsp+60h] [rbp-9h] BYREF
  __int64 v33; // [rsp+70h] [rbp+7h]
  __int64 v34; // [rsp+78h] [rbp+Fh]
  int *v35; // [rsp+80h] [rbp+17h]

  v5 = 0;
  v31 = a4;
  v35 = a3;
  v33 = 0LL;
  v6 = -1;
  v30 = (__int64)a2;
  v28 = a1;
  v7 = 0LL;
  v26 = 0;
  v8 = 0;
  v27 = 1;
  v25 = 0;
  v32 = 0LL;
  if ( !HalpMcaNumberOfBanks )
  {
    v9 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v9;
  }
  v29 = (unsigned __int8)HalpMcaNumberOfBanks;
  memset_0(a2, 0, 0x4A8uLL);
  v10 = 0;
  v11 = 2;
  while ( 1 )
  {
    if ( v10 >= v29 )
      goto LABEL_35;
    v34 = 0LL;
    MsrStatus = HalpWheaReadMsrStatus(a5, v10);
    v13 = MsrStatus;
    if ( MsrStatus >= 0 )
    {
LABEL_40:
      LODWORD(v15) = 1;
      goto LABEL_41;
    }
    *(_QWORD *)&v32 = MsrStatus;
    v14 = v28;
    BYTE8(v32) = HalpMcaRecoverySupported;
    v33 = a5;
    HIDWORD(v32) = v10;
    v26 = 0;
    if ( v28 != 16 )
      break;
    HalpMcaReadErrorUncorrected(&v32, &v26);
    if ( !(_BYTE)v26 )
      goto LABEL_40;
    HalpMcaPopulateErrorData(a5, v10, v32, v31, v30, v27);
    LODWORD(v15) = 1;
    ++v27;
    if ( (!HIBYTE(v26) || !v8) && !v25 )
    {
      v6 = v10;
      v7 = v32;
      if ( HIBYTE(v26) )
        v8 = 1;
      else
        v25 = 1;
    }
LABEL_41:
    v10 += v15;
  }
  LODWORD(v15) = 1;
  if ( v28 == 1 )
  {
    CpuVendor = HalpGetCpuVendor();
    v21 = v17 >> 61;
    if ( CpuVendor == (_BYTE)v15 )
    {
      if ( ((unsigned __int8)v21 & (unsigned __int8)v15) == 0 )
      {
        if ( v20 && (v17 & 0x100000000000LL) != 0 )
          v19 = v15;
        goto LABEL_30;
      }
      if ( v20 && (v17 & 0x200000000000000LL) == 0 )
        goto LABEL_29;
    }
    else
    {
      v22 = v15 & v21;
      if ( CpuVendor == 2 )
      {
        if ( !v22 )
        {
LABEL_30:
          v18 = v15;
          goto LABEL_33;
        }
        if ( v20 && (v17 & 0x300000000000000LL) == 0 )
        {
LABEL_29:
          v19 = v15;
          goto LABEL_30;
        }
      }
      else if ( !v22 )
      {
        v18 = v15;
      }
    }
LABEL_33:
    if ( v18 )
    {
      v6 = v10;
      v8 = v19;
      v7 = v17;
LABEL_35:
      v14 = v28;
      goto LABEL_36;
    }
    goto LABEL_41;
  }
  if ( v28 != 17 )
    goto LABEL_41;
  v6 = v10;
  v7 = v13;
LABEL_36:
  if ( v6 == -1 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    if ( v14 != 16 )
      HalpMcaStuckErrorCheck(v6, v7, a5);
    HalpMcaPopulateErrorData(a5, v6, v7, v31, v30, 0);
    v23 = HalpGetCpuVendor();
    if ( (v7 & 0x2000000000000000LL) != 0 )
    {
      v11 = v8 == 0;
    }
    else if ( v23 == 1 && HalpMcaRecoverySupported && v8 )
    {
      v11 = 0;
    }
    *v35 = v11;
  }
  return v5;
}
