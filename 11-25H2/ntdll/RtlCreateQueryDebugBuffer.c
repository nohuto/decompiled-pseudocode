/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x1800F88D0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180135940 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

HANDLE *__fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  HANDLE *v2; // rax
  _OWORD *v3; // rcx
  __int128 v4; // xmm0
  __int64 v6; // [rsp+50h] [rbp-30h] BYREF
  __int64 v7; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp-8h] BYREF
  HANDLE *v11; // [rsp+B0h] [rbp+30h] BYREF
  char *v12; // [rsp+B8h] [rbp+38h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v9[0] = 0LL;
  if ( a1 )
  {
    v1 = (a1 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v1 > 0xFFFFFFFF )
      return 0LL;
  }
  else
  {
    v1 = 0x400000LL;
  }
  v10 = 0LL;
  if ( is_mul_ok(v1, 2uLL) )
  {
    v10 = 2 * v1;
    v9[1] = 2 * v1;
    if ( (int)NtCreateSection(&Handle, 983071LL, 0LL) >= 0
      && (int)ZwMapViewOfSection(Handle, -1LL, v9, 0LL, 0LL, 0LL, &v10, 2, 0, 4) >= 0 )
    {
      v11 = (HANDLE *)v9[0];
      v6 = 208LL;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v6, 4096, 4) >= 0 )
      {
        v12 = (char *)v11 + v1;
        v7 = 208LL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v12, 0LL, &v7, 4096, 4) >= 0 )
        {
          *v11 = Handle;
          v11[1] = v11;
          v11[9] = (HANDLE)208;
          v11[10] = (HANDLE)v6;
          v11[11] = (HANDLE)v1;
          v2 = v11;
          v3 = v12;
          *(_OWORD *)v12 = *(_OWORD *)v11;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          v3[5] = *((_OWORD *)v2 + 5);
          v3[6] = *((_OWORD *)v2 + 6);
          v3 += 8;
          v4 = *((_OWORD *)v2 + 7);
          v2 += 16;
          *(v3 - 1) = v4;
          *v3 = *(_OWORD *)v2;
          v3[1] = *((_OWORD *)v2 + 1);
          v3[2] = *((_OWORD *)v2 + 2);
          v3[3] = *((_OWORD *)v2 + 3);
          v3[4] = *((_OWORD *)v2 + 4);
          *((_QWORD *)v12 + 1) = v12;
          *((_QWORD *)v12 + 10) = v7;
          *(_QWORD *)v12 = 0LL;
          return v11;
        }
      }
    }
    if ( v11 )
      ZwFreeVirtualMemory(-1LL, &v11, &v6, 0x8000LL);
    if ( v12 )
      ZwFreeVirtualMemory(-1LL, &v12, &v7, 0x8000LL);
    if ( v9[0] )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
  }
  return 0LL;
}
