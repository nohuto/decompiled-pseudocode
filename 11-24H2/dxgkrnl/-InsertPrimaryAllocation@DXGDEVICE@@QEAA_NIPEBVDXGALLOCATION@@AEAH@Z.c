/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1400226A4
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403C0104 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r14
  char v11; // bl
  unsigned int i; // ecx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  void *v19; // rax
  void *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  _BYTE v26[32]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (DXGDEVICE *)((char *)this + 336));
  v8 = *((_DWORD *)this + v4 + 310);
  v9 = (unsigned int)v4;
  v10 = *((unsigned int *)this + v4 + 246);
  v11 = 0;
  if ( (_DWORD)v10 == (unsigned __int8)v8 )
  {
    v17 = 2 * v10;
    if ( (unsigned int)(2 * v10) >= 0xFF )
    {
      v17 = 255;
    }
    else if ( v17 < 4 )
    {
      v17 = 4;
    }
    if ( v17 == (_DWORD)v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 807;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Reached maximum number of primary allocation, rejecting this request",
        807LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_7;
    }
    v18 = 8LL * v17;
    if ( !is_mul_ok(v17, 8uLL) )
      v18 = -1LL;
    v19 = (void *)operator new[](v18, 0x4B677844u, 256LL);
    v20 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry1(6LL, v17);
      WdLogGlobalForLineNumber = 814;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v22,
          v21,
          v23,
          0LL,
          1,
          -1,
          L"Failed to grow device primary allocation array to %d entries",
          v17,
          0,
          0,
          0,
          0);
      goto LABEL_7;
    }
    if ( (_DWORD)v10 )
    {
      memmove(v19, *((const void **)this + v9 + 107), 8 * v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + v9 + 107));
    }
    v6 = a4;
    *((_QWORD *)this + v9 + 107) = v20;
    *((_DWORD *)this + v9 + 246) = v17;
  }
  for ( i = 0; i < *((_DWORD *)this + v9 + 246); ++i )
  {
    v13 = i;
    if ( !*(_QWORD *)(*((_QWORD *)this + v9 + 107) + 8LL * i) )
    {
      v14 = WdLogNewEntry5_WdTrace();
      v11 = 1;
      *(_QWORD *)(v14 + 24) = a3;
      *(_QWORD *)(v14 + 32) = v9;
      v15 = *((_QWORD *)this + v9 + 107);
      WdLogGlobalForLineNumber = 845;
      *(_QWORD *)(v15 + 8 * v13) = a3;
      ++*((_BYTE *)this + 4 * v9 + 1240);
      *v6 = (*((_DWORD *)this + v9 + 310) >> 8) & 1;
      goto LABEL_7;
    }
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 859;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      859LL,
      v24,
      v25,
      0LL,
      2,
      -1,
      L"Can't find room in device primary allocation array",
      91,
      0,
      0,
      0,
      0);
LABEL_7:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  return v11;
}
