/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1402AEB70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // edi
  int v7; // ecx
  unsigned int i; // ebx
  PVOID *v9; // rax
  unsigned int v10; // edi
  unsigned int j; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rsi
  void *v17; // rcx
  NTSTATUS v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  PVOID *v22; // rbx
  int v23; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-D0h]
  char v25; // [rsp+60h] [rbp-C8h]
  PVOID v26; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v28[10]; // [rsp+80h] [rbp-A8h] BYREF
  PVOID Object[8]; // [rsp+D0h] [rbp-58h] BYREF

  v3 = (const void *)a1;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2083);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2083);
  memset(v28, 0, sizeof(v28));
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v28, v3, 0x50uLL);
  if ( HIDWORD(v28[1]) > 8 )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(3LL, HIDWORD(v28[1]), 32LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8292;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v4);
    if ( Current )
    {
      v6 = HIDWORD(v28[1]);
      if ( !HIDWORD(v28[1])
        || (v7 = *((_DWORD *)Current + 102), (v7 & 4) != 0)
        || g_OSTestSigningEnabled && (v7 & 0x2000) != 0 )
      {
        memset(Object, 0, sizeof(Object));
        for ( i = 0; ; ++i )
        {
          if ( i >= v6 )
          {
            v27 = -800000LL;
            v9 = Object;
            if ( !v6 )
              v9 = 0LL;
            v10 = DxgkWaitForVerticalBlankEventInternal(
                    LODWORD(v28[0]),
                    HIDWORD(v28[0]),
                    LODWORD(v28[1]),
                    v6,
                    v9,
                    &v27,
                    0);
            for ( j = 0; j < HIDWORD(v28[1]); ++j )
              ObfDereferenceObject(Object[j]);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v23);
            }
            return v10;
          }
          v15 = i;
          v16 = &v28[i + 2];
          v17 = (void *)*v16;
          v26 = 0LL;
          v18 = ObReferenceObjectByHandle(v17, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &v26, 0LL);
          Object[i] = v26;
          if ( v18 < 0 )
            break;
          v6 = HIDWORD(v28[1]);
        }
        if ( i )
        {
          v22 = Object;
          do
          {
            ObfDereferenceObject(*v22++);
            --v15;
          }
          while ( v15 );
        }
        v19 = -1073741811;
        WdLogSingleEntry2(3LL, *v16, -1073741811LL);
        WdLogGlobalForLineNumber = 8333;
      }
      else
      {
        v19 = -1073741790;
        WdLogSingleEntry1(3LL, -1073741790LL);
        WdLogGlobalForLineNumber = 8310;
      }
    }
    else
    {
      v19 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8301;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v23);
  return v19;
}
