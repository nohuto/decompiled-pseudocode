/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400F5C14
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x140100840 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5B58 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C67BC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C68DC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1400F6370 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1400F63BC (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        union _LARGE_INTEGER a1,
        __int64 *a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8)
{
  int v8; // ebx
  __int64 v9; // r12
  char v10; // r14
  __int64 v11; // rdi
  union _LARGE_INTEGER v12; // r15
  SIZE_T v13; // r13
  union _LARGE_INTEGER *v14; // rbx
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // r10
  HANDLE v20; // rax
  union _LARGE_INTEGER v21; // rax
  NTSTATUS v22; // eax
  void *v23; // rcx
  unsigned __int64 v24; // rbx
  struct _EPROCESS *v25; // rax
  PMDL v27; // rax
  struct _MDL *v28; // r11
  __int64 v29; // rcx
  __int64 CurrentProcess; // rax
  ULONG_PTR v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  PVOID v34; // rdi
  NTSTATUS (__stdcall *v35)(PMDL, PMDL, PVOID); // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // r9
  __int64 *v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rdx
  PHYSICAL_ADDRESS v45; // rdi
  union _LARGE_INTEGER v46; // r15
  PHYSICAL_ADDRESS v47; // rbx
  SIZE_T v48; // r12
  char *VirtualAddress; // [rsp+58h] [rbp-41h]
  SIZE_T v50; // [rsp+60h] [rbp-39h]
  ULONG_PTR v51; // [rsp+68h] [rbp-31h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+70h] [rbp-29h] BYREF
  union _LARGE_INTEGER v53; // [rsp+78h] [rbp-21h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+80h] [rbp-19h] BYREF
  ULONG_PTR v55; // [rsp+88h] [rbp-11h] BYREF
  union _LARGE_INTEGER v56; // [rsp+90h] [rbp-9h] BYREF
  union _LARGE_INTEGER v57; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 *v58; // [rsp+F0h] [rbp+57h] BYREF
  int v59; // [rsp+F8h] [rbp+5Fh]
  PMDL NewMdl; // [rsp+100h] [rbp+67h]

  NewMdl = a4;
  v59 = a3;
  v58 = a2;
  v57 = a1;
  v10 = 0;
  v11 = a3;
  v12 = a1;
  v13 = 0LL;
  if ( *(_DWORD *)(a1.QuadPart + 200) == 4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 11LL, a3, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_56;
  }
  v14 = *(union _LARGE_INTEGER **)(a1.QuadPart + 64);
  v9 = 1LL;
  v15 = 0;
  while ( !v15 )
  {
    if ( v14[8].LowPart == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        (VIDMM_RECYCLE_HEAP_MGR *)a1.QuadPart,
        (struct VIDMM_RECYCLE_RANGE *)v14);
      LOBYTE(v58) = 0;
      v32 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v14, (bool *)&v58);
      v13 = (unsigned int)v32;
      if ( v32 < 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          3LL,
          v14,
          (union _LARGE_INTEGER)v12.QuadPart,
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12.QuadPart + 80) + 32LL) + 8LL) + 8LL));
        v33 = *(_QWORD *)(v12.QuadPart + 80);
        WdLogGlobalForLineNumber = 3473;
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v33 + 32) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v14);
        return (unsigned int)v13;
      }
    }
    if ( v14 == *(union _LARGE_INTEGER **)(v12.QuadPart + 72) )
    {
      v15 = 1;
    }
    else
    {
      a1 = v14[15];
      if ( a1.QuadPart == v14[9].QuadPart + 72 )
        v14 = 0LL;
      else
        v14 = (union _LARGE_INTEGER *)(a1.QuadPart - 120);
    }
  }
  VirtualAddress = *(char **)(v12.QuadPart + 48);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((VIDMM_RECYCLE_MULTIRANGE *)v12.QuadPart) )
  {
    if ( (unsigned int)v11 < 2 )
      goto LABEL_81;
    v29 = (unsigned int)(v11 - 2);
    if ( (unsigned int)v29 > 1 )
      return (unsigned int)v13;
    CurrentProcess = PsGetCurrentProcess(v29, v16, v17, v18);
    g_DxgMmsBugcheckExportIndex = 1;
    v21.QuadPart = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
                     0LL,
                     270LL,
                     1LL,
                     CurrentProcess,
                     (union _LARGE_INTEGER)v12.QuadPart,
                     v11);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_40;
  }
  if ( (unsigned int)v11 > 1 )
  {
    v13 = *(_QWORD *)(v12.QuadPart + 136);
    v50 = v13;
LABEL_10:
    v15 = a8;
    v21.QuadPart = -10000LL;
    if ( (_DWORD)v11 != 2 )
    {
      if ( (_DWORD)v11 == 3 )
      {
        v53.QuadPart = -10000LL;
        v8 = a8 & 1;
        NumberOfBytes = v13;
        while ( 1 )
        {
          v22 = MmRotatePhysicalView(v19, &NumberOfBytes, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
          LODWORD(v13) = v22;
          if ( !v8 || v22 != 1073741849 )
            break;
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3661;
          if ( ((unsigned __int8)v9 & (unsigned __int8)byte_140081241) != 0 )
LABEL_56:
            McTemplateK0q_EtwWriteTransfer();
          v34 = Context;
          v35 = CopyFunction;
          while ( MmRotatePhysicalView(
                    VirtualAddress,
                    &NumberOfBytes,
                    *(PMDL *)(v12.QuadPart + 144),
                    (MM_ROTATE_DIRECTION)v9,
                    v35,
                    v34) < 0 )
            KeDelayExecutionThread(0, 0, &v53);
          KeDelayExecutionThread(0, 0, &v53);
          v15 = a8;
          v19 = VirtualAddress;
          LODWORD(v11) = v59;
        }
      }
      else
      {
        if ( (a8 & 2) != 0 )
        {
          v28 = *(struct _MDL **)(v12.QuadPart + 144);
          NewMdl = v28;
        }
        else
        {
          v28 = NewMdl;
        }
        v55 = v13;
        if ( g_bInjectRotateFailure )
        {
          LODWORD(v13) = -1073741823;
        }
        else
        {
          LODWORD(v13) = MmRotatePhysicalView(v19, &v55, v28, (MM_ROTATE_DIRECTION)v11, CopyFunction, Context);
          if ( (v13 & 0x80000000) == 0LL )
            goto LABEL_16;
        }
        if ( (v15 & 2) == 0 )
          goto LABEL_33;
        ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 144), 0);
        *(_QWORD *)(v12.QuadPart + 144) = 0LL;
      }
LABEL_15:
      if ( (v13 & 0x80000000) == 0LL )
      {
LABEL_16:
        if ( (unsigned int)v11 <= (unsigned int)v9 )
        {
          v24 = v50;
          v10 = v9;
          v27 = NewMdl;
          *(_QWORD *)(v12.QuadPart + 136) = v50;
          *(_QWORD *)(v12.QuadPart + 144) = v27;
        }
        else
        {
          if ( (v15 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 144), 0);
            v23 = *(void **)(v12.QuadPart + 176);
            *(_QWORD *)(v12.QuadPart + 144) = 0LL;
            if ( v23 )
            {
              MmUnsecureVirtualMemory(v23);
              *(_QWORD *)(v12.QuadPart + 176) = 0LL;
            }
          }
          v24 = v50;
        }
        *(_BYTE *)(v12.QuadPart + 130) = v10;
LABEL_22:
        v25 = (struct _EPROCESS *)PsGetCurrentProcess(v23, v16, v17, v18);
        VIDMM_GLOBAL::RecordRotation(v25, VirtualAddress, v24, NewMdl, (enum _MM_ROTATE_DIRECTION)v11, v13);
        return (unsigned int)v13;
      }
