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
  wchar_t *v3; // r15
  wchar_t *v4; // r14
  unsigned int v5; // r13d
  wchar_t *v6; // r12
  unsigned int v7; // ebx
  wchar_t *Heap; // rax
  const wchar_t *v9; // rbx
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  BOOLEAN v12; // al
  int v13; // ecx
  wchar_t *v14; // rax
  const wchar_t *v15; // rbx
  wchar_t *v16; // rax
  wchar_t *v17; // rdi
  BOOLEAN v18; // al
  int v19; // ecx
  wchar_t *v20; // rax
  const wchar_t *v21; // rbx
  wchar_t *v22; // rax
  wchar_t *v23; // r12
  BOOLEAN v24; // al
  int v25; // ecx
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+24h] [rbp-44h]
  BOOL v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+2Ch] [rbp-3Ch]
  wchar_t *v31; // [rsp+38h] [rbp-30h]
  wchar_t *v32; // [rsp+38h] [rbp-30h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  size_t Size; // [rsp+B8h] [rbp+50h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v30) = -1;
  v1 = 0;
  Lcid = 0;
  Type = 0;
  v2 = a1;
  LODWORD(Size) = 0;
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
    goto LABEL_58;
  }
  v29 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v30 = MEMORY[0];
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v27 = Size + 4;
    if ( (_DWORD)Size == -4
      || (Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4)),
          v9 = Heap,
          (v3 = Heap) == 0LL) )
    {
      v27 = 0;
      goto LABEL_35;
    }
    memmove(Heap, 0LL, (unsigned int)Size);
    v10 = wcspbrk(v9, L";");
    if ( v10 )
    {
      v11 = v10;
      do
      {
        *v11 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        v12 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v1;
    }
    if ( v1 )
    {
      v1 = 0;
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      v1 = 0;
      v27 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) < 0 )
    goto LABEL_37;
  v5 = Size + 4;
  if ( (_DWORD)Size == -4 )
  {
    v4 = 0LL;
  }
  else
  {
    v14 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v5);
    v15 = v14;
    v4 = v14;
    if ( v14 )
    {
      memmove(v14, 0LL, (unsigned int)Size);
      v16 = wcspbrk(v15, L";");
      if ( v16 )
      {
        v17 = v16;
        v6 = 0LL;
        do
        {
          *v17 = 0;
          RtlInitUnicodeString(&DestinationString, v15);
          v18 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v1;
      }
      if ( v1 )
      {
        v1 = 0;
      }
      else
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        v1 = 0;
        v5 = 0;
        v4 = 0LL;
      }
LABEL_37:
      if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) >= 0 )
      {
        v28 = Size + 4;
        if ( (_DWORD)Size == -4 )
        {
          v31 = 0LL;
        }
        else
        {
          v20 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4));
          v31 = v20;
          v21 = v20;
          if ( v20 )
          {
            memmove(v20, 0LL, (unsigned int)Size);
            v22 = wcspbrk(v21, L";");
            v32 = (wchar_t *)v21;
            if ( v22 )
            {
              v32 = (wchar_t *)v21;
              v23 = v22;
              do
              {
                *v23 = 0;
                RtlInitUnicodeString(&DestinationString, v21);
                v24 = RtlCultureNameToLCID(&DestinationString, &Lcid);
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
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
                ++v1;
            }
            if ( !v1 )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
              v28 = 0;
              v32 = 0LL;
            }
            v6 = v32;
            goto LABEL_54;
          }
        }
        v6 = v31;
        v7 = -1073741801;
        v28 = 0;
        goto LABEL_55;
      }
LABEL_54:
      v7 = 0;
      goto LABEL_55;
    }
  }
  v5 = 0;
LABEL_35:
  v7 = -1073741801;
LABEL_55:
  if ( v3 && v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_58:
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
