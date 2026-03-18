/*
 * XREFs of ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140393D00
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1403939EC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NP_CONTEXT::NpStart(struct NP_CONTEXT *a1, struct NP_CONTEXT::_NP_PARAMETERS *a2)
{
  PVOID *p_P; // r8
  unsigned __int64 i; // r9
  PVOID *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  unsigned int v9; // ebx
  PVOID *v10; // rcx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // r9
  PVOID *v14; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v16; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v16 = &P;
  for ( i = 0LL; i < *((unsigned int *)a2 + 1); i = *v12 )
  {
    v12 = (unsigned __int64 *)SmAllocEx(4096LL, 1884188019LL, -1);
    p_P = (PVOID *)v12;
    if ( !v12 )
    {
      v9 = -1073741670;
      goto LABEL_14;
    }
    *v12 = (unsigned __int64)*v16 + 1;
    *v16 = v12;
    v16 = (PVOID *)v12;
  }
  v6 = (PVOID *)((char *)a1 + 64);
  if ( i )
  {
    v13 = **((_QWORD **)a1 + 9) + i;
    *p_P = *v6;
    *v6 = P;
    v14 = (PVOID *)*((_QWORD *)a1 + 9);
    if ( v14 == v6 )
    {
      v14 = v16;
      *((_QWORD *)a1 + 9) = v16;
    }
    *v14 = (PVOID)v13;
    p_P = &P;
    P = 0LL;
    v16 = &P;
  }
  v7 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v8 = *((_QWORD *)a2 + 4);
  *((_OWORD *)a1 + 1) = v7;
  *((_QWORD *)a1 + 4) = v8;
  v9 = 0;
  while ( p_P != &P )
  {
    v10 = (PVOID *)P;
    P = *(PVOID *)P;
    if ( v10 == p_P )
    {
      P = 0LL;
      v16 = &P;
    }
    else
    {
      *p_P = (char *)*p_P - 1;
    }
    if ( !v10 )
      break;
    ExFreePoolWithTag(v10, 0);
LABEL_14:
    p_P = v16;
  }
  return v9;
}
