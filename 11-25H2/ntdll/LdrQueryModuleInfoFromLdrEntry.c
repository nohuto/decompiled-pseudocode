/*
 * XREFs of LdrQueryModuleInfoFromLdrEntry @ 0x18006A600
 * Callers:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 * Callees:
 *     LdrpGetModuleName @ 0x18006A990 (LdrpGetModuleName.c)
 *     LdrpProtectedCopyMemory @ 0x18006AC40 (LdrpProtectedCopyMemory.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrQueryModuleInfoFromLdrEntry(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 (__fastcall *v9)(int, int, int, int, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v11)(int, int, int, int, __int64); // rax
  __int64 (__fastcall *v12)(int, int, int, int, __int64); // rax
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(int, int, int, int, __int64); // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  _BYTE v20[24]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[48]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-40h]
  _BYTE v25[32]; // [rsp+C8h] [rbp-38h] BYREF
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+200h] [rbp+100h] BYREF
  __int64 v29; // [rsp+210h] [rbp+110h] BYREF

  memset_thunk_772440563353939046(v22, 0, 0x138uLL);
  memset_thunk_772440563353939046(v20, 0, 0x50uLL);
  v9 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
  v28 = 0LL;
  if ( v9 == RtlpQueryReadVirtualMemory )
  {
    result = ZwReadVirtualMemory(*a1, a3, v22, 312LL, &v28);
    if ( (int)result < 0 )
      return result;
    if ( v28 == 312 )
    {
LABEL_4:
      v11 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
      v28 = 0LL;
      if ( v11 == RtlpQueryReadVirtualMemory )
      {
        result = ZwReadVirtualMemory(*a1, v27, v20, 80LL, &v28);
        if ( (int)result < 0 )
          return result;
        if ( v28 == 80 )
          goto LABEL_10;
        result = 2147483661LL;
      }
      else if ( (char *)v11 == (char *)LdrpProtectedCopyMemory )
      {
        result = LdrpProtectedCopyMemory(*a1, v27, v20, 80LL, &v28);
      }
      else
      {
        result = v11(*a1, v27, (int)v20, 80, (__int64)&v28);
      }
      if ( (int)result < 0 )
        return result;
      if ( v28 == 80 )
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
          v12 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
          v13 = LdrpQueryProcessModuleInformationLoopDetectorCount;
          v14 = *a1;
          v28 = 0LL;
          v29 = 0LL;
          if ( v12 != RtlpQueryReadVirtualMemory )
          {
            if ( (char *)v12 == (char *)LdrpProtectedCopyMemory )
              v19 = LdrpProtectedCopyMemory(v14, a4, &v28, 8LL, &v29);
            else
              v19 = v12(v14, a4, (int)&v28, 8, (__int64)&v29);
            goto LABEL_38;
          }
          if ( (int)ZwReadVirtualMemory(v14, a4, &v28, 8LL, &v29) >= 0 )
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
                v15 = v28;
                if ( v28 == a4 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                ++*(_WORD *)(a2 + 34);
                if ( a3 == v15 - 32 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                if ( !--v13 )
                  return LdrpGetModuleName(a1, v25, a2, 0LL);
                v16 = (__int64 (__fastcall *)(int, int, int, int, __int64))a1[1];
                v17 = *a1;
                v29 = 0LL;
                if ( v16 != RtlpQueryReadVirtualMemory )
                  break;
                if ( (int)ZwReadVirtualMemory(v17, v15, &v28, 8LL, &v29) < 0 )
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
                v18 = LdrpProtectedCopyMemory(v17, v15, &v28, 8LL, &v29);
              else
                v18 = v16(v17, v15, (int)&v28, 8, (__int64)&v29);
              goto LABEL_23;
            }
          }
        }
        return LdrpGetModuleName(a1, v25, a2, 0LL);
      }
      return 2147483661LL;
    }
    result = 2147483661LL;
  }
  else if ( (char *)v9 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(*a1, a3, v22, 312LL, &v28);
  }
  else
  {
    result = v9(*a1, a3, (int)v22, 312, (__int64)&v28);
  }
  if ( (int)result >= 0 )
  {
    if ( v28 != 312 )
      return 2147483661LL;
    goto LABEL_4;
  }
  return result;
}
