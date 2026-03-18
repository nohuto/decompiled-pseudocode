/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18019E1F4
 * Callers:
 *     ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x18007C1A0 (-DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18001BE90 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18019E320 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18019E3B8 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18019EB44 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCChannelContext@@$00@@QEAAJI@Z @ 0x18019EBB0 (-RemoveAt@-$DynArray@PEAVCChannelContext@@$00@@QEAAJI@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18025C628 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  unsigned int v5; // esi
  CResourceTable **v6; // rdi
  struct CComposition *v7; // rdx
  __int64 v8; // r8
  int v9; // edx
  CDrawListCache *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v11);
  v5 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AttachedChannel, 0x669u, 0LL);
  }
  else
  {
    v6 = (CResourceTable **)v11;
    if ( *((_BYTE *)v11 + 16) )
      CComposition::UpdateDebugCounter(this, 0);
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 936, &v11) )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v6);
    CResourceTable::ReleaseHandleTableEntries(v6[6], v7, (struct CChannelContext *)v6);
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v6);
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((CDrawListCache *)v6);
    LOBYTE(v8) = 0;
    *(_QWORD *)(*((_QWORD *)this + 105) + 8 * v2) = 0LL;
    v9 = *((_DWORD *)this + 216);
    if ( v9 )
    {
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)this + 105) + 8LL * (unsigned int)(*((_DWORD *)this + 216) - 1)) )
          break;
        DynArray<CChannelContext *,1>::RemoveAt((char *)this + 840, (unsigned int)(v9 - 1), v8);
        v9 = *((_DWORD *)this + 216);
        LOBYTE(v8) = 1;
      }
      while ( v9 );
      if ( (_BYTE)v8 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 840, 8u);
    }
  }
  return v5;
}
