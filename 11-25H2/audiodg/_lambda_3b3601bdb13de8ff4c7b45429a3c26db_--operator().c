/*
 * XREFs of _lambda_3b3601bdb13de8ff4c7b45429a3c26db_::operator() @ 0x140054594
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006DF0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005867C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_3b3601bdb13de8ff4c7b45429a3c26db_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v3; // r8
  __int64 *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD, int); // rax
  int v10; // r15d
  __int64 *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 *v15; // rcx
  char *v16; // [rsp+28h] [rbp-70h]
  int v17; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+38h] [rbp-60h]
  int v19; // [rsp+40h] [rbp-58h]
  int v20; // [rsp+48h] [rbp-50h]
  int v21; // [rsp+50h] [rbp-48h]
  int v22; // [rsp+58h] [rbp-40h]
  int v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+70h] [rbp-28h]
  int v26; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *a1;
  v3 = (__int64 *)a1[2];
  v4 = (__int64 *)a1[1];
  v5 = *(_QWORD *)(*a1 + 152LL);
  v6 = *(_DWORD *)(v1 + 12) == 1;
  v7 = *v3;
  v8 = *v4;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)v5 + 56LL);
  if ( v6 )
  {
    v10 = v9(v5, v8, v7, 0LL, 1);
    if ( v10 < 0 )
    {
      v11 = (__int64 *)a1[3];
      v12 = *v11;
      v26 = *(unsigned __int8 *)(*v11 + 23);
      v13 = 3046LL;
      v25 = *(unsigned __int8 *)(*v11 + 22);
      v24 = *(unsigned __int8 *)(*v11 + 21);
      v23 = *(unsigned __int8 *)(*v11 + 20);
      v22 = *(unsigned __int8 *)(*v11 + 19);
      v21 = *(unsigned __int8 *)(*v11 + 18);
      v20 = *(unsigned __int8 *)(*v11 + 17);
      v19 = *(unsigned __int8 *)(*v11 + 16);
      v18 = *(unsigned __int16 *)(*v11 + 14);
      v17 = *(unsigned __int16 *)(*v11 + 12);
LABEL_4:
      LODWORD(v16) = *(_DWORD *)(v12 + 8);
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v13,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v10,
        (int)"Activate failed for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      return (unsigned int)v10;
    }
  }
  else
  {
    v10 = v9(v5, v8, v7, 0LL, 0);
    if ( v10 < 0 )
    {
      v15 = (__int64 *)a1[3];
      v12 = *v15;
      v26 = *(unsigned __int8 *)(*v15 + 23);
      v13 = 3051LL;
      v25 = *(unsigned __int8 *)(*v15 + 22);
      v24 = *(unsigned __int8 *)(*v15 + 21);
      v23 = *(unsigned __int8 *)(*v15 + 20);
      v22 = *(unsigned __int8 *)(*v15 + 19);
      v21 = *(unsigned __int8 *)(*v15 + 18);
      v20 = *(unsigned __int8 *)(*v15 + 17);
      v19 = *(unsigned __int8 *)(*v15 + 16);
      v18 = *(unsigned __int16 *)(*v15 + 14);
      v17 = *(unsigned __int16 *)(*v15 + 12);
      goto LABEL_4;
    }
  }
  return 0LL;
}
