/*
 * XREFs of _lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator() @ 0x1800453D8
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180044360 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180045678 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_d1ac2b4ea0a9923b8344f95fbdb6f4fa_::operator()(LPVOID **a1, _QWORD *a2)
{
  char v3; // si
  LPVOID *v4; // r14
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  unsigned __int64 i; // rdi
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // r15d
  int v9; // eax
  char v10; // di
  LPVOID *v11; // rdi
  LPVOID v12; // r13
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned __int64 v20; // r15
  char *v21; // rax
  char *v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-8h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+50h] BYREF
  __int64 v27; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v26 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 80LL))(
         *a2,
         &v26) < 0 )
  {
    v5 = v25;
LABEL_18:
    v10 = 0;
  }
  else
  {
    v4 = *a1;
    v5 = v26;
    v25 = v26;
    if ( v26 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[1])(v26);
    v3 = 1;
    for ( i = 0LL; i < (unsigned __int64)v4[1]; ++i )
    {
      v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)*v4 + i);
      if ( v7 && v5 )
      {
        if ( v7 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v5 )
          goto LABEL_18;
        v24 = 0LL;
        v27 = 0LL;
        if ( (**v7)(v7, &GUID_00000000_0000_0000_c000_000000000046, &v24) < 0 )
          goto LABEL_14;
        v8 = (**v5)(v5, &GUID_00000000_0000_0000_c000_000000000046, &v27);
        if ( v8 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        if ( v8 >= 0 && v24 == v27 )
          v9 = 1;
        else
LABEL_14:
          v9 = 0;
        if ( v9 )
          goto LABEL_18;
      }
    }
    v10 = 1;
  }
  if ( (v3 & 1) != 0 && v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
  if ( !v10 )
    goto LABEL_48;
  v11 = *a1;
  v12 = (*a1)[1];
  v13 = (unsigned __int64)(*a1)[3];
  v14 = (unsigned __int64)v12 + 1;
  if ( v12 == (LPVOID)v13 )
  {
    v15 = -2147024774;
    if ( v14 <= 0xFFFFFFFE )
    {
      v15 = 0;
      if ( v14 > v13 )
      {
        v16 = 2 * v13;
        if ( !is_mul_ok(v13, 2uLL) )
          goto LABEL_27;
        if ( v13 > 0x1000 )
          v16 = v13 + 4096;
        if ( v14 <= v16 )
        {
          if ( v16 > 0xFFFFFFFE )
            v16 = 4294967294LL;
        }
        else
        {
          v16 = (unsigned __int64)v12 + 1;
        }
        v20 = 8 * v16;
        if ( is_mul_ok(v16, 8uLL) )
        {
          v21 = (char *)CoTaskMemRealloc(*v11, 8 * v16);
          v22 = v21;
          if ( v21 )
          {
            v23 = CTCoAllocPolicy::_CoTaskMemSize(v21);
            if ( v23 > v20 )
              memset_0(&v22[v20], 0, v23 - v20);
            v15 = 0;
            v11[3] = (LPVOID)v16;
            *v11 = v22;
          }
          else
          {
            v15 = -2147024882;
          }
        }
        else
        {
LABEL_27:
          v15 = -2147024362;
        }
      }
    }
    if ( v15 < 0 )
      goto LABEL_48;
  }
  v11[1] = (LPVOID)v14;
  v17 = (char *)*v11 + 8 * (_QWORD)v12;
  if ( v17 )
  {
    *v17 = v26;
    v18 = v26;
    if ( v26 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v26)[1])(v26);
      v18 = v26;
    }
  }
  else
  {
LABEL_48:
    v18 = v26;
  }
  if ( v18 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
  }
  return 1;
}