LABEL_33:
      if ( (_DWORD)v13 != -1073741558 || (int)v11 - 2 > (unsigned int)v9 )
      {
LABEL_34:
        v23 = *(void **)(v12.QuadPart + 176);
        if ( v23 )
        {
          MmUnsecureVirtualMemory(v23);
          *(_QWORD *)(v12.QuadPart + 176) = 0LL;
        }
        v24 = v50;
        goto LABEL_22;
      }
      v37 = *(_QWORD *)(v12.QuadPart + 144);
      if ( v37 )
      {
        v38 = v9;
        v39 = *(_QWORD *)(v37 + 48);
        v40 = *(_DWORD *)(v37 + 40) >> 12;
        v41 = v39;
        if ( v40 > (unsigned int)v9 )
        {
          v42 = (__int64 *)(v37 + 56);
          v58 = (__int64 *)(v37 + 56);
          v43 = v40 - 1;
          do
          {
            v44 = *v42;
            if ( *v42 == v41 + 1 )
            {
              v41 = *v42;
              v38 += v9;
            }
            else
            {
              v45.QuadPart = v39 << 12;
              v56.QuadPart = v38 << 12;
              v39 = v44;
              if ( MmIsIoSpaceActive(v45, v38 << 12) )
              {
                v46 = v56;
                do
                {
                  v56.QuadPart = -10000LL;
                  KeDelayExecutionThread(0, 0, &v56);
                }
                while ( MmIsIoSpaceActive(v45, v46.QuadPart) );
              }
              v42 = v58;
              v41 = v39;
              v38 = v9;
            }
            v58 = ++v42;
            v43 -= v9;
          }
          while ( v43 );
          v15 = a8;
          v12 = v57;
          LODWORD(v11) = v59;
        }
        NumberOfBytes = v38 << 12;
        v47.QuadPart = v39 << 12;
        if ( MmIsIoSpaceActive(v47, v38 << 12) )
        {
          v48 = NumberOfBytes;
          do
          {
            v57.QuadPart = -10000LL;
            KeDelayExecutionThread(0, 0, &v57);
          }
          while ( MmIsIoSpaceActive(v47, v48) );
        }
        if ( (v15 & 2) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v12.QuadPart + 144), 0);
          *(_QWORD *)(v12.QuadPart + 144) = 0LL;
        }
        *(_BYTE *)(v12.QuadPart + 130) = 0;
        goto LABEL_34;
      }
      g_DxgMmsBugcheckExportIndex = v9;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
        0LL,
        270LL,
        4LL,
        (union _LARGE_INTEGER)v12.QuadPart,
        -1073741558LL,
        0LL);
      WdLogGlobalForLineNumber = 195;
LABEL_81:
      LODWORD(v13) = -1073741823;
      return (unsigned int)v13;
    }
LABEL_40:
    Interval = v21;
    v31 = v13;
    while ( 1 )
    {
      v51 = v31;
      LODWORD(v13) = MmRotatePhysicalView(v19, &v51, NewMdl, MmToRegularMemory, CopyFunction, Context);
      if ( (_DWORD)v13 != 1073741849 )
        break;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 3584;
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      v31 -= v51;
      VirtualAddress += v51;
      KeDelayExecutionThread(0, 0, &Interval);
      v19 = VirtualAddress;
    }
    goto LABEL_15;
  }
  v13 = Size;
  v50 = Size;
  if ( *(_QWORD *)(v12.QuadPart + 176) )
    goto LABEL_10;
  v20 = MmSecureVirtualMemory(v19, Size, 4u);
  *(_QWORD *)(v12.QuadPart + 176) = v20;
  if ( v20 )
  {
    v19 = VirtualAddress;
    goto LABEL_10;
  }
  _InterlockedAdd(&dword_14008179C, 1u);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3519;
  DxgkLogInternalTriageEvent(v36, 262145LL);
  return 3221225495LL;
}
