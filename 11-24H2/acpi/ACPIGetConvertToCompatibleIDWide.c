/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x14003EE60
 * Callers:
 *     ACPIGetConvertToCompatibleID @ 0x14003EDF8 (ACPIGetConvertToCompatibleID.c)
 *     ACPIGetWorkerForString @ 0x14003F3E0 (ACPIGetWorkerForString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x14003F258 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetConvertToPnpIDWide @ 0x14003F6EC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003F928 (ACPIAnsiStringToWideHelper.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // r12d
  unsigned int v10; // ebx
  __int64 v11; // rax
  const char *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  char *Pool2; // rax
  char *v16; // rsi
  __int64 v18; // rdi
  void *v19; // r14
  __int64 v20; // rax
  unsigned int *v21; // r13
  __int64 i; // rsi
  unsigned int *v23; // r8
  int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // r12d
  __int64 v28; // rax
  char *v29; // rbp
  unsigned int *v30; // rsi
  const void **v31; // r15
  unsigned __int64 v32; // rax
  bool v33; // zf
  PVOID *v34; // rsi
  unsigned int *v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+30h] [rbp-38h]
  unsigned int *v37; // [rsp+38h] [rbp-30h]
  __int64 v38; // [rsp+38h] [rbp-30h]
  int v39; // [rsp+70h] [rbp+8h]

  v39 = a1;
  v35 = 0LL;
  v6 = 0;
  v10 = a2;
  if ( (a4 & 0x4000000) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & 0x1000000000LL) != 0 )
    {
      if ( v11 >= 0 )
        v12 = "ACPI\\Processor";
      else
        v12 = *(const char **)(a1 + 184);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = v13 + 2;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        2 * v14,
                        1399874369LL);
      v16 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, v14, "%s", v12);
        ACPIAnsiStringToWideHelper(v16, 2 * v14);
        *a5 = v16;
        if ( a6 )
          *a6 = 2 * v14;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 || *(_WORD *)(a3 + 2) == 2 )
  {
    v18 = 1LL;
  }
  else
  {
    if ( *(_WORD *)(a3 + 2) != 4 )
      return 3222536207LL;
    v35 = *(unsigned int **)(a3 + 32);
    v18 = *v35;
    if ( *(unsigned int *)(a3 + 24) < (unsigned __int64)(40 * v18 + 8) )
      return 3222536207LL;
  }
  v19 = (void *)ExAllocatePool2(64LL, 8 * v18, 1299211073LL);
  if ( !v19 )
    return 3221225626LL;
  v20 = ExAllocatePool2(64LL, 4 * v18, 1299211073LL);
  v21 = (unsigned int *)v20;
  if ( !v20 )
  {
    ExFreePoolWithTag(v19, 0);
    return 3221225626LL;
  }
  switch ( *(_WORD *)(a3 + 2) )
  {
    case 1:
      v26 = ACPIGetConvertToPnpIDWide(v39, a2, a3, a4, (__int64)v19, v20);
      break;
    case 2:
      v26 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v19, v20);
      break;
    case 4:
      for ( i = 0LL; (unsigned int)i < (unsigned int)v18; i = (unsigned int)(i + 1) )
      {
        v23 = &v35[8 * i + 2 + 2 * (unsigned int)i];
        if ( *((_WORD *)v23 + 1) == 1 )
        {
          v37 = &v21[i];
          v24 = ACPIGetConvertToPnpIDWide(v39, a2, (_DWORD)v23, a4, (__int64)v19 + 8 * i, (__int64)v37);
        }
        else
        {
          if ( *((_WORD *)v23 + 1) != 2 )
            ACPIInternalError(0x60396uLL);
          v37 = &v21[i];
          v24 = ACPIGetConvertToStringWideWithPrepend(
                  (int)v21 + 4 * (int)i,
                  a2,
                  (_DWORD)v23,
                  a4,
                  (__int64)v19 + 8 * i,
                  (__int64)v37);
        }
        v10 = v24;
        if ( v24 < 0 )
        {
          v18 = (unsigned int)i;
          goto LABEL_53;
        }
        v25 = *v37;
        if ( *v37 == 1 )
        {
          v25 = 0;
          *v37 = 0;
        }
        v6 += v25;
      }
LABEL_42:
      if ( v6 > 2 )
      {
        v27 = v6 + 2;
        v28 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v27, 1399874369LL);
        v36 = v28;
        if ( v28 )
        {
          v29 = (char *)v28;
          if ( (_DWORD)v18 )
          {
            v30 = v21;
            v38 = (unsigned int)v18;
            v31 = (const void **)v19;
            do
            {
              if ( *v31 )
                memmove(v29, *v31, *v30);
              ++v31;
              v32 = (unsigned __int64)*v30++ >> 1;
              v33 = v38-- == 1;
              v29 += 2 * v32;
            }
            while ( !v33 );
          }
          *a5 = v36;
          if ( a6 )
            *a6 = v27;
        }
        else
        {
          v10 = -1073741670;
        }
        goto LABEL_53;
      }
      goto LABEL_43;
    default:
LABEL_43:
      v10 = -1072431089;
      goto LABEL_53;
  }
  v10 = v26;
  v6 = *v21;
  if ( v26 >= 0 )
    goto LABEL_42;
LABEL_53:
  if ( (_DWORD)v18 )
  {
    v34 = (PVOID *)v19;
    do
    {
      if ( *v34 )
        ExFreePoolWithTag(*v34, 0);
      ++v34;
      --v18;
    }
    while ( v18 );
  }
  ExFreePoolWithTag(v21, 0);
  ExFreePoolWithTag(v19, 0);
  return v10;
}
