/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400340F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x140034210 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionToken::InFrame(CCompositionToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int updated; // esi
  __int64 v7; // rbx
  unsigned int (__fastcall *v8)(__int64, __int64); // rdi
  __int64 v9; // rax
  int v11; // edx
  __int64 v12; // r8

  updated = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2604;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            2604,
            v11,
            v12,
            0LL,
            2,
            -1,
            L"m_pGlobal != NULL",
            2604LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v7 = *((_QWORD *)this + 10);
    v8 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304872LL)
                                                         + 72LL);
    v9 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v8(v9, v7) )
    {
      ++*((_DWORD *)this + 10);
      *a3 = 0;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
      *a3 = 1;
    }
  }
  return updated;
}
