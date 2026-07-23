/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x18007D4E0
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpGetModuleName @ 0x18007D870 (LdrpGetModuleName.c)
 *     LdrpProtectedCopyMemory @ 0x18007DB20 (LdrpProtectedCopyMemory.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrQueryModuleInfoFromLdrEntry(_QWORD *a1, __int64 a2, char *a3, void *a4, char a5)
{
  __int64 (__fastcall *v9)(int, int, int, int, PSIZE_T); // rax
  NTSTATUS result; // eax
  __int64 (__fastcall *v11)(int, int, int, int, PSIZE_T); // rax
  __int64 (__fastcall *v12)(int, int, int, int, PSIZE_T); // rax
  int v13; // esi
  HANDLE v14; // rcx
  char *v15; // rdx
  __int64 (__fastcall *v16)(int, int, int, int, PSIZE_T); // rax
  HANDLE v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE v20[24]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h]
  _BYTE Buffer[48]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-40h]
  char v25[32]; // [rsp+C8h] [rbp-38h] BYREF
  int v26; // [rsp+E8h] [rbp-18h]
  PVOID BaseAddress; // [rsp+118h] [rbp+18h]
  ULONG_PTR NumberOfBytesRead; // [rsp+200h] [rbp+100h] BYREF
  ULONG_PTR v29; // [rsp+210h] [rbp+110h] BYREF

  memset_thunk_772440563353939046(Buffer, 0, 0x138uLL);
  memset_thunk_772440563353939046(v20, 0, 0x50uLL);
  v9 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  NumberOfBytesRead = 0LL;
  if ( v9 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory((HANDLE)*a1, a3, Buffer, 0x138uLL, &NumberOfBytesRead);
    if ( result < 0 )
      return result;
    if ( NumberOfBytesRead == 312 )
    {
LABEL_4:
      v11 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
      NumberOfBytesRead = 0LL;
      if ( v11 == RtlpQueryReadVirtualMemory )
      {
        result = ZwReadVirtualMemory((HANDLE)*a1, BaseAddress, v20, 0x50uLL, &NumberOfBytesRead);
        if ( result < 0 )
          return result;
        if ( NumberOfBytesRead == 80 )
          goto LABEL_10;
        result = -2147483635;
      }
      else if ( (char *)v11 == (char *)LdrpProtectedCopyMemory )
      {
        result = LdrpProtectedCopyMemory(*a1, BaseAddress, v20, 80LL, &NumberOfBytesRead);
      }
      else
      {
        result = v11(*a1, (int)BaseAddress, (int)v20, 80, &NumberOfBytesRead);
      }
      if ( result < 0 )
        return result;
      if ( NumberOfBytesRead == 80 )
      {
LABEL_10:
        *(_QWORD *)(a2 + 16) = v23;
        *(_DWORD *)(a2 + 24) = v24;
        *(_DWORD *)(a2 + 28) = v26;
        if ( v21 > 0xFFFF )
          *(_WORD *)(a2 + 36) = -1;
        else
          *(_WORD *)(a2 + 36) = v21;
        if ( (a5 & 2) != 0 )
        {
          v12 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
          v13 = LdrpQueryProcessModuleInformationLoopDetectorCount;
          v14 = (HANDLE)*a1;
          NumberOfBytesRead = 0LL;
          v29 = 0LL;
          if ( v12 != RtlpQueryReadVirtualMemory )
          {
            if ( (char *)v12 == (char *)LdrpProtectedCopyMemory )
              v19 = LdrpProtectedCopyMemory(v14, a4, &NumberOfBytesRead, 8LL, &v29);
            else
              v19 = v12((int)v14, (int)a4, (int)&NumberOfBytesRead, 8, &v29);
            goto LABEL_38;
          }
          if ( ZwReadVirtualMemory(v14, a4, &NumberOfBytesRead, 8uLL, &v29) >= 0 )
          {
            if ( v29 == 8 )
              goto LABEL_16;
            v19 = -2147483635;
LABEL_38:
            if ( v19 >= 0 && v29 == 8 )
            {
              while ( 1 )
              {
LABEL_16:
                v15 = (char *)NumberOfBytesRead;
                if ( (void *)NumberOfBytesRead == a4 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                ++*(_WORD *)(a2 + 34);
                if ( a3 == v15 - 32 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                if ( !--v13 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                v16 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
                v17 = (HANDLE)*a1;
                v29 = 0LL;
                if ( v16 != RtlpQueryReadVirtualMemory )
                  break;
                if ( ZwReadVirtualMemory(v17, v15, &NumberOfBytesRead, 8uLL, &v29) < 0 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                if ( v29 != 8 )
                {
                  v18 = -2147483635;
LABEL_23:
                  if ( v18 < 0 || v29 != 8 )
                    return LdrpGetModuleName(a1, v25, a2, 0LL);
                }
              }
              if ( (char *)v16 == (char *)LdrpProtectedCopyMemory )
                v18 = LdrpProtectedCopyMemory(v17, v15, &NumberOfBytesRead, 8LL, &v29);
              else
                v18 = v16((int)v17, (int)v15, (int)&NumberOfBytesRead, 8, &v29);
              goto LABEL_23;
            }
          }
        }
        return LdrpGetModuleName(a1, v25, a2, 0LL);
      }
      return -2147483635;
    }
    result = -2147483635;
  }
  else if ( (char *)v9 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(*a1, a3, Buffer, 312LL, &NumberOfBytesRead);
  }
  else
  {
    result = v9(*a1, (int)a3, (int)Buffer, 312, &NumberOfBytesRead);
  }
  if ( result >= 0 )
  {
    if ( NumberOfBytesRead != 312 )
      return -2147483635;
    goto LABEL_4;
  }
  return result;
}
