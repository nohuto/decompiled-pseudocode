/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x1404C0FC4
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14081D224 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     wcspbrk @ 0x1404FE1A0 (wcspbrk.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlpGetWindowsPolicy @ 0x1406EE9B8 (RtlpGetWindowsPolicy.c)
 *     RtlCultureNameToLCID @ 0x140A91310 (RtlCultureNameToLCID.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rdi
  wchar_t *v3; // r12
  wchar_t *v4; // r15
  int v5; // r14d
  unsigned int v6; // ebx
  wchar_t *Pool2; // rax
  const wchar_t *v8; // rbx
  wchar_t *v9; // rax
  wchar_t *v10; // r14
  const wchar_t *v11; // r14
  char v12; // al
  int v13; // ecx
  wchar_t *v14; // rax
  const wchar_t *v15; // rbx
  wchar_t *v16; // rax
  wchar_t *v17; // r14
  const wchar_t *v18; // r14
  char v19; // al
  int v20; // ecx
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  wchar_t *v23; // r14
  const wchar_t *v24; // r14
  size_t v25; // rax
  char v26; // al
  int v27; // ecx
  BOOL v28; // eax
  __int64 result; // rax
  int v30; // [rsp+28h] [rbp-40h]
  int v31; // [rsp+2Ch] [rbp-3Ch]
  int v32; // [rsp+30h] [rbp-38h]
  wchar_t *v33; // [rsp+38h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  BOOL v35; // [rsp+50h] [rbp-18h]
  int v36; // [rsp+54h] [rbp-14h]
  int v38; // [rsp+C0h] [rbp+58h] BYREF
  int v39; // [rsp+C8h] [rbp+60h]

  v36 = -1;
  v1 = 0;
  v38 = 0;
  v39 = 0;
  v2 = a1;
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
    goto LABEL_57;
  }
  v35 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v36 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v31 = 4;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v8 = Pool2;
    v3 = Pool2;
    if ( !Pool2 )
    {
      v31 = 0;
      goto LABEL_33;
    }
    memmove(Pool2, 0LL, 0LL);
    v9 = wcspbrk(v8, L";");
    if ( v9 )
    {
      v10 = v9;
      do
      {
        *v10 = 0;
        v11 = v10 + 1;
        RtlInitUnicodeString(&DestinationString, v8);
        v12 = RtlCultureNameToLCID(&DestinationString, &v38);
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
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v38) )
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
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v5 = 4;
    v30 = 4;
    v14 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v15 = v14;
    v4 = v14;
    if ( !v14 )
    {
      v5 = 0;
      goto LABEL_33;
    }
    memmove(v14, 0LL, 0LL);
    v16 = wcspbrk(v15, L";");
    if ( v16 )
    {
      v17 = v16;
      do
      {
        *v17 = 0;
        v18 = v17 + 1;
        RtlInitUnicodeString(&DestinationString, v15);
        v19 = RtlCultureNameToLCID(&DestinationString, &v38);
        v20 = v1 + 1;
        v15 = v18;
        if ( !v19 )
          v20 = v1;
        v1 = v20;
        v17 = wcspbrk(v18, L";");
      }
      while ( v17 );
      v2 = a1;
      v5 = 4;
    }
    if ( *v15 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v38) )
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
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") < 0 )
  {
LABEL_53:
    v5 = v30;
    v6 = 0;
    goto LABEL_54;
  }
  v32 = 4;
  v21 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v33 = v21;
  v22 = v21;
  if ( v21 )
  {
    memmove(v21, 0LL, 0LL);
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
        v26 = RtlCultureNameToLCID(&DestinationString, &v38);
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
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v38) )
        ++v1;
    }
    if ( !v1 )
    {
      ExFreePoolWithTag(v33, 0);
      v32 = 0;
      v33 = 0LL;
    }
    goto LABEL_53;
  }
  v32 = 0;
LABEL_33:
  v6 = -1073741801;
LABEL_54:
  if ( v3 && v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_57:
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
