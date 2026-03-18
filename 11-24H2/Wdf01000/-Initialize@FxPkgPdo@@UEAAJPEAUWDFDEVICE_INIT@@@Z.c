/*
 * XREFs of ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140043780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qid @ 0x140002A18 (WPP_IFR_SF_qid.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140044680 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x140070820 (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

int __fastcall FxPkgPdo::Initialize(FxPkgPdo *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax
  FxCollectionInternal *p_HardwareIDs; // rbp
  __int64 v6; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **p_Blink; // rdx
  _LIST_ENTRY *v9; // rax
  __int64 v10; // r8
  FxCollectionInternal *p_CompatibleIDs; // r14
  __int64 v12; // rdx
  _LIST_ENTRY *v13; // r9
  _LIST_ENTRY **v14; // r9
  _LIST_ENTRY *v15; // rax
  __int64 v16; // rdx
  FxString *DeviceID; // rax
  unsigned __int64 _a2; // rbx
  FxString *InstanceID; // rax
  FxString *ContainerID; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v22; // rax
  FX_POOL **v23; // rax
  wchar_t *v24; // rax
  wchar_t *v25; // rax
  wchar_t *v26; // r9
  FxString *v27; // rdx
  size_t Length; // rbx
  unsigned __int8 Static; // al
  int v30; // r8d
  FxChildList *m_DeviceList; // rcx
  FxString *v32; // rdx
  size_t v33; // rbx
  FxDeviceDescriptionEntry *DescriptionEntry; // rax
  FxString *v35; // rdx
  size_t v36; // rbx
  __m128i v37; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    p_HardwareIDs = &DeviceInit->Pdo.HardwareIDs;
    v6 = 0LL;
    Flink = DeviceInit->Pdo.HardwareIDs.m_ListHead.Flink;
    while ( 1 )
    {
      p_Blink = &Flink[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)p_HardwareIDs )
        break;
      v9 = *p_Blink;
      Flink = p_Blink[1];
      v6 += (unsigned __int16)(LOWORD(v9[6].Blink) + 2);
    }
    if ( p_HardwareIDs->m_Count )
      v10 = v6 + 2;
    else
      v10 = 4LL;
    p_CompatibleIDs = &DeviceInit->Pdo.CompatibleIDs;
    v12 = 0LL;
    v13 = DeviceInit->Pdo.CompatibleIDs.m_ListHead.Flink;
    while ( 1 )
    {
      v14 = &v13[-1].Blink;
      if ( v14 == (_LIST_ENTRY **)p_CompatibleIDs )
        break;
      v15 = *v14;
      v13 = v14[1];
      v12 += (unsigned __int16)(LOWORD(v15[6].Blink) + 2);
    }
    if ( p_CompatibleIDs->m_Count )
      v16 = v12 + 2;
    else
      v16 = 4LL;
    DeviceID = DeviceInit->Pdo.DeviceID;
    _a2 = v16 + v10;
    if ( DeviceID )
      _a2 += (unsigned __int16)(DeviceID->m_UnicodeString.Length + 2);
    InstanceID = DeviceInit->Pdo.InstanceID;
    if ( InstanceID )
      _a2 += (unsigned __int16)(InstanceID->m_UnicodeString.Length + 2);
    ContainerID = DeviceInit->Pdo.ContainerID;
    if ( ContainerID )
      _a2 += (unsigned __int16)(ContainerID->m_UnicodeString.Length + 2);
    m_Globals = this->m_Globals;
    v22 = retaddr;
    v37.m128i_i64[0] = 0LL;
    v37.m128i_i64[1] = 256LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v22 = 0LL;
    v23 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v37, _a2, m_Globals->Tag, v22);
    this->m_IDsAllocation = (wchar_t *)v23;
    if ( v23 )
    {
      this->m_HardwareIDs = (wchar_t *)v23;
      v24 = FxCopyMultiSz((wchar_t *)v23, &DeviceInit->Pdo.HardwareIDs);
      this->m_CompatibleIDs = v24;
      v25 = FxCopyMultiSz(v24, &DeviceInit->Pdo.CompatibleIDs);
      v26 = v25;
      if ( DeviceInit->Pdo.DeviceID )
      {
        this->m_DeviceID = v25;
        v27 = DeviceInit->Pdo.DeviceID;
        Length = v27->m_UnicodeString.Length;
        memmove(v25, v27->m_UnicodeString.Buffer, Length);
        this->m_DeviceID[(unsigned __int64)(unsigned int)Length >> 1] = 0;
        v26 = (wchar_t *)((char *)this->m_DeviceID + Length + 2);
      }
      if ( DeviceInit->Pdo.InstanceID )
      {
        this->m_InstanceID = v26;
        v35 = DeviceInit->Pdo.InstanceID;
        v36 = v35->m_UnicodeString.Length;
        memmove(v26, v35->m_UnicodeString.Buffer, v36);
        this->m_InstanceID[(unsigned __int64)(unsigned int)v36 >> 1] = 0;
        v26 = (wchar_t *)((char *)this->m_InstanceID + v36 + 2);
      }
      if ( DeviceInit->Pdo.ContainerID )
      {
        this->m_ContainerID = v26;
        v32 = DeviceInit->Pdo.ContainerID;
        v33 = v32->m_UnicodeString.Length;
        memmove(v26, v32->m_UnicodeString.Buffer, v33);
        this->m_ContainerID[v33 >> 1] = 0;
      }
      Static = DeviceInit->Pdo.Static;
      this->m_Static = Static;
      if ( Static )
      {
        v30 = 327;
        m_DeviceList = *(FxChildList **)(*(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL) + 1704LL);
      }
      else
      {
        DescriptionEntry = DeviceInit->Pdo.DescriptionEntry;
        v30 = 333;
        this->m_Description = DescriptionEntry;
        m_DeviceList = DescriptionEntry->m_DeviceList;
      }
      this->m_OwningChildList = m_DeviceList;
      FxObject::AddRef(m_DeviceList, this, v30, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpdo.cpp");
      return 0;
    }
    else
    {
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxPkgPdo_cpp_Traceguids, DeviceInit, _a2, -1073741670);
      return -1073741670;
    }
  }
  return result;
}
