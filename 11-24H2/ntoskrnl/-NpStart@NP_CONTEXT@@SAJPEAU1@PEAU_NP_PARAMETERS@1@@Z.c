/*
 * XREFs of ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140376108
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140375DFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 *Pool2; // rax
  unsigned __int64 v13; // r9
  PVOID *v14; // rax
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *v16; // [rsp+28h] [rbp-8h]

  P = 0LL;
  p_P = &P;
  v16 = &P;
  for ( i = 0LL; i < *((unsigned int *)a2 + 1); i = *Pool2 )
  {
    Pool2 = (unsigned __int64 *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x704E6D73u);
    p_P = (PVOID *)Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_15;
    }
    *Pool2 = (unsigned __int64)*v16 + 1;
    *v16 = Pool2;
    v16 = (PVOID *)Pool2;
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
LABEL_15:
    p_P = v16;
  }
  return v9;
}
