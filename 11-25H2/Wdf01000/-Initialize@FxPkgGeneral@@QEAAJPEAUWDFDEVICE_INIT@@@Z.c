/*
 * XREFs of ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400434C0
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140043260 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007B71C (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x14007EC20 (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14007EE00 (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Initialize(FxPkgGeneral *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY *p_CxDeviceInitListHead; // r14
  _LIST_ENTRY *i; // rbx
  int v7; // ebx
  ULONG Tag; // ecx
  void *v10; // rax
  FX_POOL **v11; // rax
  unsigned __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned int v16; // eax
  ULONG v17; // ecx
  void *v18; // rax
  FX_POOL **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  _LIST_ENTRY *v22; // rcx
  unsigned int v23; // eax
  __m128i v24; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( DeviceInit->FileObject.Set )
  {
    Tag = m_Globals->Tag;
    v10 = retaddr;
    v24.m128i_i64[0] = 0LL;
    v24.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v10 = 0LL;
    v11 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0xA0uLL, Tag, v10);
    if ( !v11 || (FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v11), (v14 = v13) == 0) )
    {
      v7 = -1073741670;
      v12 = 10;
LABEL_15:
      WPP_IFR_SF_D(m_Globals, 2u, 0x12u, v12, WPP_FxPkgGeneral_cpp_Traceguids, 0xC000009A);
      return (unsigned int)v7;
    }
    *(_BYTE *)(v13 + 148) = 0;
    *(_DWORD *)(v13 + 80) = DeviceInit->FileObject.Class;
    *(_OWORD *)(v13 + 88) = *(_OWORD *)&DeviceInit->FileObject.Attributes.Size;
    *(_OWORD *)(v13 + 104) = *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback;
    *(_OWORD *)(v13 + 120) = *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject;
    *(_QWORD *)(v13 + 136) = DeviceInit->FileObject.Attributes.ContextTypeInfo;
    *(_DWORD *)(v13 + 144) = DeviceInit->FileObject.AutoForwardCleanupClose;
    *(_QWORD *)(v13 + 24) = DeviceInit->FileObject.Callbacks.EvtDeviceFileCreate;
    *(_QWORD *)(v13 + 56) = DeviceInit->FileObject.Callbacks.EvtFileCleanup;
    *(_QWORD *)(v13 + 72) = DeviceInit->FileObject.Callbacks.EvtFileClose;
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( Blink->Flink != &this->m_FileObjectInfoHeadList )
LABEL_22:
      __fastfail(3u);
    *(_QWORD *)v13 = &this->m_FileObjectInfoHeadList;
    *(_QWORD *)(v13 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v13;
    this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v13;
    v16 = this->m_Flags | 2;
    this->m_Flags = v16;
    if ( *(_QWORD *)(v14 + 24) )
      this->m_Flags = v16 | 8;
  }
  p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != p_CxDeviceInitListHead; i = i->Flink )
  {
    if ( BYTE4(i[13].Flink) )
    {
      v17 = m_Globals->Tag;
      v18 = retaddr;
      v24.m128i_i64[0] = 0LL;
      v24.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v18 = 0LL;
      v19 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0xA0uLL, v17, v18);
      if ( !v19 || (FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v19), (v21 = v20) == 0) )
      {
        v7 = -1073741670;
        v12 = 11;
        goto LABEL_15;
      }
      *(_BYTE *)(v20 + 148) = 1;
      *(_DWORD *)(v20 + 80) = i[6].Blink;
      *(_LIST_ENTRY *)(v20 + 88) = i[7];
      *(_LIST_ENTRY *)(v20 + 104) = i[8];
      *(_LIST_ENTRY *)(v20 + 120) = i[9];
      *(_QWORD *)(v20 + 136) = i[10].Flink;
      *(_DWORD *)(v20 + 144) = i[13].Flink;
      *(_QWORD *)(v20 + 40) = i[11].Flink;
      *(_QWORD *)(v20 + 56) = i[12].Flink;
      *(_QWORD *)(v20 + 72) = i[11].Blink;
      *(_QWORD *)(v20 + 152) = i[40].Blink;
      v22 = this->m_FileObjectInfoHeadList.Blink;
      if ( v22->Flink != &this->m_FileObjectInfoHeadList )
        goto LABEL_22;
      *(_QWORD *)v20 = &this->m_FileObjectInfoHeadList;
      *(_QWORD *)(v20 + 8) = v22;
      v22->Flink = (_LIST_ENTRY *)v20;
      this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v20;
      v23 = this->m_Flags | 1;
      this->m_Flags = v23;
      if ( *(_QWORD *)(v21 + 40) )
        this->m_Flags = v23 | 4;
      if ( BYTE6(i[1].Blink[21].Blink) )
        this->m_CxFileCleanupCloseV2 = 1;
    }
  }
  if ( this->m_FileObjectInfoHeadList.Flink == &this->m_FileObjectInfoHeadList )
  {
    return 0;
  }
  else
  {
    v7 = FxPkgGeneral::ConfigureConstraints(this, &this->m_FileObjectInfoHeadList);
    if ( v7 >= 0 )
    {
      v7 = FxPkgGeneral::ConfigureFileObjectClass(this, &this->m_FileObjectInfoHeadList);
      if ( v7 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v7;
}
