/*
 * XREFs of ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DF0
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x14003E08C (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400078EC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?RemoveAt@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000B244 (-RemoveAt@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x14000B2A8 (-RemoveAt@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z.c)
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B930 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     ??A?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K@Z @ 0x140030F34 (--A-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAAEAPEAVCConnectionNode@@_K.c)
 *     ?CommitAttachCount@CConnectionNode@@QEAAXXZ @ 0x14003805C (-CommitAttachCount@CConnectionNode@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::ReleaseAPO(
        CDeviceGraphObjectCache *this,
        struct IAudioProcessingObject *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r9d
  _QWORD *v6; // r8
  _QWORD *v7; // r15
  LPUNKNOWN *v8; // rdi
  __int64 v10; // rcx
  unsigned int v11; // edx
  struct IUnknownVtbl *lpVtbl; // rbx
  CConnectionNode *v13; // rbx
  struct IAudioProcessingObject *v14; // [rsp+60h] [rbp+8h] BYREF
  LPUNKNOWN *v15; // [rsp+70h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v6 = (_QWORD *)*((_QWORD *)this + 12);
  do
  {
    v7 = v6;
    if ( !v6 )
      goto LABEL_5;
    v8 = (LPUNKNOWN *)v6[2];
    v6 = (_QWORD *)*v6;
  }
  while ( *v8 != (LPUNKNOWN)a2 );
  if ( !v8 )
  {
LABEL_5:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289827866LL;
  }
  if ( v8[3] )
    ((void (__fastcall *)(LPUNKNOWN, LPUNKNOWN, _QWORD *))v8[5]->lpVtbl[1].AddRef)(v8[5], *v8, v6);
  v10 = *((_QWORD *)this + 25);
  if ( *(_DWORD *)v10 > 4u
    && (*(_DWORD *)(v10 + 16) & 0x100LL) != 0
    && (*(_QWORD *)(v10 + 24) & 0x100LL) == *(_QWORD *)(v10 + 24) )
  {
    v14 = a2;
    v15 = v8 + 39;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
      v10,
      (unsigned int)&unk_1400B0721,
      (_DWORD)v6,
      v5,
      (__int64)&v15,
      (__int64)&v14);
  }
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAt((char *)this + 96, v7, v6);
  while ( v8[16] )
  {
    lpVtbl = v8[15]->lpVtbl;
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v8 + 15, 0LL);
    --HIDWORD(lpVtbl->AddRef);
    CConnectionNode::CommitAttachCount((CConnectionNode *)lpVtbl);
  }
  while ( v8[20] )
  {
    v13 = *(CConnectionNode **)ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::operator[](v8 + 19, 0LL);
    ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v8 + 19, 0LL);
    --*((_DWORD *)v13 + 3);
    CConnectionNode::CommitAttachCount(v13);
  }
  CoDisconnectObject(*v8, 0);
  CAPONode::`scalar deleting destructor'((CAPONode *)v8, v11);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
