/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x1409F8880
 * Callers:
 *     _PnpCtxInternalEnumKeyCallback @ 0x14045F250 (_PnpCtxInternalEnumKeyCallback.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // r14
  int v5; // edi
  ULONG v10; // edi
  wchar_t *Pool2; // rax
  wchar_t *v12; // rsi
  wchar_t *v13; // rcx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rax
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  NTSTRSAFE_PWSTR v24; // rcx
  __int128 v25; // xmm1
  ULONG ResultLength[2]; // [rsp+30h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  __int128 KeyInformation; // [rsp+58h] [rbp-21h] BYREF
  __int128 v31; // [rsp+68h] [rbp-11h]
  __int64 v32; // [rsp+78h] [rbp-1h]

  ppszDestEnd = 0LL;
  v4 = 0LL;
  *(_QWORD *)ResultLength = 0LL;
  v5 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  while ( !v5 )
  {
    if ( !wcsicmp(a3, L"Properties") )
      goto LABEL_14;
    v5 = 1;
  }
  v10 = 256;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x42444450u);
  v12 = Pool2;
  if ( Pool2 )
  {
    v13 = Pool2;
    if ( *(_WORD *)(a4 + 8) )
    {
      if ( RtlStringCchCopyExW(
             Pool2,
             0x100uLL,
             (NTSTRSAFE_PCWSTR)(a4 + 8),
             &ppszDestEnd,
             (size_t *)ResultLength,
             0x900u) < 0
        || *(_QWORD *)ResultLength < 2uLL )
      {
        goto LABEL_13;
      }
      v24 = ppszDestEnd;
      v10 = ResultLength[0] - 2;
      *ppszDestEnd = 92;
      v13 = v24 + 1;
      *v13 = 0;
    }
    if ( RtlStringCchCopyW(v13, v10, a3) < 0 )
      goto LABEL_13;
    if ( a1 && (v15 = *(_QWORD *)(a1 + 224)) != 0 )
      v16 = *(_QWORD *)(v15 + 8);
    else
      v16 = v14;
    if ( (int)RegRtlOpenKeyTransacted(a2, a3, 8u, 0x20019u, &KeyHandle, v16) < 0 )
      goto LABEL_13;
    v17 = 4LL;
    ResultLength[0] = 0;
    v32 = 0LL;
    KeyInformation = 0LL;
    v31 = 0LL;
    if ( ZwQueryKey(KeyHandle, KeyCachedInformation, &KeyInformation, 0x28u, ResultLength) < 0 )
      goto LABEL_13;
    if ( !HIDWORD(KeyInformation) || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
    {
LABEL_18:
      if ( DWORD1(v31)
        && (!*(_QWORD *)(a4 + 520) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v12))
        && RtlInitUnicodeStringEx(&DestinationString, v12) >= 0 )
      {
        v19 = *(_DWORD *)(a4 + 544);
        v20 = DestinationString.MaximumLength >> 1;
        *(_DWORD *)(a4 + 548) += v20;
        if ( v19 > v20 )
        {
          RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v19, v12, 0LL, 0LL, 0x900u);
          *(_QWORD *)(a4 + 536) += 2LL * v20;
          *(_DWORD *)(a4 + 544) -= v20;
        }
      }
      if ( v4 )
        ExFreePoolWithTag((PVOID)v4, 0);
      goto LABEL_13;
    }
    v21 = ExAllocatePool2(0x100uLL, 0x228uLL, 0x42444450u);
    v4 = v21;
    if ( v21 )
    {
      v22 = (_OWORD *)v21;
      v23 = (_OWORD *)a4;
      do
      {
        *v22 = *v23;
        v22[1] = v23[1];
        v22[2] = v23[2];
        v22[3] = v23[3];
        v22[4] = v23[4];
        v22[5] = v23[5];
        v22[6] = v23[6];
        v22 += 8;
        v25 = v23[7];
        v23 += 8;
        *(v22 - 1) = v25;
        --v17;
      }
      while ( v17 );
      *v22 = *v23;
      v22[1] = v23[1];
      *((_QWORD *)v22 + 4) = *((_QWORD *)v23 + 4);
      ++*(_DWORD *)(v4 + 4);
      RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v4 + 8), 0x100uLL, v12, 0LL, 0LL, 0x900u);
      PnpCtxRegEnumKeyWithCallback(a1, KeyHandle, DrvDbGetObjectSubKeyCallback, v4);
      *(_QWORD *)(a4 + 536) = *(_QWORD *)(v4 + 536);
      *(_DWORD *)(a4 + 544) = *(_DWORD *)(v4 + 544);
      *(_DWORD *)(a4 + 548) = *(_DWORD *)(v4 + 548);
      goto LABEL_18;
    }
LABEL_13:
    ExFreePoolWithTag(v12, 0);
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0LL;
}
