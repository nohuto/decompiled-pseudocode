/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x180099350
 * Callers:
 *     RtlDestroyQueryDebugBuffer @ 0x180098820 (RtlDestroyQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcess @ 0x1801636E0 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpChangeQueryDebugBufferTarget(_QWORD *a1, unsigned __int64 a2, int a3, HANDLE *a4)
{
  unsigned __int64 v4; // rax
  char *v5; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rsi
  __int128 v12; // xmm0
  _OWORD *v13; // rbx
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // r14d
  HANDLE v18; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  __int128 v22; // [rsp+70h] [rbp-21h] BYREF
  __int128 v23; // [rsp+80h] [rbp-11h] BYREF
  _QWORD v24[4]; // [rsp+90h] [rbp-1h] BYREF
  __int128 v25; // [rsp+B0h] [rbp+1Fh]
  HANDLE v26; // [rsp+F8h] [rbp+67h] BYREF

  v4 = a1[6];
  v5 = (char *)a1 + a1[11];
  v24[0] = 48LL;
  v26 = 0LL;
  Handle = 0LL;
  memset(&v24[1], 0, 24);
  v22 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  if ( v4 )
  {
    v22 = v4;
    result = NtOpenProcess(&v26, 0x1FFFFFLL, v24, &v22);
    if ( (int)result < 0 )
      return result;
    v10 = (__int64)v26;
  }
  else
  {
    v10 = -1LL;
    v26 = (HANDLE)-1LL;
  }
  if ( a2 && (v23 = a2, v15 = NtOpenProcess(&Handle, 0x1FFFFFLL, v24, &v23), v10 = (__int64)v26, v16 = v15, v15 < 0) )
  {
    if ( v26 != (HANDLE)-1LL )
      NtClose(v26);
    return v16;
  }
  else
  {
    v11 = a1 + 2;
    if ( v10 == -1 )
    {
      *v11 = a1[11] + a1[1];
    }
    else
    {
      if ( *v11 )
      {
        NtUnmapViewOfSection(v10);
        v10 = (__int64)v26;
        *v11 = 0LL;
      }
      NtClose((HANDLE)v10);
    }
    v20 = a1[11];
    v21 = v20;
    if ( Handle )
    {
      v17 = ZwMapViewOfSection(*a1, Handle, a1 + 2, 0LL, 0LL, &v21, &v20, 2, 0, 4);
      if ( v17 == -1073741800 )
      {
        v18 = Handle;
        *v11 = 0LL;
        v17 = ZwMapViewOfSection(*a1, v18, a1 + 2, 0LL, 0LL, &v21, &v20, 2, 0, 4);
      }
      if ( v17 < 0 )
      {
        NtClose(Handle);
        return (unsigned int)v17;
      }
      if ( a4 )
        *a4 = Handle;
      else
        NtClose(Handle);
    }
    a1[6] = a2;
    a1[3] = (char *)a1 - *v11;
    if ( a3 == 1 )
    {
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 1) = *(_DWORD *)v11;
      *((_DWORD *)v5 + 2) = *((_DWORD *)a1 + 4);
      *((_DWORD *)v5 + 3) = *((_DWORD *)a1 + 6);
      *((_DWORD *)v5 + 4) = *((_DWORD *)a1 + 8);
      *((_DWORD *)v5 + 5) = *((_DWORD *)a1 + 10);
      *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 12);
      *((_DWORD *)v5 + 7) = *((_DWORD *)a1 + 14);
      *((_DWORD *)v5 + 8) = *((_DWORD *)a1 + 16);
      *((_DWORD *)v5 + 9) = *((_DWORD *)a1 + 18);
      *((_DWORD *)v5 + 10) = *((_DWORD *)a1 + 20);
      *((_DWORD *)v5 + 11) = *((_DWORD *)a1 + 22);
      *((_DWORD *)v5 + 20) = *((_DWORD *)a1 + 40);
    }
    else
    {
      *(_OWORD *)v5 = *(_OWORD *)a1;
      *((_OWORD *)v5 + 1) = *((_OWORD *)a1 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)a1 + 2);
      *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
      *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
      *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
      *((_OWORD *)v5 + 6) = *((_OWORD *)a1 + 6);
      v12 = *((_OWORD *)a1 + 7);
      v13 = a1 + 16;
      *((_OWORD *)v5 + 7) = v12;
      *((_OWORD *)v5 + 8) = *v13;
      *((_OWORD *)v5 + 9) = v13[1];
      *((_OWORD *)v5 + 10) = v13[2];
      *((_OWORD *)v5 + 11) = v13[3];
      *((_OWORD *)v5 + 12) = v13[4];
      *((_QWORD *)v5 + 1) = *((_QWORD *)v5 + 2);
      *(_QWORD *)v5 = 0LL;
    }
    return 0LL;
  }
}
