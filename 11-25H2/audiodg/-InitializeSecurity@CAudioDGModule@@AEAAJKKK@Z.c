/*
 * XREFs of ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x14001E43C
 * Callers:
 *     _lambda_d1a8b950306abda3aed68804ea97f7ae_::operator() @ 0x14001D70C (_lambda_d1a8b950306abda3aed68804ea97f7ae_--operator().c)
 * Callees:
 *     WPP_SF_D @ 0x140065A6C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDGModule::InitializeSecurity(CAudioDGModule *this)
{
  HLOCAL v1; // rdi
  struct _ACL *v2; // rsi
  struct _ACL *pSacl; // r14
  void *pOwner; // r15
  void *pPrimaryGroup; // r12
  signed int LastError; // eax
  int v7; // ebx
  DWORD v8; // edx
  HLOCAL v9; // rax
  DWORD v10; // r8d
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  HLOCAL v14; // rax
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+68h] [rbp-9h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+6Ch] [rbp-5h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp-1h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp+7h] BYREF
  DWORD dwDaclSize; // [rsp+D8h] [rbp+67h] BYREF
  int v20; // [rsp+DCh] [rbp+6Bh]
  DWORD dwSaclSize; // [rsp+E0h] [rbp+6Fh] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+E8h] [rbp+77h] BYREF
  DWORD dwOwnerSize; // [rsp+F0h] [rbp+7Fh] BYREF

  v20 = HIDWORD(this);
  ppv = 0LL;
  SecurityDescriptor = 0LL;
  SecurityDescriptorSize = 0;
  v1 = 0LL;
  dwAbsoluteSecurityDescriptorSize = 0;
  v2 = 0LL;
  dwDaclSize = 0;
  pSacl = 0LL;
  dwSaclSize = 0;
  pOwner = 0LL;
  dwOwnerSize = 0;
  pPrimaryGroup = 0LL;
  dwPrimaryGroupSize = 0;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"O:LSG:LSD:(A;;0x1;;;RC)(A;;0x1;;;AU)(A;;0x1;;;IU)(A;;0x1;;;AC)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-18"
           "5714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize) )
    goto LABEL_31;
  if ( MakeAbsoluteSD(
         SecurityDescriptor,
         0LL,
         &dwAbsoluteSecurityDescriptorSize,
         0LL,
         &dwDaclSize,
         0LL,
         &dwSaclSize,
         0LL,
         &dwOwnerSize,
         0LL,
         &dwPrimaryGroupSize) )
  {
    v7 = -2147418113;
    goto LABEL_17;
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError != 122 )
    goto LABEL_32;
  if ( dwAbsoluteSecurityDescriptorSize )
    v1 = LocalAlloc(0x40u, dwAbsoluteSecurityDescriptorSize);
  if ( dwDaclSize )
    v2 = (struct _ACL *)LocalAlloc(0x40u, dwDaclSize);
  if ( dwSaclSize )
    pSacl = (struct _ACL *)LocalAlloc(0x40u, dwSaclSize);
  v8 = dwOwnerSize;
  if ( dwOwnerSize )
  {
    v9 = LocalAlloc(0x40u, dwOwnerSize);
    v8 = dwOwnerSize;
    pOwner = v9;
  }
  v10 = dwPrimaryGroupSize;
  if ( dwPrimaryGroupSize )
  {
    v14 = LocalAlloc(0x40u, dwPrimaryGroupSize);
    v8 = dwOwnerSize;
    pPrimaryGroup = v14;
    v10 = dwPrimaryGroupSize;
  }
  if ( dwAbsoluteSecurityDescriptorSize && !v1
    || dwDaclSize && !v2
    || dwSaclSize && !pSacl
    || v8 && !pOwner
    || v10 && !pPrimaryGroup )
  {
    v7 = -2147024882;
    goto LABEL_17;
  }
  if ( !MakeAbsoluteSD(
          SecurityDescriptor,
          v1,
          &dwAbsoluteSecurityDescriptorSize,
          v2,
          &dwDaclSize,
          pSacl,
          &dwSaclSize,
          pOwner,
          &dwOwnerSize,
          pPrimaryGroup,
          &dwPrimaryGroupSize) )
  {
LABEL_31:
    LastError = GetLastError();
    v7 = LastError;
LABEL_32:
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_17;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  v7 = CoInitializeSecurity(v1, -1, 0LL, 0LL, 4u, 2u, 0LL, 0x3020u, 0LL);
  if ( v7 >= 0 )
  {
    v7 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &IID_IGlobalOptions, &ppv);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 1LL, 2LL);
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v13 = 22LL;
        goto LABEL_45;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = 21LL;
LABEL_45:
      WPP_SF_D(v12[2], v13, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    }
  }
LABEL_17:
  LocalFree(SecurityDescriptor);
  LocalFree(v1);
  LocalFree(v2);
  LocalFree(pSacl);
  LocalFree(pOwner);
  LocalFree(pPrimaryGroup);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
    }
    AudDGTraceLoggingErrorHelper("CAudioDGModule::InitializeSecurity", 0x290u, v7);
  }
  return (unsigned int)v7;
}
