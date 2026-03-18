/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CBBF8
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CBB00 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C12C0 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     FastZeroMemory @ 0x1400CBF80 (FastZeroMemory.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CC6A8 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _EPROCESS *v5; // rdi
  char *v6; // r15
  PVOID v7; // r12
  char *v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // r13
  size_t v14; // rdx
  char *v15; // rcx
  __int64 v16; // r8
  unsigned int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  PVOID Section; // [rsp+60h] [rbp-58h]
  unsigned __int64 v29; // [rsp+68h] [rbp-50h]
  unsigned __int64 v30[9]; // [rsp+70h] [rbp-48h] BYREF
  char v31; // [rsp+C0h] [rbp+8h]
  ULONG_PTR ViewSize; // [rsp+C8h] [rbp+10h] BYREF
  PVOID MappedBase; // [rsp+D0h] [rbp+18h] BYREF
  char *v34; // [rsp+D8h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (char *)*((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5) - (_QWORD)v8;
  v29 = v9;
  v31 = 0;
  v10 = *((_QWORD *)this + 10);
  v11 = **(unsigned int **)(v10 + 32);
  if ( (unsigned int)(v11 - 3) > 3 || (unsigned int)(v11 - 5) <= 1 )
  {
    v6 = v8;
    goto LABEL_4;
  }
  v20 = 4;
  if ( (_DWORD)v11 != 4 )
    v20 = 1028;
  LODWORD(ViewSize) = v20;
  Section = *(PVOID *)(v10 + 56);
  v30[0] = v9;
  v34 = v8;
  MappedBase = 0LL;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v23 = -1073741823;
LABEL_32:
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry2(6LL, 0LL, v23);
    WdLogGlobalForLineNumber = 987;
    DxgkLogInternalTriageEvent(v25, 262145LL);
    ViewSize = 0LL;
    v26 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    v23 = v26;
    if ( v26 < 0 )
    {
      _InterlockedIncrement(&dword_1400817C0);
      WdLogSingleEntry1(6LL, v26);
      WdLogGlobalForLineNumber = 1012;
      DxgkLogInternalTriageEvent(v27, 262145LL);
    }
    else
    {
      v31 = 1;
      v7 = MappedBase;
      v6 = &v8[(_QWORD)MappedBase];
    }
    goto LABEL_21;
  }
  CurrentProcess = PsGetCurrentProcess(v11, v10, 1028LL, a4);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v23 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, unsigned __int64, char **, unsigned __int64 *, int, _DWORD, _DWORD))VirtualMemoryInterface
         + 3))(
          Section,
          CurrentProcess,
          &MappedBase,
          0LL,
          v9,
          &v34,
          v30,
          2,
          0,
          ViewSize);
  if ( v23 < 0 )
    goto LABEL_32;
  v7 = MappedBase;
  v6 = (char *)MappedBase + v8 - v34;
LABEL_21:
  if ( v23 < 0 )
  {
    MappedBase = 0LL;
    WdLogSingleEntry5(
      3LL,
      v29,
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 10),
      v23,
      **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
    WdLogGlobalForLineNumber = 2531;
    return;
  }
  v9 = v29;
LABEL_4:
  v12 = *((_QWORD *)this + 8);
  v13 = 0;
  while ( !v13 )
  {
    if ( *(_DWORD *)(v12 + 80) == 3 && *(_BYTE *)(v12 + 84) )
    {
      v14 = *(_QWORD *)(v12 + 40) - *(_QWORD *)(v12 + 32);
      v15 = &v6[*(_QWORD *)(v12 + 32) - *((_QWORD *)this + 4)];
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v16 + 208) += v14;
      FastZeroMemory(v15, v14);
    }
    if ( v12 == *((_QWORD *)this + 9) )
    {
      v13 = 1;
    }
    else
    {
      v19 = *(_QWORD *)(v12 + 120);
      if ( v19 == *(_QWORD *)(v12 + 72) + 72LL )
        v12 = 0LL;
      else
        v12 = v19 - 120;
    }
  }
  v17 = *(unsigned int **)(*((_QWORD *)this + 10) + 32LL);
  v18 = *v17;
  if ( (unsigned int)(v18 - 3) <= 3 && (unsigned int)(v18 - 5) > 1 )
  {
    if ( !v31 )
      v5 = (struct _EPROCESS *)PsGetCurrentProcess(v17, v18, a3, a4);
    v24 = dword_140081504;
    if ( (unsigned __int64)qword_1400812F8 > 0x53333333 )
      v24 = dword_1400814F4;
    if ( v9 > (unsigned int)(v24 << 20) )
      VidMmUnmapViewAsync(v5, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v7);
    else
      VidMmUnmapView(v5, v7);
  }
}
