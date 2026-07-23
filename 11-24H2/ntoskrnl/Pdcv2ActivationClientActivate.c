/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x1409EB97C
 * Callers:
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     PiPdcActivate @ 0x1409EB900 (PiPdcActivate.c)
 *     PopWin32kActivatorWorker @ 0x1409EBE10 (PopWin32kActivatorWorker.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1402B885C (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     PdcPortSendMessageSynchronously @ 0x1404897EC (PdcPortSendMessageSynchronously.c)
 *     Pdcv2pValidateExtraActivationParameters @ 0x14049C8CC (Pdcv2pValidateExtraActivationParameters.c)
 *     PdcpResizeDiagnosticContext @ 0x140604BC8 (PdcpResizeDiagnosticContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     Pdcv2pValidateActivationParameters @ 0x1409EBDB4 (Pdcv2pValidateActivationParameters.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        NTSTRSAFE_PCWSTR pszSrc,
        int a6,
        _QWORD *a7,
        LARGE_INTEGER Timeout)
{
  _DWORD *QuadPart; // r13
  char v11; // si
  __int64 v12; // r14
  NTSTATUS v13; // ecx
  __int64 Pool2; // rax
  _QWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // r11
  const wchar_t *v18; // r8
  _WORD *v19; // rcx
  __int64 v20; // rdx
  __int16 v21; // ax
  _WORD *v22; // rax
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rdx
  _WORD *v26; // rcx
  __int16 v27; // ax
  _WORD *v28; // rax
  char *v29; // rcx
  int v30; // ebx
  int v31; // eax
  _QWORD *v32; // rcx
  _BYTE v34[32]; // [rsp+38h] [rbp-D0h] BYREF
  int v35; // [rsp+60h] [rbp-A8h]
  int v36; // [rsp+70h] [rbp-98h]
  int v37; // [rsp+74h] [rbp-94h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  int v39; // [rsp+80h] [rbp-88h]
  __int64 v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+94h] [rbp-74h]
  _BYTE v43[256]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v44[280]; // [rsp+198h] [rbp+90h] BYREF
  unsigned int v45[54]; // [rsp+2B0h] [rbp+1A8h] BYREF

  memset_0(v34, 0, 0x320uLL);
  QuadPart = (_DWORD *)Timeout.QuadPart;
  v11 = 0;
  v12 = 0LL;
  if ( !Timeout.QuadPart )
  {
    v30 = -1073741578;
    goto LABEL_41;
  }
  *(_DWORD *)Timeout.QuadPart = 1;
  if ( !a7 )
  {
    v30 = -1073741579;
    goto LABEL_41;
  }
  *a7 = 0LL;
  if ( !a1 )
    goto LABEL_55;
  v12 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v12 = 0LL;
LABEL_55:
    v30 = -1073741585;
    goto LABEL_41;
  }
  if ( !(unsigned __int8)Pdcv2pValidateActivationParameters(a2) || !Pdcv2pValidateExtraActivationParameters(a2, 1) )
  {
    v30 = -1073741584;
    goto LABEL_41;
  }
  if ( !pszSrc )
  {
    v30 = -1073741581;
LABEL_41:
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, (_DWORD *)v12, v30);
    if ( !v11 )
      return (unsigned int)v30;
    goto LABEL_42;
  }
  Timeout.QuadPart = -600000000LL;
  while ( 1 )
  {
    v13 = KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, &Timeout);
    if ( !v13 )
      break;
    if ( v13 != 258 )
      goto LABEL_50;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
    *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 16) != KeGetCurrentThread() )
    __fastfail(0x28u);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v30 = -1073740032;
    goto LABEL_40;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 0x258uLL, 0x41434450u);
  v15 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v30 = -1073741801;
    goto LABEL_40;
  }
  *(_DWORD *)(Pool2 + 16) = 1094927440;
  *(_DWORD *)(Pool2 + 20) = 1;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 40) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_QWORD *)(Pool2 + 32) = a3;
  v16 = *(_DWORD *)(a2 + 4);
  *((_DWORD *)v15 + 12) = 1;
  *((_DWORD *)v15 + 13) = v16;
  RtlStringCchCopyW((NTSTRSAFE_PWSTR)v15 + 36, 0x80uLL, pszSrc);
  v18 = *(const wchar_t **)(a2 + 16);
  if ( v18 )
    RtlStringCchCopyW((NTSTRSAFE_PWSTR)v15 + 164, (unsigned int)v17, v18);
  v19 = v43;
  v40 = *(_QWORD *)(a2 + 8);
  v20 = v17;
  v42 = *(_DWORD *)(a2 + 4);
  v35 = 10;
  v39 = 1;
  v41 = 0;
  do
  {
    if ( v20 == -2147483518 )
      break;
    v21 = *(_WORD *)((char *)v19 + (char *)pszSrc - v43);
    if ( !v21 )
      break;
    *v19++ = v21;
    --v20;
  }
  while ( v20 );
  v22 = v19 - 1;
  v23 = v20 == 0;
  v24 = *(_QWORD *)(a2 + 16);
  if ( !v23 )
    v22 = v19;
  *v22 = 0;
  if ( v24 )
  {
    v25 = v24 - (_QWORD)v44;
    v26 = v44;
    do
    {
      if ( v17 == -2147483518 )
        break;
      v27 = *(_WORD *)((char *)v26 + v25);
      if ( !v27 )
        break;
      *v26++ = v27;
      --v17;
    }
    while ( v17 );
    v28 = v26 - 1;
    if ( v17 )
      v28 = v26;
    *v28 = 0;
  }
  v29 = *(char **)(a2 + 24);
  if ( v29 )
    PdcpResizeDiagnosticContext(v29, v45);
  v30 = PdcPortSendMessageSynchronously(*(struct _EX_RUNDOWN_REF **)(a1 + 40), (__int64)v34);
  if ( v30 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
LABEL_40:
    v11 = 1;
    goto LABEL_41;
  }
  v30 = v36;
  v31 = v37;
  *QuadPart = v37;
  if ( v30 >= 0 && v31 != 300 )
  {
    v15[74] = v38;
    *((_BYTE *)v15 + 60) = 0;
    *((_DWORD *)v15 + 14) = v37;
    ++*(_DWORD *)(a1 + 248);
    ++*(_DWORD *)(a1 + 252);
    ++*(_DWORD *)(a1 + 260);
    v32 = *(_QWORD **)(a1 + 88);
    if ( *v32 != a1 + 80 )
      __fastfail(3u);
    v15[1] = v32;
    *v15 = a1 + 80;
    *v32 = v15;
    *(_QWORD *)(a1 + 88) = v15;
    *a7 = v15;
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE((__int64)v15, (_DWORD *)a1, v30);
    goto LABEL_42;
  }
  ExFreePoolWithTag(v15, 0);
  if ( v30 < 0 )
    goto LABEL_40;
LABEL_42:
  if ( !*(_QWORD *)(v12 + 8) || *(struct _KTHREAD **)(v12 + 16) != KeGetCurrentThread() || *(int *)(v12 + 24) <= 0 )
LABEL_50:
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 24), 0xFFFFFFFF) == 1 )
    *(_QWORD *)(v12 + 16) = 0LL;
  KeReleaseMutex(*(PRKMUTEX *)(v12 + 8), 0);
  return (unsigned int)v30;
}
