/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1800EB31C
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800EAF60 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x180127BF0 (wcspbrk.c)
 *     RtlpGetWindowsPolicy @ 0x180148EF0 (RtlpGetWindowsPolicy.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  int v5; // r13d
  unsigned __int64 v6; // r12
  unsigned int v7; // ebx
  wchar_t *Heap; // rax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  char v12; // al
  int v13; // ecx
  wchar_t *v14; // rax
  const wchar_t *v15; // rbx
  wchar_t *v16; // rax
  wchar_t *v17; // rdi
  char v18; // al
  int v19; // ecx
  wchar_t *v20; // rax
  const wchar_t *v21; // rbx
  wchar_t *v22; // rax
  wchar_t *v23; // r12
  char v24; // al
  int v25; // ecx
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+24h] [rbp-44h]
  BOOL v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v31; // [rsp+38h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  int v34; // [rsp+C0h] [rbp+58h] BYREF
  int v35; // [rsp+C8h] [rbp+60h]

  LODWORD(v30) = -1;
  v1 = 0;
  v34 = 0;
  v35 = 0;
  v2 = a1;
  v3 = 0LL;
  v4 = 0LL;
  v27 = 0;
  v5 = 0;
  v28 = 0;
  v6 = 0LL;
  v29 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v7 = -1073741811;
    goto LABEL_54;
  }
  v29 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v30 = MEMORY[0];
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v27 = 4;
    Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v9 = Heap;
    v3 = (unsigned __int64)Heap;
    if ( !Heap )
    {
      v27 = 0;
      goto LABEL_33;
    }
    memmove(Heap, 0LL, 0LL);
    v10 = wcspbrk(v9, L";");
    if ( v10 )
    {
      v11 = v10;
      do
      {
        *v11 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        v12 = RtlCultureNameToLCID(&DestinationString.Length, &v34);
        v13 = v1 + 1;
        if ( !v12 )
          v13 = v1;
        v9 = v11 + 1;
        v1 = v13;
        v11 = wcspbrk(v11 + 1, L";");
      }
      while ( v11 );
      v2 = a1;
    }
    if ( *v9 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v34) )
        ++v1;
    }
    if ( v1 )
    {
      v1 = 0;
    }
    else
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
      v1 = 0;
      v27 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v5 = 4;
    v14 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v15 = v14;
    v4 = (unsigned __int64)v14;
    if ( v14 )
    {
      memmove(v14, 0LL, 0LL);
      v16 = wcspbrk(v15, L";");
      if ( v16 )
      {
        v17 = v16;
        v6 = 0LL;
        do
        {
          *v17 = 0;
          RtlInitUnicodeString(&DestinationString, v15);
          v18 = RtlCultureNameToLCID(&DestinationString.Length, &v34);
          v19 = v1 + 1;
          if ( !v18 )
            v19 = v1;
          v15 = v17 + 1;
          v1 = v19;
          v17 = wcspbrk(v17 + 1, L";");
        }
        while ( v17 );
        v2 = a1;
      }
      if ( *v15 )
      {
        RtlInitUnicodeString(&DestinationString, v15);
        if ( RtlCultureNameToLCID(&DestinationString.Length, &v34) )
          ++v1;
      }
      if ( v1 )
      {
        v1 = 0;
      }
      else
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
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
    v28 = 4;
    v20 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4uLL);
    v21 = v20;
    if ( !v20 )
    {
      v6 = 0LL;
      v7 = -1073741801;
      v28 = 0;
      goto LABEL_51;
    }
    memmove(v20, 0LL, 0LL);
    v22 = wcspbrk(v21, L";");
    v31 = (unsigned __int64)v21;
    if ( v22 )
    {
      v31 = (unsigned __int64)v21;
      v23 = v22;
      do
      {
        *v23 = 0;
        RtlInitUnicodeString(&DestinationString, v21);
        v24 = RtlCultureNameToLCID(&DestinationString.Length, &v34);
        v25 = v1 + 1;
        if ( !v24 )
          v25 = v1;
        v21 = v23 + 1;
        v1 = v25;
        v23 = wcspbrk(v23 + 1, L";");
      }
      while ( v23 );
      v2 = a1;
    }
    if ( *v21 )
    {
      RtlInitUnicodeString(&DestinationString, v21);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v34) )
        ++v1;
    }
    if ( !v1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
      v28 = 0;
      v31 = 0LL;
    }
    v6 = v31;
  }
  v7 = 0;
LABEL_51:
  if ( v3 && v4 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_54:
  *(_DWORD *)v2 |= 0x800u;
  *(_DWORD *)(v2 + 116) = v29;
  *(_DWORD *)(v2 + 120) = v30;
  *(_DWORD *)(v2 + 148) = v27;
  *(_DWORD *)(v2 + 144) = v28;
  result = v7;
  *(_QWORD *)(v2 + 128) = v3;
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 160) = v5;
  *(_QWORD *)(v2 + 136) = v6;
  return result;
}
