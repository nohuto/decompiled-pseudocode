/*
 * XREFs of SmmAllocateAdl @ 0x14003A298
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140039F40 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

_QWORD *__fastcall SmmAllocateAdl(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *Pool2; // rbx
  __int64 v9; // r9
  int v11; // edx
  __int64 v12; // r8
  _QWORD *v13; // rax

  v6 = 0LL;
  v7 = 24LL;
  if ( !a2 )
    v7 = 8LL * a1 + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v7, 846428228LL, a4);
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_14015E654);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 112;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        112,
        v11,
        v12,
        0LL,
        1,
        -1,
        L"Failed to allocate SYSMM_ADL",
        112LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 0LL;
  }
  if ( (dword_14015E600 & 0x20) != 0 )
  {
    v13 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 846428228LL, v9);
    v6 = v13;
    if ( v13 )
    {
      *v13 = 0LL;
      v13[2] = 0LL;
      v13[3] = Pool2;
      goto LABEL_5;
    }
    _InterlockedIncrement(&dword_14015E658);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 121;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate SYSMM_ADL_DEBUG",
      121LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
LABEL_5:
  *Pool2 = v6;
  *((_DWORD *)Pool2 + 2) = a1;
  *((_DWORD *)Pool2 + 3) = a2 == 1;
  if ( (unsigned int)(a2 - 1) > 1 )
    Pool2[2] = Pool2 + 3;
  else
    Pool2[2] = 0LL;
  return Pool2;
}
