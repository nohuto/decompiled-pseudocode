/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800698A0
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180099F54 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180069210 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x180069330 (LdrQueryNextListEntry32.c)
 *     LdrQueryNextListEntry @ 0x18006A4C0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006A600 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     LdrQueryInLoadOrderModuleList @ 0x18006ACB0 (LdrQueryInLoadOrderModuleList.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006ADD0 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006BDD0 (LdrQueryModuleInfoLocalLoaderUnlock.c)
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x18006BF70 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x1800FCF20 (RtlEndStrongEnumerationHashTable.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        void **a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _WORD *v5; // r14
  void **v6; // rdi
  unsigned int v7; // r13d
  unsigned __int64 v8; // r15
  int v9; // esi
  int v10; // r12d
  NTSTATUS i; // eax
  __int64 v12; // rax
  void *v13; // rdx
  void *v14; // rcx
  __int64 (__fastcall *v15)(int, int, int, int, PSIZE_T); // rax
  __int64 v16; // rbx
  void *v17; // r8
  void *v18; // rdx
  void *v19; // rcx
  __int64 (__fastcall *v20)(int, int, int, int, PSIZE_T); // rax
  int v21; // ecx
  char *v22; // rbx
  void *v23; // r8
  void *v24; // rdx
  void *v25; // rcx
  __int64 (__fastcall *v26)(int, int, int, int, PSIZE_T); // rax
  int v27; // ecx
  void *v28; // rcx
  __int64 (__fastcall *v29)(int, int, int, int, PSIZE_T); // rax
  int v30; // ecx
  void *v31; // r8
  void *v32; // rdx
  void *v33; // rcx
  int v34; // ecx
  void *v35; // rdx
  void *v36; // rcx
  unsigned int v38; // [rsp+30h] [rbp-C8h]
  unsigned int Buffer; // [rsp+38h] [rbp-C0h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+40h] [rbp-B8h] BYREF
  ULONG_PTR v41; // [rsp+48h] [rbp-B0h] BYREF
  ULONG_PTR v42; // [rsp+50h] [rbp-A8h] BYREF
  ULONG_PTR v43; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR v44; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR v45; // [rsp+68h] [rbp-90h] BYREF
  int v46; // [rsp+70h] [rbp-88h]
  __int64 v47; // [rsp+78h] [rbp-80h] BYREF
  int v48; // [rsp+80h] [rbp-78h]
  __int64 v49; // [rsp+88h] [rbp-70h] BYREF
  __int64 v50; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+A0h] [rbp-58h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  _WORD *v54; // [rsp+B0h] [rbp-48h]
  __int16 v55; // [rsp+100h] [rbp+8h] BYREF
  __int64 v56; // [rsp+108h] [rbp+10h]
  unsigned int v57; // [rsp+118h] [rbp+20h]

  v57 = a4;
  v56 = a2;
  v5 = a3;
  v6 = a1;
  Buffer = 0;
  v7 = 2;
  v46 = 2;
  v49 = 0LL;
  v50 = 0LL;
  v55 = 0;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v38 = 0;
  }
  else
  {
    v38 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v6 = (void **)&LdrpLocalProcess;
  v8 = 0LL;
  v51 = 0LL;
  while ( v8 < (unsigned __int64)(a2 & 1) + 1 )
  {
    v47 = 0LL;
    v9 = LdrpQueryProcessModuleInformationLoopDetectorCount;
    v10 = 1;
    if ( a5 )
      *a5 = v7;
    v53 = a2 & 2;
    if ( (a2 & 2) != 0 )
      funcs_180069963[5 * v8]();
    i = ((__int64 (__fastcall *)(void **, __int64 *, __int64 *))funcs_180069992[5 * v8])(v6, &v49, &v50);
    if ( i >= 0 )
    {
      if ( !v49 )
        goto LABEL_104;
      for ( i = ((__int64 (__fastcall *)(void **, __int64, __int64 *))*(&funcs_1800699C4 + 5 * v8))(v6, v49, &v47);
            i >= 0;
            i = ((__int64 (__fastcall *)(void **, __int64, __int64 *))*(&funcs_1800699C4 + 5 * v8))(v6, v47, &v47) )
      {
        if ( v47 == v49 )
          goto LABEL_104;
        if ( !v9 )
        {
          i = -1073741271;
          break;
        }
        v52 = --v9;
        v7 += 320 * v10;
        v46 = v7;
        v10 = 1;
        v48 = 1;
        if ( v57 < v7 )
        {
          v38 = -1073741820;
        }
        else
        {
          *v5 = 320;
          i = ((__int64 (__fastcall *)(void **, _WORD *, __int64, __int64, __int64))*(&funcs_180069A5C + 5 * v8))(
                v6,
                v5 + 4,
                v47,
                v50,
                v56);
          if ( i < 0 )
            break;
          v12 = *((_QWORD *)v5 + 3);
          if ( v12 )
          {
            v13 = (void *)(v12 + 60);
            NumberOfBytesRead = 0LL;
            v14 = *v6;
            v15 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))v6[1];
            if ( v15 == RtlpQueryReadVirtualMemory )
            {
              i = ZwReadVirtualMemory(v14, v13, &Buffer, 4uLL, &NumberOfBytesRead);
              if ( i < 0 )
              {
                NumberOfBytesRead = 0LL;
              }
              else
              {
                i = -2147483635;
                if ( NumberOfBytesRead == 4 )
                  i = 0;
              }
            }
            else if ( (char *)v15 == (char *)LdrpProtectedCopyMemory )
            {
              i = LdrpProtectedCopyMemory(v14, v13, &Buffer, 4LL, &NumberOfBytesRead);
            }
            else
            {
              i = v15((int)v14, (int)v13, (int)&Buffer, 4, &NumberOfBytesRead);
            }
            if ( i < 0 )
              break;
            if ( NumberOfBytesRead != 4 )
            {
              v38 = -2147483635;
              goto LABEL_104;
            }
            v16 = *((_QWORD *)v5 + 3) + Buffer;
            v41 = 0LL;
            v17 = v5 + 154;
            v18 = (void *)(v16 + 8);
            v19 = *v6;
            v20 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))v6[1];
            if ( v20 == RtlpQueryReadVirtualMemory )
            {
              i = ZwReadVirtualMemory(v19, v18, v17, 4uLL, &v41);
              if ( i < 0 )
              {
                v41 = 0LL;
              }
              else
              {
                i = -2147483635;
                if ( v41 == 4 )
                  i = 0;
              }
            }
            else if ( (char *)v20 == (char *)LdrpProtectedCopyMemory )
            {
              i = LdrpProtectedCopyMemory(v19, v18, v17, 4LL, &v41);
            }
            else
            {
              i = v20((int)v19, (int)v18, (int)v17, 4, &v41);
            }
            if ( i < 0 )
            {
LABEL_32:
              v21 = 0;
            }
            else
            {
              if ( v41 != 4 )
              {
                i = -2147483635;
                goto LABEL_32;
              }
              i = 0;
              v21 = 1;
            }
            if ( !v21 )
              break;
            v22 = (char *)(v16 + 24);
            v42 = 0LL;
            v23 = v5 + 152;
            v24 = v22 + 64;
            v25 = *v6;
            v26 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))v6[1];
            if ( v26 == RtlpQueryReadVirtualMemory )
            {
              i = ZwReadVirtualMemory(v25, v24, v23, 4uLL, &v42);
              if ( i < 0 )
              {
                v42 = 0LL;
              }
              else
              {
                i = -2147483635;
                if ( v42 == 4 )
                  i = 0;
              }
            }
            else if ( (char *)v26 == (char *)LdrpProtectedCopyMemory )
            {
              i = LdrpProtectedCopyMemory(v25, v24, v23, 4LL, &v42);
            }
            else
            {
              i = v26((int)v25, (int)v24, (int)v23, 4, &v42);
            }
            if ( i < 0 )
            {
LABEL_41:
              v27 = 0;
            }
            else
            {
              if ( v42 != 4 )
              {
                i = -2147483635;
                goto LABEL_41;
              }
              i = 0;
              v27 = 1;
            }
            if ( !v27 )
              break;
            v43 = 0LL;
            v28 = *v6;
            v29 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))v6[1];
            if ( v29 == RtlpQueryReadVirtualMemory )
            {
              i = ZwReadVirtualMemory(v28, v22, &v55, 2uLL, &v43);
              if ( i < 0 )
              {
                v43 = 0LL;
              }
              else
              {
                i = -2147483635;
                if ( v43 == 2 )
                  i = 0;
              }
            }
            else if ( (char *)v29 == (char *)LdrpProtectedCopyMemory )
            {
              i = LdrpProtectedCopyMemory(v28, v22, &v55, 2LL, &v43);
            }
            else
            {
              i = v29((int)v28, (int)v22, (int)&v55, 2, &v43);
            }
            if ( i < 0 )
            {
LABEL_50:
              v30 = 0;
            }
            else
            {
              if ( v43 != 2 )
              {
                i = -2147483635;
                goto LABEL_50;
              }
              i = 0;
              v30 = 1;
            }
            if ( !v30 )
              break;
            v31 = v5 + 156;
            if ( v55 == 267 )
            {
              v44 = 0LL;
              v32 = v22 + 28;
              v33 = *v6;
              if ( v6[1] == RtlpQueryReadVirtualMemory )
              {
                i = ZwReadVirtualMemory(v33, v32, v31, 4uLL, &v44);
                if ( i < 0 )
                {
                  v44 = 0LL;
                }
                else
                {
                  i = -2147483635;
                  if ( v44 == 4 )
                    i = 0;
                }
              }
              else if ( v6[1] == LdrpProtectedCopyMemory )
              {
                i = LdrpProtectedCopyMemory(v33, v32, v31, 4LL, &v44);
              }
              else
              {
                i = ((__int64 (__fastcall *)(void *, void *, void *, __int64, ULONG_PTR *))v6[1])(
                      v33,
                      v32,
                      v31,
                      4LL,
                      &v44);
              }
              if ( i >= 0 )
              {
                if ( v44 != 4 )
                  goto LABEL_59;
LABEL_74:
                i = 0;
                v34 = 1;
LABEL_61:
                if ( !v34 )
                  break;
                v5 += 160;
                v54 = v5;
                *v5 = 0;
                continue;
              }
            }
            else
            {
              v45 = 0LL;
              v35 = v22 + 24;
              v36 = *v6;
              if ( v6[1] == RtlpQueryReadVirtualMemory )
              {
                i = ZwReadVirtualMemory(v36, v35, v31, 8uLL, &v45);
                if ( i < 0 )
                {
                  v45 = 0LL;
                }
                else
                {
                  i = -2147483635;
                  if ( v45 == 8 )
                    i = 0;
                }
              }
              else if ( v6[1] == LdrpProtectedCopyMemory )
              {
                i = LdrpProtectedCopyMemory(v36, v35, v31, 8LL, &v45);
              }
              else
              {
                i = ((__int64 (__fastcall *)(void *, void *, void *, __int64, ULONG_PTR *))v6[1])(
                      v36,
                      v35,
                      v31,
                      8LL,
                      &v45);
              }
              if ( i >= 0 )
              {
                if ( v45 == 8 )
                  goto LABEL_74;
LABEL_59:
                i = -2147483635;
              }
            }
            v34 = 0;
            goto LABEL_61;
          }
          v10 = 0;
          v48 = 0;
        }
      }
    }
    v38 = i;
LABEL_104:
    if ( v53 )
      funcs_180069FB0[5 * v8]();
    if ( a5 )
      *a5 = v7;
    v51 = ++v8;
    LOBYTE(a2) = v56;
  }
  return v38;
}
