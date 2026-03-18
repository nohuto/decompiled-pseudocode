/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x140043660
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidSchSuspendAdapter @ 0x1400E4A30 (VidSchSuspendAdapter.c)
 *     VidSchResumeAdapter @ 0x140101FA0 (VidSchResumeAdapter.c)
 */

__int64 __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  char v3; // bp
  int v4; // r12d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-78h]
  __int64 v12; // [rsp+28h] [rbp-70h]
  __int64 v13; // [rsp+30h] [rbp-68h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  char v17; // [rsp+60h] [rbp-38h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v17 = 1;
    v15 = 4024;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v17 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[82])(&v15, 4024LL);
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[15])(a1, 3LL);
  if ( *(_DWORD *)(a1 + 200) == 1 )
  {
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 3004);
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 3128) + 744LL);
    _InterlockedExchange((volatile __int32 *)(v6 + 2712), 0);
    if ( *(_DWORD *)(v6 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * v5 + 3432) + 78944LL), 0, 3) == 3 )
        {
          if ( *(int *)(a1 + 3004) < 3100 )
          {
            if ( v4 >= 3000 && !v3 )
            {
              VidSchSuspendAdapter(v6, 0LL, 0LL);
              v3 = 1;
            }
          }
          else
          {
            v3 = 0;
          }
          LOBYTE(v2) = 1;
          LOBYTE(v11) = v3;
          v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))DxgCoreInterface[33])(
                 *(_QWORD *)(a1 + 3120),
                 v5,
                 v2,
                 0x2000LL,
                 v11,
                 v12,
                 v13,
                 v14);
          if ( v8 < 0 )
          {
            v9 = v8;
            WdLogSingleEntry3(1LL, v5, a1, v8);
            v14 = 0LL;
            v13 = v9;
            v12 = a1;
            v11 = v5;
            WdLogGlobalForLineNumber = 29443;
            DxgkLogInternalTriageEvent(v10, 0x40000LL);
          }
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(v6 + 40) );
      if ( v3 )
        VidSchResumeAdapter(v6, 0LL);
    }
  }
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[16])(a1, 3LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ((void (__fastcall *)(_QWORD, __int64))DxgCoreInterface[4])(*(_QWORD *)(a1 + 16), a1);
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[83])(&v15);
  if ( v17 )
  {
    if ( (byte_140081242 & 1) != 0 )
      return McTemplateK0q_EtwWriteTransfer();
  }
  return result;
}
