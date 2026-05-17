/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x180086A64
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180087080 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x1801296D0 (wcspbrk.c)
 *     RtlpGetWindowsPolicy @ 0x18014A4A0 (RtlpGetWindowsPolicy.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r14
  int v5; // r13d
  __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // r9
  wchar_t *Heap; // rax
  __int64 v10; // r9
  const wchar_t *v11; // rbx
  wchar_t *v12; // rax
  __int64 v13; // r9
  wchar_t *v14; // rdi
  char v15; // al
  int v16; // ecx
  wchar_t *v17; // rax
  const wchar_t *v18; // rbx
  wchar_t *v19; // rax
  __int64 v20; // r9
  wchar_t *v21; // rdi
  char v22; // al
  int v23; // ecx
  wchar_t *v24; // rax
  const wchar_t *v25; // rbx
  wchar_t *v26; // rax
  wchar_t *v27; // r12
  char v28; // al
  int v29; // ecx
  __int64 result; // rax
  int v31; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+24h] [rbp-44h]
  BOOL v33; // [rsp+28h] [rbp-40h]
  __int64 v34; // [rsp+2Ch] [rbp-3Ch]
  __int64 v35; // [rsp+38h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  int v38; // [rsp+C0h] [rbp+58h] BYREF
  int v39; // [rsp+C8h] [rbp+60h]

  LODWORD(v34) = -1;
  v1 = 0;
  v38 = 0;
  v39 = 0;
  v2 = a1;
  v3 = 0LL;
  v4 = 0LL;
  v31 = 0;
  v5 = 0;
  v32 = 0;
  v6 = 0LL;
  v33 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v7 = -1073741811;
    goto LABEL_54;
  }
  v33 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v34 = MEMORY[0];
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL, v8);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v31 = 4;
    Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v11 = Heap;
    v3 = (__int64)Heap;
    if ( !Heap )
    {
      v31 = 0;
      goto LABEL_33;
    }
    memmove(Heap, 0LL, 0LL);
    v12 = wcspbrk(v11, L";");
    if ( v12 )
    {
      v14 = v12;
      do
      {
        *v14 = 0;
        RtlInitUnicodeString(&DestinationString, v11);
        v15 = RtlCultureNameToLCID(&DestinationString.Length, &v38);
        v16 = v1 + 1;
        if ( !v15 )
          v16 = v1;
        v11 = v14 + 1;
        v1 = v16;
        v14 = wcspbrk(v14 + 1, L";");
      }
      while ( v14 );
      v2 = a1;
    }
    if ( *v11 )
    {
      RtlInitUnicodeString(&DestinationString, v11);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v38) )
        ++v1;
    }
    if ( v1 )
    {
      v1 = 0;
    }
    else
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3, v13);
      v1 = 0;
      v31 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v5 = 4;
    v17 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v18 = v17;
    v4 = (__int64)v17;
    if ( v17 )
    {
      memmove(v17, 0LL, 0LL);
      v19 = wcspbrk(v18, L";");
      if ( v19 )
      {
        v21 = v19;
        v6 = 0LL;
        do
        {
          *v21 = 0;
          RtlInitUnicodeString(&DestinationString, v18);
          v22 = RtlCultureNameToLCID(&DestinationString.Length, &v38);
          v23 = v1 + 1;
          if ( !v22 )
            v23 = v1;
          v18 = v21 + 1;
          v1 = v23;
          v21 = wcspbrk(v21 + 1, L";");
        }
        while ( v21 );
        v2 = a1;
      }
      if ( *v18 )
      {
        RtlInitUnicodeString(&DestinationString, v18);
        if ( RtlCultureNameToLCID(&DestinationString.Length, &v38) )
          ++v1;
      }
      if ( v1 )
      {
        v1 = 0;
      }
      else
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v20);
        v1 = 0;
        v5 = 0;
        v4 = 0LL;
      }
      goto LABEL_35;
    }
    v5 = 0;
LABEL_33:
    v7 = -1073741801;
    goto LABEL_51;
  }
LABEL_35:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v32 = 4;
    v24 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v25 = v24;
    if ( !v24 )
    {
      v6 = 0LL;
      v7 = -1073741801;
      v32 = 0;
      goto LABEL_51;
    }
    memmove(v24, 0LL, 0LL);
    v26 = wcspbrk(v25, L";");
    v35 = (__int64)v25;
    if ( v26 )
    {
      v35 = (__int64)v25;
      v27 = v26;
      do
      {
        *v27 = 0;
        RtlInitUnicodeString(&DestinationString, v25);
        v28 = RtlCultureNameToLCID(&DestinationString.Length, &v38);
        v29 = v1 + 1;
        if ( !v28 )
          v29 = v1;
        v25 = v27 + 1;
        v1 = v29;
        v27 = wcspbrk(v27 + 1, L";");
      }
      while ( v27 );
      v2 = a1;
    }
    if ( *v25 )
    {
      RtlInitUnicodeString(&DestinationString, v25);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v38) )
        ++v1;
    }
    if ( !v1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v35, v10);
      v32 = 0;
      v35 = 0LL;
    }
    v6 = v35;
  }
  v7 = 0;
LABEL_51:
  if ( v3 && v4 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v10);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_54:
  *(_DWORD *)v2 |= 0x800u;
  *(_DWORD *)(v2 + 116) = v33;
  *(_DWORD *)(v2 + 120) = v34;
  *(_DWORD *)(v2 + 148) = v31;
  *(_DWORD *)(v2 + 144) = v32;
  result = v7;
  *(_QWORD *)(v2 + 128) = v3;
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 160) = v5;
  *(_QWORD *)(v2 + 136) = v6;
  return result;
}
