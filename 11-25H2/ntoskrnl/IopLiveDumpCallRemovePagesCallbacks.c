/*
 * XREFs of IopLiveDumpCallRemovePagesCallbacks @ 0x140596458
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1405972B0 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     RtlStringCbLengthA @ 0x14055D514 (RtlStringCbLengthA.c)
 *     IoFreeDumpRange @ 0x14058E080 (IoFreeDumpRange.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059AADC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceNoArgs @ 0x14059FC50 (IopLiveDumpTraceNoArgs.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405AEFE0 (KeValidateBugCheckCallbackRecord.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 *__fastcall IopLiveDumpCallRemovePagesCallbacks(_DWORD *a1)
{
  _DWORD *v1; // r13
  unsigned int v2; // edi
  const CHAR *v3; // rsi
  bool IsTracingEnabled; // r12
  __int64 v5; // r14
  __int64 *result; // rax
  __int64 v7; // rcx
  bool v8; // r13
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // rdx
  int v13; // eax
  size_t pcbLength; // [rsp+38h] [rbp-D0h] BYREF
  const CHAR *v15; // [rsp+40h] [rbp-C8h]
  _DWORD *v16; // [rsp+48h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B8h]
  __int128 v18; // [rsp+60h] [rbp-A8h]
  _QWORD v19[4]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v20; // [rsp+90h] [rbp-78h] BYREF
  __int128 v21; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+C0h] [rbp-48h]
  const CHAR *v24; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+DCh] [rbp-2Ch]

  v1 = a1;
  v16 = a1;
  v19[3] = a1;
  v17 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v2 = 1;
  pcbLength = 1LL;
  v3 = &File;
  v15 = &File;
  IsTracingEnabled = IopLiveDumpIsTracingEnabled();
  if ( IsTracingEnabled )
    IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_START);
  v5 = KeBugCheckAddRemovePagesCallbackListHead;
  result = &KeBugCheckAddRemovePagesCallbackListHead;
  v19[0] = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v19[1] = v5;
    if ( (__int64 *)v5 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    v19[2] = v5;
    result = (__int64 *)KeValidateBugCheckCallbackRecord(v5, 6LL, v19);
    if ( (_BYTE)result )
    {
      if ( IsTracingEnabled )
      {
        v7 = *(_QWORD *)(v5 + 24);
        if ( v7 && MmIsAddressValidEx(v7) && RtlStringCbLengthA(*(STRSAFE_PCNZCH *)(v5 + 24), 0x101uLL, &pcbLength) >= 0 )
        {
          v3 = *(const CHAR **)(v5 + 24);
          v2 = ++pcbLength;
        }
        else
        {
          pcbLength = 1LL;
          v2 = 1;
          v3 = &File;
        }
        v15 = v3;
        v24 = v3;
        v25 = v2;
        v26 = 0;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_START, 1LL, &v24);
      }
      *(_QWORD *)&v17 = 0LL;
      HIDWORD(v17) = *v1;
      do
      {
        v18 = 0uLL;
        DWORD2(v17) = 0;
        v8 = 0;
        guard_dispatch_icall_no_overrides(6LL);
        if ( *((_QWORD *)&v18 + 1) )
        {
          v9 = DWORD2(v17);
          if ( (DWORD2(v17) & 0x80000003) != 0 )
          {
            v10 = DWORD2(v17) & 0x80000000;
            if ( SDWORD2(v17) < 0 )
            {
              v9 = DWORD2(v17) & 0x7FFFFFFF;
              DWORD2(v17) &= ~0x80000000;
            }
            v8 = v10 != 0;
            if ( ((v9 - 1) & v9) != 0 )
            {
              v13 = -1073741811;
            }
            else
            {
              v11 = v9 & 1;
              v12 = (char *)v18;
              if ( !v11 )
                v12 = (char *)((unsigned __int64)v18 >> 12);
              v20 = *((_OWORD *)v16 + 36);
              *(_QWORD *)&v22 = &v20;
              v13 = IoFreeDumpRange((__int64)&v21, v12, *((__int64 *)&v18 + 1), 2 * (v11 ^ 1u));
            }
            if ( v13 < 0 )
            {
              v8 = 0;
              IopLiveDumpTraceRemovePagesCallbackFailure(v3, v2, (unsigned int)v13);
            }
          }
        }
      }
      while ( v8 );
      if ( IsTracingEnabled )
      {
        v24 = v3;
        v25 = v2;
        v26 = 0;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_END, 1LL, &v24);
      }
      v1 = v16;
    }
    else if ( !v19[0] )
    {
      break;
    }
    v5 = *(_QWORD *)v5;
    result = &KeBugCheckAddRemovePagesCallbackListHead;
  }
  if ( IsTracingEnabled )
    return (__int64 *)IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACKS_END);
  return result;
}
