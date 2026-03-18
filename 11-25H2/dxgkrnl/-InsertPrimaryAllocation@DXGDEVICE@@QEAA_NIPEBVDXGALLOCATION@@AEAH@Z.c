/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1400132CC
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403CCE14 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r14
  char v12; // bl
  unsigned int i; // ecx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v18; // ebp
  unsigned __int64 v19; // rax
  void *v20; // rax
  void *v21; // r12
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // r8d
  _BYTE v27[32]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (DXGDEVICE *)((char *)this + 336));
  v9 = *((_DWORD *)this + v4 + 310);
  v10 = (unsigned int)v4;
  v11 = *((unsigned int *)this + v4 + 246);
  v12 = 0;
  if ( (_DWORD)v11 == (unsigned __int8)v9 )
  {
    v18 = 2 * v11;
    if ( (unsigned int)(2 * v11) >= 0xFF )
    {
      v18 = 255;
    }
    else if ( v18 < 4 )
    {
      v18 = 4;
    }
    if ( v18 == (_DWORD)v11 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 807;
      DxgkLogInternalTriageEvent(
        0,
        0x40000,
        -1,
        (unsigned int)L"Reached maximum number of primary allocation, rejecting this request",
        807LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_7;
    }
    v19 = 8LL * v18;
    if ( !is_mul_ok(v18, 8uLL) )
      v19 = -1LL;
    v20 = (void *)operator new[](v19, 0x4B677844u, 256LL, v8);
    v21 = v20;
    if ( !v20 )
    {
      WdLogSingleEntry1(6LL, v18);
      WdLogGlobalForLineNumber = 814;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v23,
          v22,
          v24,
          0,
          1,
          -1,
          (__int64)L"Failed to grow device primary allocation array to %d entries",
          v18,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_7;
    }
    if ( (_DWORD)v11 )
    {
      memmove(v20, *((const void **)this + v10 + 107), 8 * v11);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + v10 + 107));
    }
    v6 = a4;
    *((_QWORD *)this + v10 + 107) = v21;
    *((_DWORD *)this + v10 + 246) = v18;
  }
  for ( i = 0; i < *((_DWORD *)this + v10 + 246); ++i )
  {
    v14 = i;
    if ( !*(_QWORD *)(*((_QWORD *)this + v10 + 107) + 8LL * i) )
    {
      v15 = WdLogNewEntry5_WdTrace();
      v12 = 1;
      *(_QWORD *)(v15 + 24) = a3;
      *(_QWORD *)(v15 + 32) = v10;
      v16 = *((_QWORD *)this + v10 + 107);
      WdLogGlobalForLineNumber = 845;
      *(_QWORD *)(v16 + 8 * v14) = a3;
      ++*((_BYTE *)this + 4 * v10 + 1240);
      *v6 = (*((_DWORD *)this + v10 + 310) >> 8) & 1;
      goto LABEL_7;
    }
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 859;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      859,
      v25,
      v26,
      0,
      2,
      -1,
      (__int64)L"Can't find room in device primary allocation array",
      859LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return v12;
}
