/*
 * XREFs of PipMakeGloballyUniqueId @ 0x140A4FA70
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipMakeGloballyUniqueId(__int64 a1, __int64 a2, wchar_t **a3)
{
  __int64 v3; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r14
  wchar_t **v7; // r12
  wchar_t *v8; // r15
  wchar_t *v9; // rdi
  __int64 v10; // rsi
  int CachedContextBaseKey; // ebx
  unsigned int v12; // r13d
  wchar_t *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  wchar_t *v16; // rax
  unsigned int v18; // r13d
  wchar_t *Pool2; // rax
  NTSTATUS v20; // eax
  int v21; // edx
  wchar_t *i; // rcx
  int v23; // ebx
  int v24; // ebx
  unsigned int v25; // eax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  __int64 v28; // [rsp+30h] [rbp-69h]
  __int64 v29; // [rsp+38h] [rbp-61h]
  ULONG v30; // [rsp+50h] [rbp-49h] BYREF
  wchar_t **v31; // [rsp+58h] [rbp-41h]
  int Data; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-31h] BYREF
  HANDLE v34; // [rsp+78h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-19h] BYREF
  int v36; // [rsp+88h] [rbp-11h]
  size_t cbDest; // [rsp+90h] [rbp-9h]
  __int64 v38; // [rsp+98h] [rbp-1h]
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v40; // [rsp+A4h] [rbp+Bh]
  int v41; // [rsp+A8h] [rbp+Fh]
  unsigned int v42; // [rsp+ACh] [rbp+13h]

  v3 = 0LL;
  v38 = a2;
  Data = 0;
  KeyHandle = 0LL;
  v30 = 0;
  ValueName = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = -1LL;
  v31 = a3;
  v7 = a3;
  v34 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  v10 = 0LL;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  CachedContextBaseKey = CmOpenDeviceRegKey(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(v3 + 48),
                           16,
                           0,
                           131103,
                           0,
                           (__int64)&KeyHandle,
                           0LL);
  if ( CachedContextBaseKey >= 0 )
  {
    ValueName.Buffer = L"UniqueParentID";
    *(_DWORD *)&ValueName.Length = 1966108;
    CachedContextBaseKey = ZwQueryValueKey(
                             KeyHandle,
                             &ValueName,
                             KeyValuePartialInformation,
                             KeyValueInformation,
                             0x10u,
                             &v30);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( v40 != 4 || v41 != 4 )
      {
        CachedContextBaseKey = -1073741811;
        goto LABEL_17;
      }
      v18 = v42;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x12uLL, 0x6E657050u);
      v9 = Pool2;
      if ( Pool2 )
      {
        RtlStringCbPrintfW(Pool2, 0x12uLL, L"%x", v18);
LABEL_10:
        v14 = v38;
        if ( v38 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( *(_WORD *)(v38 + 2 * v15) );
        }
        else
        {
          LODWORD(v15) = 0;
        }
        do
          ++v6;
        while ( v9[v6] );
        v30 = v6 + v15 + 2;
        v16 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v30, 0x6E657050u);
        v8 = v16;
        if ( v16 )
        {
          if ( v14 )
            RtlStringCchPrintfW(v16, v30, L"%s&%s", v9, v14);
          else
            RtlStringCchCopyW(v16, v30, v9);
          goto LABEL_16;
        }
      }
    }
    else
    {
      *(_DWORD *)&ValueName.Length = 1966108;
      ValueName.Buffer = L"ParentIdPrefix";
      v30 = 66;
      v10 = ExAllocatePool2(0x100uLL, 0x42uLL, 0x6E657050u);
      if ( v10 )
      {
        CachedContextBaseKey = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)v10, v30, &v30);
        if ( CachedContextBaseKey < 0 )
        {
          v30 = 31;
          v20 = RtlUpcaseUnicodeString(&ValueName, (PCUNICODE_STRING)(v3 + 40), 1u);
          v21 = 0;
          CachedContextBaseKey = v20;
          if ( v20 < 0 )
            goto LABEL_16;
          for ( i = ValueName.Buffer; i < &ValueName.Buffer[(unsigned __int64)ValueName.Length >> 1]; ++i )
            v21 = *i + 37 * v21;
          v23 = -314159269 * v21;
          if ( -314159269 * v21 < 0 )
            v23 = 314159269 * v21;
          v24 = v23 % 1000000007;
          v36 = v24;
          RtlFreeAnsiString(&ValueName);
          cbDest = 2 * v30;
          v9 = (wchar_t *)ExAllocatePool2(0x100uLL, cbDest, 0x6E657050u);
          if ( !v9 )
            goto LABEL_15;
          LODWORD(ResultLength) = *(_DWORD *)(v3 + 152);
          Length[0] = v24;
          RtlStringCbPrintfW(v9, cbDest, L"%s.%x.%x", L"NextParentID", *(_QWORD *)Length, ResultLength);
          CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 5, &v34);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          RtlInitUnicodeString(&ValueName, v9);
          if ( ZwQueryValueKey(v34, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &v30) < 0
            || v40 != 4
            || (v25 = v42, v41 != 4) )
          {
            v25 = 0;
          }
          Data = v25 + 1;
          CachedContextBaseKey = ZwSetValueKey(v34, &ValueName, 0, 4u, &Data, 4u);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          ValueName.Buffer = L"ParentIdPrefix";
          --Data;
          LODWORD(v29) = v36;
          *(_DWORD *)&ValueName.Length = 1966108;
          LODWORD(v28) = *(_DWORD *)(v3 + 152);
          v34 = v9;
          RtlStringCchPrintfExW(v9, cbDest >> 1, (NTSTRSAFE_PWSTR *)&v34, 0LL, 0, L"%x&%x&%x", v28, v29, Data);
          v30 = (((_BYTE *)v34 - (_BYTE *)v9) >> 1) + 1;
          CachedContextBaseKey = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v9, 2 * v30);
          if ( CachedContextBaseKey < 0 )
            goto LABEL_16;
          goto LABEL_10;
        }
        if ( *(_DWORD *)(v10 + 4) != 1 )
        {
          CachedContextBaseKey = -1073741811;
          goto LABEL_16;
        }
        v12 = *(_DWORD *)(v10 + 8);
        v13 = (wchar_t *)ExAllocatePool2(0x100uLL, v12, 0x6E657050u);
        v9 = v13;
        if ( v13 )
        {
          RtlStringCbCopyW(v13, v12, (NTSTRSAFE_PCWSTR)(v10 + 12));
          goto LABEL_10;
        }
      }
    }
LABEL_15:
    CachedContextBaseKey = -1073741670;
LABEL_16:
    v7 = v31;
LABEL_17:
    ZwClose(KeyHandle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v10 )
    ExFreePoolWithTag((PVOID)v10, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *v7 = v8;
  return (unsigned int)CachedContextBaseKey;
}
