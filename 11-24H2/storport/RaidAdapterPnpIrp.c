/*
 * XREFs of RaidAdapterPnpIrp @ 0x140015724
 * Callers:
 *     RaDriverPnpIrp @ 0x140015600 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAdapterStartDeviceIrp @ 0x1400164A4 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x14001695C (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pddp_EtwWriteTransfer @ 0x140056914 (McTemplateK0pddp_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQueryIdIrp @ 0x14005D484 (NvmeAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x14005D518 (RaidAdapterQueryInterfaceIrp.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x140181370 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x140182B38 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x140182BD8 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1401B9ABC (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1401BC204 (RaidAdapterQueryPnpDeviceStateIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  int v4; // ebx
  char v5; // r12
  int v7; // edx
  BOOLEAN v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // eax
  unsigned int InterfaceIrp; // eax
  unsigned int v14; // r14d
  bool v16; // zf
  char *v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // rax
  char v22; // si
  unsigned int v23; // eax
  char v24; // r13
  char v25; // r11
  char v26; // al
  __int64 v27; // rcx
  char v28; // r15
  _BYTE *v29; // r9
  unsigned __int8 v30; // r10
  char *v31; // r11
  unsigned int v32; // r8d
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  char v36; // cl
  char v37; // r8
  char v38; // [rsp+60h] [rbp-19h]
  char v39; // [rsp+61h] [rbp-18h]
  unsigned int v40; // [rsp+64h] [rbp-15h]
  int v41; // [rsp+6Ch] [rbp-Dh]
  unsigned __int64 v42; // [rsp+70h] [rbp-9h]
  __int128 v43; // [rsp+78h] [rbp-1h] BYREF
  __int128 v44; // [rsp+88h] [rbp+Fh] BYREF

  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  LOBYTE(v4) = 0;
  v5 = 0;
  v44 = 0LL;
  v8 = ExAcquireRundownProtectionCacheAware(v3);
  v9 = v8 == 0 ? 0xC0000056 : 0;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  v40 = v9;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v44);
    if ( v10 > 0x16 || (v12 = 4718720, !_bittest(&v12, v10)) )
    {
      if ( (byte_140171462 & 0x20) != 0 )
        McTemplateK0pddp_EtwWriteTransfer(v11, v7, (unsigned int)&v44, a2, v10, 0, *(_QWORD *)(a1 + 8));
    }
    v9 = v8 == 0 ? 0xC0000056 : 0;
  }
  if ( v8 )
  {
    v5 = 1;
    goto LABEL_9;
  }
  if ( (v10 == 2 || v10 == 20) && *(_DWORD *)(a1 + 88) == 5 )
  {
LABEL_9:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        12LL,
        &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
        a1,
        a2,
        v10);
    }
    if ( v10 > 7 )
    {
      switch ( v10 )
      {
        case 8u:
          InterfaceIrp = RaidAdapterQueryInterfaceIrp(a1, a2);
          break;
        case 9u:
          InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(a1, a2);
          break;
        case 0xDu:
          InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(a1, a2);
          break;
        case 0x13u:
          if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              *(_QWORD *)(a2 + 184),
              v7,
              (unsigned int)&v44,
              a2,
              v10,
              *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
              *(_QWORD *)(a1 + 8));
          InterfaceIrp = NvmeAdapterQueryIdIrp(a1, a2);
          break;
        case 0x14u:
          InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(a1, a2);
          break;
        case 0x16u:
          if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
            McTemplateK0pddp_EtwWriteTransfer(
              *(_QWORD *)(a2 + 184),
              v7,
              (unsigned int)&v44,
              a2,
              v10,
              *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL),
              *(_QWORD *)(a1 + 8));
          InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(a1, a2);
          break;
        case 0x17u:
          v5 = 0;
          InterfaceIrp = RaidAdapterSurpriseRemovalIrp(a1, a2);
          break;
        default:
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
          v5 = 0;
          if ( StorEtwLoggingEnabled )
          {
            v43 = 0LL;
            IoGetActivityIdIrp(a2, &v43);
            if ( (byte_140171462 & 0x20) != 0 )
              McTemplateK0pd_EtwWriteTransfer(v27, &EventPnpRequestComplete, &v43, a2, *(_DWORD *)(a2 + 48));
          }
          InterfaceIrp = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          break;
      }
      goto LABEL_15;
    }
    switch ( v10 )
    {
      case 7u:
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x20) != 0 )
          McTemplateK0pddp_EtwWriteTransfer(
            *(_QWORD *)(a2 + 184),
            v7,
            (unsigned int)&v44,
            a2,
            7,
            *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL),
            *(_QWORD *)(a1 + 8));
        InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(a1, a2);
        break;
      case 0u:
        InterfaceIrp = RaidAdapterStartDeviceIrp((PVOID)a1, (PIRP)a2);
        break;
      case 1u:
        InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(a1, a2);
        break;
      case 2u:
        v5 = 0;
        InterfaceIrp = RaidAdapterRemoveDeviceIrp(a1, a2);
        break;
      case 3u:
        goto LABEL_83;
      case 4u:
        InterfaceIrp = RaidAdapterStopDeviceIrp(a1, a2);
        break;
      case 5u:
        InterfaceIrp = RaidAdapterQueryStopDeviceIrp(a1, a2);
        break;
      default:
LABEL_83:
        InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(a1, a2);
        break;
    }
LABEL_15:
    v14 = InterfaceIrp;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        13LL,
        &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
        a1,
        a2,
        v10,
        InterfaceIrp);
    }
    if ( v5 )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
    return v14;
  }
  v16 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v16 )
    goto LABEL_48;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v17, &EventNonReadWriteRequestComplete, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_48;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 == 27 )
    {
      if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v19 = *(int **)(a2 + 56);
          if ( v19 )
            v4 = *v19;
          McTemplateK0pqd_EtwWriteTransfer((_DWORD)v17, v18, (unsigned int)&v43, a2, v4, *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_140171462 & 0x20) != 0 )
      {
        McTemplateK0pd_EtwWriteTransfer(v17, &EventPnpRequestComplete, &v43, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_48;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_48;
  v20 = *(_QWORD *)(v18 + 8);
  v28 = 0;
  v29 = 0LL;
  v38 = 0;
  v30 = 0;
  v22 = 0;
  v25 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v20 + 72);
    v29 = *(_BYTE **)(v20 + 32);
    v30 = *(_BYTE *)(v20 + 11);
    v28 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_132;
    goto LABEL_48;
  }
  v31 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_48;
  LODWORD(v17) = 0;
  v41 = 0;
  if ( !*(_DWORD *)(v20 + 56) )
    goto LABEL_129;
  v32 = *(_DWORD *)(v20 + 56);
  v33 = (unsigned int *)(v20 + 120);
  v42 = v20 + 120;
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_122:
    LODWORD(v17) = (_DWORD)v17 + 1;
    v33 = (unsigned int *)(v42 + 4);
    v41 = (int)v17;
    v42 += 4LL;
    if ( (unsigned int)v17 >= v32 )
      goto LABEL_129;
  }
  if ( *(_DWORD *)(v34 + v20) != 64 )
  {
    LODWORD(v17) = *(_DWORD *)(v34 + v20) - 65;
    if ( *(_DWORD *)(v34 + v20) == 65 )
    {
      LODWORD(v17) = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v34 + v20 + 10) )
          v31 = (char *)(v34 + v20 + 24);
        v28 = *(_BYTE *)(v34 + v20 + 8);
        v29 = *(_BYTE **)(v34 + v20 + 16);
        v30 = *(_BYTE *)(v34 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v34 + v20) == 66 )
    {
      LODWORD(v17) = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v34 + v20 + 12) )
          v31 = (char *)(v34 + v20 + 32);
        v29 = *(_BYTE **)(v34 + v20 + 24);
        goto LABEL_128;
      }
    }
    goto LABEL_120;
  }
  LODWORD(v17) = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_120:
    if ( v39 )
      goto LABEL_129;
    LODWORD(v17) = v41;
    v32 = *(_DWORD *)(v20 + 56);
    goto LABEL_122;
  }
  if ( *(_BYTE *)(v34 + v20 + 10) )
    v31 = (char *)(v34 + v20 + 24);
  v29 = *(_BYTE **)(v34 + v20 + 16);
LABEL_128:
  v30 = *(_BYTE *)(v34 + v20 + 9);
  v28 = *(_BYTE *)(v34 + v20 + 8);
LABEL_129:
  if ( v31 )
  {
    v36 = *v31;
    v25 = 0;
LABEL_132:
    LOBYTE(v17) = v36 - 8;
    if ( ((unsigned __int8)v17 & 0x5D) == 0 )
    {
      v37 = *(_BYTE *)(v20 + 3);
      if ( v37 == 1 || !v29 || !v30 )
        goto LABEL_71;
      LOBYTE(v20) = 0;
      v17 = &v29[v30];
      v21 = v29 + 8;
      if ( (unsigned __int8)((*v29 & 0x7F) - 114) <= 1u )
      {
        if ( v21 <= v17 )
        {
          LOBYTE(v20) = 1;
          v25 = v29[2];
          v22 = v29[1] & 0xF;
          v24 = v29[3];
        }
      }
      else
      {
        if ( v21 <= v17 )
        {
          v22 = v29[2] & 0xF;
          v23 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v23 = (unsigned __int8)v29[7] + 8;
          v17 = v29 + 13;
          v20 = (unsigned __int64)&v29[v23];
          if ( (unsigned __int64)(v29 + 13) > v20 )
            v38 = 0;
          else
            v38 = v29[12];
          if ( (unsigned __int64)(v29 + 14) <= v20 )
            v24 = *v17;
          LOBYTE(v20) = 1;
        }
        v25 = v38;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v4) = v25;
        v26 = v24;
      }
      else
      {
LABEL_71:
        v22 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v17,
        v20,
        (unsigned int)&v43,
        a2,
        *(_DWORD *)(a2 + 48),
        v37,
        v28,
        v22,
        v4,
        v26,
        a2);
    }
  }
LABEL_48:
  IofCompleteRequest((PIRP)a2, 0);
  return v40;
}
