/*
 * XREFs of LogLockAllocationBackingStoreToEtw @ 0x1400C3298
 * Callers:
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400C25E0 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2CB4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0xxqXR2_EtwWriteTransfer @ 0x14003DC6C (McTemplateK0xxqXR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056040 (memmove.c)
 */

void __fastcall LogLockAllocationBackingStoreToEtw(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // r13d
  unsigned __int64 i; // rdi
  unsigned int v9; // ebp
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+28h] [rbp-250h]
  _BYTE v15[512]; // [rsp+40h] [rbp-238h] BYREF

  v3 = 0LL;
  v4 = (_QWORD *)a1;
  if ( (byte_140081241 & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 28) & 0x14000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 408);
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 48);
      if ( v5 )
      {
        a2 = *(_QWORD *)(a1 + 248);
        if ( a2 )
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 88LL))(*(_QWORD *)(a1 + 240));
        else
          v6 = *(_QWORD *)(v5 + 72);
        a1 = *(_QWORD *)(v4[6] + 8LL);
        v3 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 56);
      }
    }
    if ( v6 )
    {
      v7 = 0;
      for ( i = *(_QWORD *)(*v4 + 16LL) >> 12; i; i -= v9 )
      {
        if ( i < 0x40 )
          v9 = i;
        else
          v9 = 64;
        v10 = v9;
        memmove(v15, (const void *)(v6 + 8 * (v7 + 6LL)), 8LL * v9);
        do
        {
          ++v7;
          --v10;
        }
        while ( v10 );
        if ( (byte_140081241 & 0x20) != 0 )
        {
          LODWORD(v14) = v9;
          McTemplateK0xxqXR2_EtwWriteTransfer(v12, v11, v13, v3, v4, v14, v15);
        }
      }
    }
    else if ( (byte_140081241 & 0x20) != 0 )
    {
      McTemplateK0xxqXR2_EtwWriteTransfer(a1, a2, a3, v3, v4, 0, 0LL);
    }
  }
}
