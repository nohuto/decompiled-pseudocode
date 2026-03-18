/*
 * XREFs of ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1802DB540
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802D8CAC (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?PublishPresentData@CHolographicExclusiveView@@QEAAXXZ @ 0x1802DB630 (-PublishPresentData@CHolographicExclusiveView@@QEAAXXZ.c)
 *     ?Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z @ 0x1802DFBFC (-Create@CHolographicExclusivePresentData@@SAJPEAX00IIPEAPEAUIHolographicExclusivePresentData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicExclusiveView::ProcessSetViewData(
        CHolographicExclusiveView *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA *a3)
{
  struct IHolographicExclusivePresentData **v6; // rdi
  CHolographicInteropTaskQueue **v7; // rcx
  struct IHolographicExclusivePresentData **v8; // rbp
  struct IHolographicExclusivePresentData *v9; // rcx
  struct IHolographicExclusivePresentData **v10; // r14
  void *v11; // r8
  unsigned int v12; // r9d
  void *v13; // rdx
  void *v14; // rcx
  struct IHolographicExclusivePresentData *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  if ( *((_QWORD *)this + 12) )
    return 2147942487LL;
  v6 = (struct IHolographicExclusivePresentData **)((char *)this + 128);
  *((_BYTE *)this + 91) = 1;
  if ( *((_QWORD *)this + 16) )
  {
    v7 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 9);
    if ( v7 )
    {
      CHolographicManager::ReleaseExclusivePresentData(v7, *((_DWORD *)this + 20));
      v8 = (struct IHolographicExclusivePresentData **)((char *)this + 128);
    }
    else
    {
      v8 = v6;
    }
    v9 = *v6;
    v10 = v6;
    v6 = v8;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct IHolographicExclusivePresentData *))(*(_QWORD *)v9 + 16LL))(v9);
      *v10 = 0LL;
    }
  }
  v11 = (void *)*((_QWORD *)a3 + 3);
  if ( v11 )
  {
    v12 = *((_DWORD *)this + 21);
    v13 = (void *)*((_QWORD *)a3 + 1);
    v14 = (void *)*((_QWORD *)a3 + 2);
    v15 = 0LL;
    if ( (int)CHolographicExclusivePresentData::Create(v14, v13, v11, v12, *((_DWORD *)this + 20), &v15) < 0 )
    {
      CloseHandle(*((HANDLE *)a3 + 3));
    }
    else
    {
      *v6 = v15;
      CHolographicExclusiveView::PublishPresentData(this);
    }
  }
  return 0LL;
}
