/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1400CCC08
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1400CC87C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140042B80 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x14008FD04 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1400C69CC (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C6A4C (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // r10
  int v7; // ecx
  char v8; // bp
  char v9; // dl
  unsigned int v10; // r9d
  int v11; // eax
  unsigned int v12; // ebp
  PVOID v13; // rcx
  __int64 v14; // rdx
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdi
  ULONG_PTR v21; // r8
  bool v22; // cl
  unsigned int *v23; // rdx
  __int64 v24; // rcx
  PVOID *v25; // r14
  int v26; // ebx
  __int64 CurrentPartitionHandle; // rax
  int v28; // ecx
  int v29; // eax
  NTSTATUS inserted; // eax
  NTSTATUS v31; // eax
  PHANDLE Handle; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v33; // [rsp+30h] [rbp-48h]
  void **v34; // [rsp+38h] [rbp-40h]
  ULONG_PTR v35; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+10h] BYREF

  ViewSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v7 = *v3;
  v8 = *((_BYTE *)v3 + 16);
  v9 = *((_BYTE *)v3 + 17);
  if ( (unsigned int)(*v3 - 9) <= 1 )
  {
    *((_DWORD *)this + 32) = 0x800000;
    v10 = 1028;
    if ( *v3 == 10 )
      v10 = 4;
    v11 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *(VIDMM_PROCESS **)(*((_QWORD *)v3 + 1) + 8LL),
            0LL,
            a2,
            0x800000,
            v10,
            (void **)this + 14,
            (unsigned __int64 *)this + 15,
            (void **)this + 5);
    v12 = v11;
    if ( v11 < 0 )
    {
      _InterlockedIncrement(&dword_140081708);
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 6848;
LABEL_8:
      v14 = 262145LL;
LABEL_9:
      DxgkLogInternalTriageEvent((__int64)v13, v14);
      return v12;
    }
    v20 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 132) |= 1u;
LABEL_37:
    v21 = ViewSize;
    *((_QWORD *)this + 6) = v20 + ViewSize;
    goto LABEL_19;
  }
  if ( (unsigned int)(v7 - 3) <= 3 )
  {
    v35 = a2;
    v25 = (PVOID *)((char *)this + 56);
    v26 = ((v7 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
    v28 = v26 | 0x80000;
    v20 = 0LL;
    if ( !v8 )
      v28 = v26;
    v29 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v35, 4, v28, CurrentPartitionHandle, 0LL);
    v12 = v29;
    if ( v29 < 0 )
    {
      _InterlockedIncrement(&dword_1400817C4);
      WdLogSingleEntry1(6LL, v29);
      WdLogGlobalForLineNumber = 6942;
      goto LABEL_8;
    }
    ObfReferenceObject(*v25);
    inserted = ObInsertObject(*v25, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
    v12 = inserted;
    if ( inserted < 0 )
    {
      WdLogSingleEntry2(1LL, *v25, inserted);
      v13 = *v25;
      v14 = 0x40000LL;
      WdLogGlobalForLineNumber = 6963;
      goto LABEL_9;
    }
    if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
    {
      v21 = ViewSize;
      *((_QWORD *)this + 6) = ViewSize;
      *((_QWORD *)this + 5) = 0LL;
      goto LABEL_19;
    }
    v31 = MmMapViewInSystemSpace(*v25, (PVOID *)this + 5, &ViewSize);
    v12 = v31;
    if ( v31 < 0 )
    {
      _InterlockedIncrement(&dword_1400817C4);
      WdLogSingleEntry1(6LL, v31);
      WdLogGlobalForLineNumber = 6977;
      goto LABEL_8;
    }
    v20 = *((_QWORD *)this + 5);
    goto LABEL_37;
  }
  if ( v7 == 2 || (v16 = 1028, v7 == 8) )
    v16 = 4;
  v17 = 0x2000;
  *((_DWORD *)this + 32) = 0x2000;
  if ( v9 )
  {
    v17 = 2105344;
    *((_DWORD *)this + 32) = 2105344;
  }
  if ( v8 )
  {
    v17 |= 0x20400000u;
    *((_DWORD *)this + 32) = v17;
  }
  v18 = v17;
  if ( a3 && !v8 )
  {
    v18 = v17 | 0x800000;
    *((_DWORD *)this + 32) = v17 | 0x800000;
  }
  v19 = VidMmAllocateVirtualMemory((void **)this + 5, &ViewSize, v18, v16);
  v12 = v19;
  if ( v19 < 0 )
  {
    _InterlockedIncrement(&dword_140081708);
    WdLogSingleEntry1(6LL, v19);
    WdLogGlobalForLineNumber = 6894;
    goto LABEL_8;
  }
  v20 = *((_QWORD *)this + 5);
  v21 = ViewSize;
  v22 = (*((_DWORD *)this + 32) & 0x800000) != 0;
  *((_QWORD *)this + 6) = v20 + ViewSize;
  *((_BYTE *)this + 132) = *((_BYTE *)this + 132) & 0xFE | v22;
LABEL_19:
  if ( (byte_140081242 & 4) != 0 )
  {
    v23 = (unsigned int *)*((_QWORD *)this + 4);
    v24 = *v23;
    if ( (unsigned int)(v24 - 3) <= 3 )
      v20 = *((_QWORD *)this + 7);
    LODWORD(v34) = 1;
    LODWORD(v33) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 1) + 8LL) + 8LL);
    LODWORD(Handle) = *v23;
    McTemplateK0pxqqt_EtwWriteTransfer(v24, &EventCreateProcessAllocation, v21, v20, v21, Handle, v33, v34);
  }
  return 0LL;
}
