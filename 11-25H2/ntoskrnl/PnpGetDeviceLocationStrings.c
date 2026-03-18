/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x14082C604
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PiQueryRemovableDeviceOverride @ 0x14082E4B8 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(PVOID *a1, _QWORD *a2, _DWORD *a3)
{
  void *v4; // rsi
  PVOID *v5; // rcx
  unsigned int v6; // r15d
  PVOID *v7; // rax
  PVOID *v8; // r13
  void *v9; // r12
  int v10; // edi
  __int64 v12; // r14
  PVOID *v13; // rbx
  __int64 v14; // rax
  char *v15; // rbx
  unsigned int v16; // esi
  unsigned int v17; // r12d
  unsigned int v18; // eax
  char *v19; // r14
  char v20; // r13
  char v21; // r9
  char v22; // r15
  unsigned int v23; // edx
  _WORD *v24; // rsi
  char v25; // dl
  char v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  char *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // [rsp+58h] [rbp-49h]
  PVOID *Pool2; // [rsp+60h] [rbp-41h]
  unsigned int v34; // [rsp+68h] [rbp-39h]
  unsigned int v35; // [rsp+6Ch] [rbp-35h]
  __int64 v36; // [rsp+70h] [rbp-31h]
  PVOID v37; // [rsp+78h] [rbp-29h]
  __int64 v38; // [rsp+88h] [rbp-19h]
  __int128 v39; // [rsp+90h] [rbp-11h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-1h]
  __int64 v41; // [rsp+B0h] [rbp+Fh]
  char v42; // [rsp+108h] [rbp+67h]

  v41 = 0LL;
  v4 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = (PVOID *)IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( a1 != v5 )
  {
    v6 = 0;
    v7 = a1;
    do
    {
      v7 = (PVOID *)v7[2];
      ++v6;
    }
    while ( v7 != v5 );
    v35 = v6;
    v38 = v6;
    Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v36 = ExAllocatePool2(0x100uLL);
    v9 = (void *)v36;
    if ( !v36 )
    {
      v10 = -1073741670;
LABEL_25:
      if ( v35 )
      {
        v12 = v38;
        v13 = v8;
        do
        {
          if ( *v13 )
            ExFreePoolWithTag(*v13, 0);
          ++v13;
          --v12;
        }
        while ( v12 );
      }
      ExFreePoolWithTag(v8, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( v10 < 0 )
      {
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
      }
      return (unsigned int)v10;
    }
    if ( a1 != IopRootDeviceNode )
    {
      v10 = PnpQueryInterface(a1[4], 0LL, &v39);
      if ( v10 < 0 )
      {
        v4 = 0LL;
      }
      else
      {
        if ( v41 )
        {
          v10 = guard_dispatch_icall_no_overrides(*((_QWORD *)&v39 + 1));
          if ( v10 >= 0 )
            v10 = -1073741637;
        }
        else
        {
          v10 = -1073741823;
        }
        if ( *((_QWORD *)&v40 + 1) )
          guard_dispatch_icall_no_overrides(*((_QWORD *)&v39 + 1));
        v4 = 0LL;
      }
LABEL_24:
      v8 = Pool2;
      goto LABEL_25;
    }
    v14 = ExAllocatePool2(0x100uLL);
    v37 = (PVOID)v14;
    v4 = (void *)v14;
    if ( !v14 )
    {
      v10 = -1073741670;
      goto LABEL_24;
    }
    v15 = (char *)v14;
    v16 = 0;
    v32 = 0;
LABEL_35:
    v17 = -1;
    v18 = 1;
    v19 = v15;
    v20 = 0;
    v21 = 0;
    v22 = 0;
LABEL_36:
    v34 = v18;
    v42 = v21;
    v23 = v16 / (v18 / *(_DWORD *)(v36 + 4LL * v17)) % *(_DWORD *)(v36 + 4LL * v17);
    v24 = Pool2[v17];
    if ( v23 )
    {
      v30 = v23;
      do
      {
        v31 = -1LL;
        do
          ++v31;
        while ( v24[v31] );
        v24 += v31 + 1;
        --v30;
      }
      while ( v30 );
    }
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      if ( *v24 == 33 )
      {
        v25 = 1;
      }
      else
      {
        if ( *v24 != 64 )
        {
          if ( v17 == -1 )
          {
            v42 = v25;
            v20 = v25;
            v21 = v25;
            v22 = v25;
            if ( v25 )
              goto LABEL_70;
LABEL_42:
            v42 = 0;
LABEL_43:
            if ( v26 )
            {
              v42 = v25;
              v19 = v15;
              v20 = v25;
              v22 = v25;
            }
            v27 = -1LL;
            do
              ++v27;
            while ( v24[v27] );
            memmove(v19, v24, 2 * v27);
            v28 = -1LL;
            do
              ++v28;
            while ( v24[v28] );
            v29 = &v19[2 * v28];
            if ( v17 )
            {
              v21 = v42;
              v16 = v32;
              *(_WORD *)v29 = 35;
              v19 = v29 + 2;
              v18 = v34 / *(_DWORD *)(v36 + 4LL * v17--);
              goto LABEL_36;
            }
            if ( !v20 || v22 )
            {
              *(_WORD *)v29 = 0;
              v15 = v29 + 2;
            }
          }
          else
          {
            if ( !v25 )
              goto LABEL_42;
LABEL_70:
            if ( v22 )
            {
              v20 = 1;
              v22 = v21 != 0 ? v22 : 0;
              goto LABEL_43;
            }
          }
          v16 = v32 + 1;
          v32 = v16;
          if ( v16 )
          {
            v10 = 0;
            v9 = (void *)v36;
            v4 = v37;
            *(_WORD *)v15 = 0;
            *a2 = v37;
            *a3 = (v15 - (_BYTE *)v37 + 2) >> 1;
            goto LABEL_24;
          }
          goto LABEL_35;
        }
        v26 = 1;
      }
      ++v24;
    }
  }
  return 3221225486LL;
}
