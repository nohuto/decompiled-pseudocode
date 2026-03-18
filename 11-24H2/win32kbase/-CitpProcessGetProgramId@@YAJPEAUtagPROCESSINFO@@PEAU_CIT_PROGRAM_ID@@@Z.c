/*
 * XREFs of ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1400B4F78
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1400B5368 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1400B54EC (-CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x14019EC50 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 *     _wcsupr @ 0x1401A0AB0 (_wcsupr.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall CitpProcessGetProgramId(PRKPROCESS *a1, struct _CIT_PROGRAM_ID *a2)
{
  char v4; // r12
  void *v5; // rsi
  PACCESS_TOKEN v6; // r15
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rdx
  NTSTATUS v11; // eax
  int v12; // edi
  PIMAGE_NT_HEADERS v13; // rax
  DWORD TimeDateStamp; // edi
  unsigned int v15; // r8d
  int v16; // ecx
  int v18; // eax
  const char *v19; // rdx
  wchar_t *v20; // rdi
  __int64 v21; // rax
  wchar_t *String; // [rsp+38h] [rbp-210h] BYREF
  PUNICODE_STRING pImageFileName; // [rsp+40h] [rbp-208h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-200h]
  size_t Size; // [rsp+50h] [rbp-1F8h] BYREF
  size_t v26; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1E8h]
  PACCESS_TOKEN v28; // [rsp+68h] [rbp-1E0h]
  DWORD v29; // [rsp+70h] [rbp-1D8h]
  int v30; // [rsp+74h] [rbp-1D4h]
  _BYTE v31[144]; // [rsp+80h] [rbp-1C8h] BYREF
  _BYTE Src[256]; // [rsp+110h] [rbp-138h] BYREF

  v4 = 0;
  pImageFileName = 0LL;
  String = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  BaseAddress = (PVOID)PsGetProcessSectionBaseAddress(*a1);
  if ( !BaseAddress )
  {
    v12 = -1073741637;
    v15 = 1728;
    goto LABEL_16;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( a1 != (PRKPROCESS *)v10 )
  {
    KeAttachProcess(*a1);
    v4 = 1;
  }
  if ( (((unsigned __int8)*((_DWORD *)a1 + 204) >> 4) & 3) == 1 )
  {
    v6 = PsReferencePrimaryToken(*a1);
    v28 = v6;
    Size = 256LL;
    v26 = 130LL;
    v18 = RtlQueryPackageIdentity(v6, Src, &Size, v31, &v26, 0LL);
    if ( v18 < 0 )
    {
      CitpLogFailureWorker(v18, v19, 0x6F5u);
      goto LABEL_7;
    }
    v20 = (wchar_t *)Win32AllocPoolZInitImpl(256LL, Size, 0x49637355u);
    String = v20;
    v21 = Win32AllocPoolZInitImpl(256LL, v26, 0x49637355u);
    v5 = (void *)v21;
    v27 = v21;
    if ( v20 && v21 )
    {
      memmove(v20, Src, Size);
      wcsupr(v20);
      memmove(v5, v31, v26);
      goto LABEL_7;
    }
    v12 = -1073741670;
    v15 = 1770;
LABEL_16:
    v16 = v12;
LABEL_17:
    CitpLogFailureWorker(v16, v7, v15);
    goto LABEL_18;
  }
LABEL_7:
  if ( String )
    goto LABEL_12;
  v11 = SeLocateProcessImageName(*a1, &pImageFileName);
  v12 = v11;
  if ( v11 < 0 )
  {
    pImageFileName = 0LL;
    v15 = 1794;
    v16 = v11;
    goto LABEL_17;
  }
  if ( !pImageFileName->Length )
  {
    v12 = -1073741637;
    goto LABEL_18;
  }
  v12 = CitpStringDuplicate(&String, pImageFileName->Buffer, (unsigned __int64)pImageFileName->Length >> 1);
  if ( v12 < 0 )
    goto LABEL_18;
  wcsupr(String);
LABEL_12:
  v13 = RtlImageNtHeader(BaseAddress);
  TimeDateStamp = v13->FileHeader.TimeDateStamp;
  v29 = TimeDateStamp;
  LODWORD(BaseAddress) = v13->OptionalHeader.CheckSum;
  v30 = (int)BaseAddress;
  if ( v5 )
    wcsupr((wchar_t *)v5);
  *(_QWORD *)a2 = String;
  String = 0LL;
  *((_QWORD *)a2 + 1) = v5;
  v5 = 0LL;
  *((_DWORD *)a2 + 6) = TimeDateStamp;
  *((_DWORD *)a2 + 7) = (_DWORD)BaseAddress;
  *((_DWORD *)a2 + 8) = (*((_DWORD *)a1 + 204) >> 4) & 3;
  *((_QWORD *)a2 + 2) = CitpProgramIdCalculateHash(a2);
  v12 = 0;
LABEL_18:
  if ( v6 )
    PsDereferencePrimaryToken(v6);
  if ( pImageFileName )
    ExFreePoolWithTag(pImageFileName, 0);
  GreDeleteFastMutex((char *)String);
  GreDeleteFastMutex((char *)v5);
  if ( v4 )
    KeDetachProcess();
  return (unsigned int)v12;
}
