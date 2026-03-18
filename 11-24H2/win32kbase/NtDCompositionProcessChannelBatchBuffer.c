/*
 * XREFs of NtDCompositionProcessChannelBatchBuffer @ 0x1400B7070
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionProcessChannelBatchBuffer(__int64 a1, unsigned int a2, void *a3, void *a4)
{
  int v4; // edi
  bool v5; // si
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  _QWORD *v14; // rax
  signed int v15; // edi
  struct _ERESOURCE *v16; // rbx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // ebx
  bool v21[4]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-54h] BYREF
  unsigned int Src; // [rsp+38h] [rbp-50h] BYREF
  _DWORD Buffer[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  Src = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v11 )
      v9 = *(_QWORD *)(v11 + 256);
  }
  if ( v9 )
  {
    v12 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    v13 = *(struct _RTL_GENERIC_TABLE **)v9;
    Buffer[0] = v4;
    Buffer[1] = 0;
    v25 = 0LL;
    v14 = RtlLookupElementGenericTable(v13, Buffer);
    if ( v14 )
      v8 = v14[1];
    v15 = v8 == 0 ? 0xC0000022 : 0;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v15 = -1073741823;
  }
  if ( v8 )
  {
    v16 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v16, 1u);
    v7 = v8;
  }
  if ( v15 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7) == 1 )
    {
      v6 = v7;
    }
    else
    {
      v15 = -1073741811;
      (**(void (__fastcall ***)(unsigned __int64))v7)(v7);
    }
  }
  v22 = v15;
  if ( v15 >= 0 )
  {
    v17 = 0;
    v22 = 0;
    v18 = *(_DWORD *)(v6 + 2752);
    v15 = v18 < a2 ? 0xC000000D : 0;
    if ( a2 <= v18 )
    {
      v15 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
              v6,
              *(unsigned int **)(v6 + 2760),
              a2,
              1,
              &v22);
      v17 = v22;
    }
    Src = v17;
    v19 = *(_DWORD *)(v6 + 572);
    v22 = v15;
    (**(void (__fastcall ***)(unsigned __int64))v6)(v6);
    v5 = v19 != 0;
  }
  RtlCopyToUser(a3, &Src, 4uLL);
  v21[0] = v5;
  RtlCopyToUser(a4, v21, 1uLL);
  return (unsigned int)v15;
}
