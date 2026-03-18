/*
 * XREFs of ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x1802A5A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x18029B0F0 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 *     ?Enqueue@CSharedCircularQueueProducer@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1802A5A38 (-Enqueue@CSharedCircularQueueProducer@@QEAAXV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     McTemplateU0pxqtq_EventWriteTransfer @ 0x1802A5C1C (McTemplateU0pxqtq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::EnqueueComputeScribbleOnHost(void **this, __int64 a2, struct CComputeScribble *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // r12
  char *v10; // rbx
  __int64 (__fastcall *v11)(struct CComputeScribble *, __int64 *); // r14
  int v12; // eax
  unsigned int v13; // esi
  char *v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  char *v18; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue((CSuperWetSource *)this);
  if ( v6 < 0 )
  {
    v7 = 424LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  memset_0(this[15], 0, 0x80uLL);
  v9 = (*(unsigned int (__fastcall **)(struct CComputeScribble *))(*(_QWORD *)a3 + 48LL))(a3);
  if ( (unsigned __int64)(v9 + 24) > 0x80 )
  {
    v6 = -2147024809;
    v7 = 434LL;
    goto LABEL_3;
  }
  v10 = (char *)this[15];
  v11 = *(__int64 (__fastcall **)(struct CComputeScribble *, __int64 *))(*(_QWORD *)a3 + 56LL);
  gsl::details::extent_type<-1>::extent_type<-1>(&v17, v9);
  if ( v17 == -1 || v10 == (char *)-20LL && v17 )
    goto LABEL_15;
  v18 = v10 + 20;
  v12 = v11(a3, &v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  *(_QWORD *)v10 = a2 + 1;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 70);
  v10[12] = 1;
  *((_DWORD *)v10 + 4) = v9;
  v14 = (char *)this[15];
  if ( !v14 )
LABEL_15:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v15 = (__int64)this[14];
  v17 = 128LL;
  v18 = v14;
  CSharedCircularQueueProducer::Enqueue(v15, (__int64)&v17);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0pxqtq_EventWriteTransfer(
      (unsigned __int8)v10[12],
      v16,
      (_DWORD)this,
      *(_QWORD *)v10,
      *((_DWORD *)v10 + 2),
      v10[12],
      *((_DWORD *)v10 + 4));
  return 0LL;
}
