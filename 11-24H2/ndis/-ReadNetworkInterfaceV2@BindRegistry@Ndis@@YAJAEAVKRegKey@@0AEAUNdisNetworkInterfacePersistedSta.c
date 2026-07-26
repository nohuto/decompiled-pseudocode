/*
 * XREFs of ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015B800
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015AB30 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400C939C (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1401442D8 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x14015C4A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x14015C580 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadNetworkInterfaceV2(
        struct KRegKey *this,
        struct KRegKey *a2,
        struct KRegKey *a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  int v9; // edx
  int Uint64; // r14d
  int v11; // r9d
  ULONG v12; // r9d
  ULONG v13; // r9d
  int Uint32; // eax
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  struct KRegKey *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = this;
  result = NetSetupPropertyBag::ReadString(&v16, &NETSETUPPKEY_Interface_IfAlias, a3);
  if ( (int)result >= 0 )
  {
    result = NetSetupPropertyBag::ReadString(&v16, &NETSETUPPKEY_Interface_IfDescr, &a3[1]);
    if ( (int)result >= 0 )
    {
      v8 = 0;
      v15 = 0;
      Uint64 = NetSetupPropertyBag::ReadUint32(
                 (NetSetupPropertyBag *)&v16,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IfType,
                 &v15);
      if ( Uint64 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 19;
LABEL_9:
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            22,
            v11,
            (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
            Uint64);
          return (unsigned int)Uint64;
        }
        return (unsigned int)Uint64;
      }
      LOWORD(a3[2].m_ptr) = v15;
      Uint64 = NetSetupPropertyBag::ReadUint64(
                 (NetSetupPropertyBag *)&v16,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_NetLuid,
                 (unsigned __int64 *)&a3[3]);
      if ( Uint64 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 20;
          goto LABEL_9;
        }
        return (unsigned int)Uint64;
      }
      if ( (int)NetSetupPropertyBag::ReadUint32(
                  (NetSetupPropertyBag *)&v16,
                  (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_MediaType,
                  (unsigned int *)&a3[7]) < 0 )
        LODWORD(a3[7].m_ptr) = 0;
      if ( (int)NetSetupPropertyBag::ReadUint32(
                  (NetSetupPropertyBag *)&v16,
                  (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_PhysicalMediaType,
                  (unsigned int *)&a3[7].m_ptr + 1) < 0 )
        HIDWORD(a3[7].m_ptr) = 0;
      result = NetSetupPropertyBag::ReadBoolean(
                 (NetSetupPropertyBag *)&v16,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsPhysical,
                 (bool *)&a3[16].m_ptr + 5);
      if ( (int)result >= 0 )
      {
        result = NetSetupPropertyBag::ReadBoolean(
                   (NetSetupPropertyBag *)&v16,
                   (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Driver_HideInUi,
                   (bool *)&a3[16].m_ptr + 4);
        if ( (int)result >= 0 )
        {
          result = NetSetupPropertyBag::ReadUint32(
                     (NetSetupPropertyBag *)&v16,
                     (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_SuggestedIfIndex,
                     (unsigned int *)&a3[4]);
          if ( (_DWORD)result == -1073741772 )
          {
            LODWORD(a3[4].m_ptr) = 0;
          }
          else if ( (_DWORD)result )
          {
            return result;
          }
          LOWORD(a3[2].m_ptr) = v15;
          HIDWORD(a3[6].m_ptr) = 0;
          result = ndisIfReadNetworkGuidFromKey(this, (struct _GUID *)((char *)&a3[4].m_ptr + 4));
          if ( (int)result >= 0 )
          {
            if ( !a2->m_ptr
              || (result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(&a2->m_ptr, L"CurrentAddress", &a3[8], v12),
                  (int)result >= 0)
              && (result = Ndis::BindRegistry::LoadNetworkInterfaceAddress(
                             &a2->m_ptr,
                             L"PermanentAddress",
                             (_WORD *)&a3[12].m_ptr + 1,
                             v13),
                  (int)result >= 0) )
            {
              BYTE6(a3[16].m_ptr) = 1;
              result = NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v16,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IfConnectorPresent,
                         (bool *)&a3[16].m_ptr + 7);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              result = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v16,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_AccessType,
                         (unsigned int *)&a3[17]);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              result = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v16,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_ConnectionType,
                         (unsigned int *)&a3[17].m_ptr + 1);
              if ( (_DWORD)result == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
              }
              else if ( (int)result < 0 )
              {
                return result;
              }
              Uint32 = NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v16,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_DirectionType,
                         (unsigned int *)&a3[18]);
              if ( Uint32 == -1073741772 )
              {
                BYTE6(a3[16].m_ptr) = 0;
                return 0LL;
              }
              else
              {
                if ( Uint32 < 0 )
                  return (unsigned int)Uint32;
                return v8;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
