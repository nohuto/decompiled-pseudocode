/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1404BAB5C
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082D794 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     wcspbrk @ 0x1404FE1E0 (wcspbrk.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlpGetWindowsPolicy @ 0x1406F847C (RtlpGetWindowsPolicy.c)
 *     RtlCultureNameToLCID @ 0x140A91BE0 (RtlCultureNameToLCID.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  wchar_t *v3; // r12
  wchar_t *v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  wchar_t *Pool2; // rax
  const wchar_t *v8; // rbx
  wchar_t *v9; // rax
  wchar_t *v10; // r14
  const wchar_t *v11; // r14
  BOOLEAN v12; // al
  int v13; // ecx
  wchar_t *v14; // rax
  const wchar_t *v15; // rbx
  wchar_t *v16; // rax
  wchar_t *v17; // r14
  const wchar_t *v18; // r14
  BOOLEAN v19; // al
  int v20; // ecx
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  wchar_t *v23; // r14
  const wchar_t *v24; // r14
  size_t v25; // rax
  BOOLEAN v26; // al
  int v27; // ecx
  BOOL v28; // eax
  __int64 result; // rax
  unsigned int v30; // [rsp+28h] [rbp-40h]
  int v31; // [rsp+2Ch] [rbp-3Ch]
  int v32; // [rsp+30h] [rbp-38h]
  wchar_t *v33; // [rsp+38h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  BOOL v35; // [rsp+50h] [rbp-18h]
  int v36; // [rsp+54h] [rbp-14h]
  size_t Size; // [rsp+B8h] [rbp+50h] BYREF
  DWORD Lcid; // [rsp+C0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+60h] BYREF

  v36 = -1;
  v1 = 0;
  Lcid = 0;
  Type = 0;
  v2 = a1;
  LODWORD(Size) = 0;
  v3 = 0LL;
  v4 = 0LL;
  v31 = 0;
  v5 = 0;
  v30 = 0;
  v33 = 0LL;
  v32 = 0;
  v35 = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v6 = -1073741811;
    goto LABEL_61;
  }
  v35 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs", &Type, (PULONG)&Size) >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v36 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size) >= 0 )
  {
    v31 = Size + 4;
    if ( (_DWORD)Size == -4
      || (Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)(Size + 4), 0x72746C6Du),
          v8 = Pool2,
          (v3 = Pool2) == 0LL) )
    {
      v31 = 0;
      goto LABEL_35;
    }
    memmove(Pool2, 0LL, (unsigned int)Size);
    v9 = wcspbrk(v8, L";");
    if ( v9 )
    {
      v10 = v9;
      do
      {
        *v10 = 0;
        v11 = v10 + 1;
        RtlInitUnicodeString(&DestinationString, v8);
        v12 = RtlCultureNameToLCID(&DestinationString, &Lcid);
        v13 = v1 + 1;
        v8 = v11;
        if ( !v12 )
          v13 = v1;
        v1 = v13;
        v10 = wcspbrk(v11, L";");
      }
      while ( v10 );
      v2 = a1;
      v5 = 0;
    }
    if ( *v8 )
    {
      RtlInitUnicodeString(&DestinationString, v8);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v1;
    }
    if ( v1 )
    {
      v1 = 0;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
      v1 = 0;
      v31 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size) >= 0 )
  {
    v5 = Size + 4;
    v30 = Size + 4;
    if ( (_DWORD)Size == -4 )
    {
      v4 = 0LL;
    }
    else
    {
      v14 = (wchar_t *)ExAllocatePool2(0x100uLL, v5, 0x72746C6Du);
      v15 = v14;
      v4 = v14;
      if ( v14 )
      {
        memmove(v14, 0LL, (unsigned int)Size);
        v16 = wcspbrk(v15, L";");
        if ( v16 )
        {
          v17 = v16;
          do
          {
            *v17 = 0;
            v18 = v17 + 1;
            RtlInitUnicodeString(&DestinationString, v15);
            v19 = RtlCultureNameToLCID(&DestinationString, &Lcid);
            v20 = v1 + 1;
            v15 = v18;
            if ( !v19 )
              v20 = v1;
            v1 = v20;
            v17 = wcspbrk(v18, L";");
          }
          while ( v17 );
          v2 = a1;
          v5 = v30;
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
          ExFreePoolWithTag(v4, 0);
          v1 = 0;
          v5 = 0;
          v30 = 0;
          v4 = 0LL;
        }
        goto LABEL_37;
      }
    }
    v5 = 0;
    goto LABEL_35;
  }
LABEL_37:
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size) < 0 )
  {
LABEL_57:
    v5 = v30;
    v6 = 0;
    goto LABEL_58;
  }
  v32 = Size + 4;
  if ( (_DWORD)Size == -4 )
  {
    v33 = 0LL;
  }
  else
  {
    v21 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)(Size + 4), 0x72746C6Du);
    v33 = v21;
    v22 = v21;
    if ( v21 )
    {
      memmove(v21, 0LL, (unsigned int)Size);
      v23 = wcspbrk(v22, L";");
      v33 = v22;
      if ( v23 )
      {
        v33 = v22;
        do
        {
          *v23 = 0;
          v24 = v23 + 1;
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = v22;
          if ( v22 )
          {
            v25 = 2 * wcslen(v22);
            if ( v25 >= 0xFFFE )
              LOWORD(v25) = -4;
            DestinationString.Length = v25;
            DestinationString.MaximumLength = v25 + 2;
          }
          v26 = RtlCultureNameToLCID(&DestinationString, &Lcid);
          v27 = v1 + 1;
          v22 = (wchar_t *)v24;
          if ( !v26 )
            v27 = v1;
          v1 = v27;
          v23 = wcspbrk(v24, L";");
        }
        while ( v23 );
        v2 = a1;
      }
      if ( *v22 )
      {
        RtlInitUnicodeString(&DestinationString, v22);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v1;
      }
      if ( !v1 )
      {
        ExFreePoolWithTag(v33, 0);
        v32 = 0;
        v33 = 0LL;
      }
      goto LABEL_57;
    }
  }
  v32 = 0;
LABEL_35:
  v6 = -1073741801;
LABEL_58:
  if ( v3 && v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_61:
  v28 = v35;
  *(_DWORD *)v2 |= 0x800u;
  *(_DWORD *)(v2 + 116) = v28;
  *(_DWORD *)(v2 + 120) = v36;
  *(_DWORD *)(v2 + 148) = v31;
  *(_QWORD *)(v2 + 136) = v33;
  *(_DWORD *)(v2 + 144) = v32;
  result = v6;
  *(_QWORD *)(v2 + 128) = v3;
  *(_QWORD *)(v2 + 152) = v4;
  *(_DWORD *)(v2 + 160) = v5;
  return result;
}
