/*
 * XREFs of _RegRtlCreateTreeTransacted @ 0x1409282E4
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1409273B0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140927630 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegCreateTree @ 0x140928268 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegCreateTree @ 0x140928A64 (_SysCtxRegCreateTree.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140821834 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x140821B14 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlIsPredefinedKey @ 0x140928794 (_RegRtlIsPredefinedKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlCreateTreeTransacted(
        HANDLE Handle,
        NTSTRSAFE_PCWSTR pszSrc,
        ULONG CreateOptions,
        ACCESS_MASK DesiredAccess,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        __int64 a9)
{
  __int64 v13; // rcx
  signed int inited; // ebx
  HANDLE v15; // rcx
  ULONG v16; // edx
  NTSTRSAFE_PCWSTR v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v23; // rsi
  unsigned __int64 v24; // rdi
  __int64 v25; // r14
  unsigned __int64 v26; // rbx
  wchar_t *v27; // rax
  __int64 v28; // r9
  char v29; // cl
  PULONG v30; // r10
  void *v31; // rax
  __int64 v32; // r8
  int CreateOptionsa; // [rsp+30h] [rbp-69h]
  HANDLE Handlea; // [rsp+58h] [rbp-41h] BYREF
  void *v35; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF

  v35 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Handlea = 0LL;
  DestinationString = 0LL;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey(Handle)
    || (inited = RegRtlOpenPredefinedKey(v13, (__int64)&Handlea), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, pszSrc);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v15 = Handle;
      v16 = (32 * (CreateOptions & 8 | 6)) | 2;
      if ( !a6 )
        v16 = 32 * (CreateOptions & 8 | 6);
      if ( Handlea )
        v15 = Handlea;
      ObjectAttributes.RootDirectory = v15;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      ObjectAttributes.Attributes = v16 | 0x200;
      if ( a9 )
      {
        inited = NtCreateKeyTransacted_Stub((__int64)KeyHandle, DesiredAccess);
        if ( inited == -1073741702 )
          inited = -1072103420;
      }
      else
      {
        inited = ZwCreateKey(KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0LL, CreateOptions, Disposition);
      }
    }
  }
  if ( Handlea )
    ZwClose(Handlea);
  if ( inited == -1073741772 )
  {
    if ( pszSrc )
    {
      v18 = pszSrc;
      v19 = 0x7FFFLL;
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v19;
      }
      while ( v19 );
      inited = v19 == 0 ? 0xC000000D : 0;
      v20 = (0x7FFF - v19) & -(__int64)(v19 != 0);
      if ( v19 )
      {
        v21 = v20 + 1;
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2 * (v20 + 1), 0x4C474552u);
        v23 = Pool2;
        if ( Pool2 )
        {
          inited = RtlStringCchCopyExW(Pool2, v21, pszSrc, 0LL, 0LL, 0x100u);
          if ( !inited )
          {
            v24 = (unsigned __int64)v23;
            v25 = (__int64)Handle;
            if ( !Handle && !wcsnicmp(v23, L"\\REGISTRY\\MACHINE\\", 0x12uLL) )
            {
              v25 = 2147483650LL;
              v24 = (unsigned __int64)(v23 + 18);
            }
            while ( 1 )
            {
              v26 = v24;
              v27 = wcschr((const wchar_t *)v24, 0x5Cu);
              v24 = (unsigned __int64)v27;
              if ( v27 )
              {
                *v27 = 0;
                do
                  v24 += 2LL;
                while ( *(_WORD *)v24 == 92 );
                v24 &= -(__int64)(*(_WORD *)v24 != 0);
              }
              v28 = DesiredAccess;
              v29 = a6;
              v30 = Disposition;
              if ( v24 )
              {
                v28 = 4LL;
                v29 = 0;
              }
              v31 = a5;
              if ( v24 )
                v30 = 0LL;
              v32 = CreateOptions;
              if ( v24 )
                v31 = 0LL;
              LOBYTE(CreateOptionsa) = v29;
              if ( v24 )
                v32 = CreateOptions & 0xFFFFFFFC;
              inited = RegRtlCreateKeyTransacted(v25, v26, v32, v28, v31, CreateOptionsa, &v35, v30, a9);
              if ( (HANDLE)v25 != Handle && v25 != 2147483650LL )
                ZwClose((HANDLE)v25);
              if ( inited )
                break;
              if ( !v24 )
              {
                *KeyHandle = v35;
                break;
              }
              v25 = (__int64)v35;
            }
          }
          ExFreePoolWithTag(v23, 0);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)inited;
}
