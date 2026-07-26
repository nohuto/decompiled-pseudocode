/*
 * XREFs of ndisPktMonMiniportRegister @ 0x140173910
 * Callers:
 *     ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1400B9BF0 (-ndisPktMonRegisterAllMiniports@@YAXXZ.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059BB0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     PktMonClientAddEdge @ 0x1400759C0 (PktMonClientAddEdge.c)
 *     PktMonClientComponentRegister @ 0x140075A00 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x14007B260 (PktMonClientComponentUnregister.c)
 *     PktMonClientSetCompProperty @ 0x140086BB0 (PktMonClientSetCompProperty.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MEDIUM MiniportMediaType; // ecx
  _UNICODE_STRING *pAdapterInstanceName; // r8
  unsigned int Flags; // eax
  _UNICODE_STRING *p_ImageName; // rdx
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _NDIS_IF_BLOCK *IfBlock; // r8
  unsigned __int16 Length; // r9
  __int64 result; // rax
  char v13[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+68h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp-18h]

  MiniportMediaType = a1->MiniportMediaType;
  v17 = *(_DWORD *)L"r";
  pAdapterInstanceName = a1->pAdapterInstanceName;
  v15[1] = &v16;
  v14[1] = L"netadaptercx.sys";
  Flags = a1->Flags;
  v16 = *(_QWORD *)L"Upper";
  v15[0] = 786442LL;
  v14[0] = 2228256LL;
  v13[0] = 1;
  if ( (Flags & 0x80u) == 0 )
    p_ImageName = &a1->DriverHandle->ImageName;
  else
    p_ImageName = (_UNICODE_STRING *)v14;
  v6 = PktMonClientComponentRegister(
         (__int64)&a1->PktMonComp,
         (__int64)p_ImageName,
         (__int64)pAdapterInstanceName,
         2LL,
         MiniportMediaType);
  if ( v6 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = 15;
LABEL_28:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v7,
        (struct _GUID *)&WPP_2f3bef4a5515302869b132ca904a55a6_Traceguids,
        (char)a1,
        v6);
    }
  }
  else
  {
    v6 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 9, (__int64)v13, 1u);
    if ( v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v7 = 16;
        goto LABEL_28;
      }
    }
    else
    {
      v6 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 1, (__int64)&a1->IfIndex, 4u);
      if ( v6 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v7 = 17;
          goto LABEL_28;
        }
      }
      else
      {
        v6 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 4, (__int64)&a1->InterfaceGuid, 0x10u);
        if ( v6 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v7 = 18;
            goto LABEL_28;
          }
        }
        else
        {
          v6 = PktMonClientSetCompProperty((__int64)&a1->PktMonComp, 5, (__int64)&a1->MiniportMediaType, 4u);
          if ( v6 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v7 = 19;
              goto LABEL_28;
            }
          }
          else
          {
            if ( !ndisMReferenceIfBlock(a1, 0x1Bu) )
              goto LABEL_25;
            IfBlock = a1->IfBlock;
            Length = IfBlock->ifPhysAddress.Length;
            if ( Length )
              v6 = PktMonClientSetCompProperty(
                     (__int64)&a1->PktMonComp,
                     6,
                     (__int64)IfBlock->ifPhysAddress.Address,
                     Length);
            ndisMDereferenceIfBlock(a1, MPIFREF_PKTMON);
            if ( v6 )
            {
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v7 = 20;
                goto LABEL_28;
              }
            }
            else
            {
LABEL_25:
              result = PktMonClientAddEdge(
                         (__int64)&a1->PktMonComp,
                         (__int64)v15,
                         v8,
                         v9,
                         a1->MiniportMediaType,
                         (__int64)&a1->PktMonEdge);
              v6 = result;
              if ( !(_DWORD)result )
                return result;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v7 = 21;
                goto LABEL_28;
              }
            }
          }
        }
      }
    }
  }
  PktMonClientComponentUnregister((__int64 *)&a1->PktMonComp);
  return v6;
}
