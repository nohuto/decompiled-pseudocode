/*
 * XREFs of ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@H@Z @ 0x1400F4DA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400F4F30 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::NotifyAllocationReclaimed(VIDMM_SEGMENT ***this, struct VIDMM_PARTITION ***a2, int a3)
{
  struct VIDMM_PARTITION **v5; // rbp
  VIDMM_SEGMENT *v6; // rax
  struct VIDMM_PARTITION **v7; // rdx
  struct VIDMM_PARTITION **v8; // rcx
  VIDMM_SEGMENT **v9; // rdx
  struct VIDMM_PARTITION **v10; // rcx
  __int64 v11; // rcx

  if ( a3 )
  {
    v5 = *a2;
    VIDMM_SEGMENT::DecrementBytesResident(
      (VIDMM_SEGMENT *)this,
      *a2[42],
      (unsigned __int64)(*a2)[2],
      ((_DWORD)a2[3] & 0x200) != 0);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer();
    if ( ((_DWORD)this[13] & 0x1001) != 0 )
    {
      v10 = a2[43];
      if ( (!v10 || _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 10, 0xFFFFFFFF) == 1)
        && _InterlockedExchangeAdd64((volatile signed __int64 *)*a2[42] + 8, -(__int64)v5[2]) < (unsigned __int64)v5[2] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2268;
        DxgkLogInternalTriageEvent(v11, 0x40000LL);
      }
      this[3][5027] = (VIDMM_SEGMENT *)((char *)this[3][5027] - (unsigned __int64)v5[2]);
    }
  }
  v6 = (VIDMM_SEGMENT *)(a2 + 31);
  v7 = a2[31];
  if ( v7[1] != (struct VIDMM_PARTITION *)(a2 + 31)
    || (v8 = a2[32], *v8 != v6)
    || (*v8 = (struct VIDMM_PARTITION *)v7,
        v7[1] = (struct VIDMM_PARTITION *)v8,
        v9 = this[30],
        *v9 != (VIDMM_SEGMENT *)(this + 29)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v6 = this + 29;
  a2[32] = v9;
  *v9 = v6;
  this[30] = (VIDMM_SEGMENT **)v6;
}
