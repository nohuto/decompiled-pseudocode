/*
 * XREFs of ?FreeBatchResources@CDrawListBatchManager@@QEAAXPEAVCDrawListEntryBatch@@@Z @ 0x180139FB0
 * Callers:
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1801B1A68 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListBatchManager::FreeBatchResources(CDrawListBatchManager *this, struct CDrawListEntryBatch *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // edi
  int *v5; // rbx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int *v13; // r12
  _DWORD *v14; // r15
  __int64 v15; // rcx
  HANDLE ProcessHeap; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ebx
  unsigned int v21; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int *v23; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 11);
  v3 = *((_DWORD *)a2 + 10);
  if ( v3 < v2 )
  {
    while ( 1 )
    {
      v5 = *(int **)(*(_QWORD *)this + 8LL * v3);
      v6 = *v5;
      if ( !*v5 )
        goto LABEL_3;
      if ( v6 == 4 )
        break;
      v17 = v6 - 1;
      if ( !v17 )
        goto LABEL_21;
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 2 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
      }
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)v5 + 1);
LABEL_3:
      *v5 = 0;
      v7 = *((_DWORD *)this + 16);
      v23 = v5;
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        v20 = -2147024362;
        v21 = 181;
        goto LABEL_29;
      }
      if ( v8 > *((_DWORD *)this + 15) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v23);
        if ( v20 < 0 )
        {
          v21 = 192;
LABEL_29:
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, v21, 0LL);
          ModuleFailFastForHRESULT(v20, retaddr);
        }
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v7) = v5;
        *((_DWORD *)this + 16) = v8;
      }
      if ( ++v3 >= v2 )
        goto LABEL_7;
    }
    v13 = (int *)*((_QWORD *)v5 + 12);
    v14 = v5 + 26;
    if ( v5 + 26 != v13 )
    {
      if ( v13 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
      }
      *((_QWORD *)v5 + 12) = v14;
      *v14 = 0;
    }
LABEL_21:
    v15 = *((_QWORD *)v5 + 1);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    goto LABEL_3;
  }
LABEL_7:
  if ( (*((_DWORD *)this + 38))-- == 1 )
  {
    v10 = *((_DWORD *)this + 9);
    if ( v10 <= *((_DWORD *)this + 6) - *((_DWORD *)this + 8) )
      v10 = *((_DWORD *)this + 6) - *((_DWORD *)this + 8);
    *((_DWORD *)this + 9) = v10;
    v11 = *((_DWORD *)this + 19);
    if ( v11 <= *((_DWORD *)this + 16) - *((_DWORD *)this + 18) )
      v11 = *((_DWORD *)this + 16) - *((_DWORD *)this + 18);
    *((_DWORD *)this + 19) = v11;
    v12 = *((_DWORD *)this + 29);
    if ( v12 <= *((_DWORD *)this + 26) - *((_DWORD *)this + 28) )
      v12 = *((_DWORD *)this + 26) - *((_DWORD *)this + 28);
    *((_DWORD *)this + 29) = v12;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 8) = 0;
  }
}
