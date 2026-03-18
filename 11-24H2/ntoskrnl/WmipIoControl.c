/*
 * XREFs of WmipIoControl @ 0x1409CCBD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x14040A050 (IoIs32bitProcess.c)
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     WmipEnumerateGuids @ 0x1407A4D90 (WmipEnumerateGuids.c)
 *     WmipQuerySingleMultiple @ 0x1407A4F20 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x1407A5454 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1407A54C4 (WmipTranslateFileHandle.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     WmipOpenBlock @ 0x1409CD2D0 (WmipOpenBlock.c)
 *     WmipQueryAllDataMultiple @ 0x1409CD5A4 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySetExecuteSI @ 0x1409CDA80 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409CDD78 (WmipQueryAllData.c)
 *     WmipProbeWnodeSingleInstance @ 0x140A47584 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeWorker @ 0x140A47604 (WmipProbeWnodeWorker.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140A4C17C (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     WmipQueryGuidInfo @ 0x140A4DE74 (WmipQueryGuidInfo.c)
 *     WmipProbeWnodeMethodItem @ 0x140A5147C (WmipProbeWnodeMethodItem.c)
 *     WmipEnumerateMofResources @ 0x140A7B800 (WmipEnumerateMofResources.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // r15d
  __int64 MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  unsigned int v9; // eax
  int SetExecuteSI; // eax
  int v11; // ebx
  ACCESS_MASK v13; // r14d
  int v14; // edx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  __int128 v24; // [rsp+98h] [rbp-70h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LODWORD(Handle) = Length;
  if ( LowPart > 0x224158 )
  {
    if ( LowPart != 2244960 )
    {
      switch ( LowPart )
      {
        case 0x228008u:
          v11 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
          if ( v11 < 0 )
            goto LABEL_15;
          break;
        case 0x22800Cu:
          v11 = WmipProbeWnodeSingleItem((_DWORD *)MasterIrp, Options);
          if ( v11 < 0 )
            goto LABEL_15;
          break;
        case 0x228024u:
          v11 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
          if ( v11 < 0 )
            goto LABEL_15;
LABEL_61:
          LODWORD(Handle) = Options;
          SetExecuteSI = WmipQuerySetExecuteSI(0LL, MasterIrp, Length, (__int64)&Handle);
          goto LABEL_13;
        case 0x22811Cu:
          if ( (_DWORD)Options == 22 )
          {
            SetExecuteSI = WmipTranslateFileHandle((__int64 *)MasterIrp, (unsigned int *)&Handle);
            goto LABEL_13;
          }
          goto LABEL_50;
        case 0x22812Cu:
          if ( Length >= 0x38 && MasterIrp + 4 <= (unsigned __int64)(MasterIrp + Options) )
          {
            v9 = *(_DWORD *)MasterIrp - 1;
            if ( v9 <= 0xFFE && MasterIrp + 8 * ((unsigned __int64)v9 + 2) <= MasterIrp + Options )
            {
              SetExecuteSI = WmipQueryAllDataMultiple(
                               0,
                               0,
                               (int)a2,
                               1,
                               (void *)MasterIrp,
                               Length,
                               MasterIrp,
                               (__int64)&Handle);
LABEL_13:
              Length = (unsigned int)Handle;
LABEL_14:
              v11 = SetExecuteSI;
              goto LABEL_15;
            }
          }
LABEL_74:
          v11 = -1073741811;
          goto LABEL_15;
        case 0x228130u:
          if ( Length >= 0x38 && MasterIrp + 4 <= (unsigned __int64)(MasterIrp + Options) )
          {
            v17 = (unsigned int)(*(_DWORD *)MasterIrp - 1);
            if ( (unsigned int)v17 <= 0xFFE && MasterIrp + 8 * (3 * v17 + 4) <= (unsigned __int64)(MasterIrp + Options) )
            {
              SetExecuteSI = WmipQuerySingleMultiple(
                               (__int64)a2,
                               1,
                               (char *)MasterIrp,
                               Length,
                               MasterIrp,
                               *(_DWORD *)MasterIrp,
                               0LL,
                               0LL,
                               (int *)&Handle);
              goto LABEL_13;
            }
          }
          goto LABEL_74;
        case 0x228144u:
          if ( Length < 0x38 || (unsigned int)Options < 0x10 || *(_DWORD *)MasterIrp > (unsigned int)(Options - 8) >> 3 )
          {
            v11 = -1073741808;
            goto LABEL_15;
          }
          SetExecuteSI = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)&Handle, (__int64)a2);
          goto LABEL_13;
        default:
          goto LABEL_86;
      }
      LODWORD(Handle) = Options;
      SetExecuteSI = WmipQuerySetExecuteSI(0LL, MasterIrp, Options, (__int64)&Handle);
      Length = 0;
      goto LABEL_14;
    }
LABEL_91:
    if ( Length >= 8 )
    {
      SetExecuteSI = WmipEnumerateGuids(LowPart, (_DWORD *)MasterIrp, Length, &Handle);
      goto LABEL_13;
    }
    goto LABEL_64;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipEnumerateMofResources(MasterIrp, Length, &Handle);
        goto LABEL_13;
      }
      goto LABEL_74;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          v15 = *(_DWORD *)(MasterIrp + 44);
          if ( (v15 & 1) != 0 && (_DWORD)Options == *(_DWORD *)MasterIrp && (v15 & 0xFFFFFF7E) == 0 )
          {
            SetExecuteSI = WmipQueryAllData(0LL, Length, (__int64)&Handle);
            goto LABEL_13;
          }
        }
        goto LABEL_50;
      }
      goto LABEL_64;
    case 0x224004u:
      if ( Length >= 0x38 )
      {
        if ( (unsigned int)Options >= 0x40 && Length >= 0x40 )
        {
          v11 = WmipProbeWnodeWorker(
                  MasterIrp,
                  64,
                  *(_DWORD *)(MasterIrp + 48),
                  *(_DWORD *)(MasterIrp + 56),
                  *(_DWORD *)(MasterIrp + 60),
                  Options,
                  Length,
                  1,
                  0);
          if ( v11 >= 0 )
          {
            v16 = *(_DWORD *)(MasterIrp + 44);
            if ( (v16 & 2) == 0 || (_DWORD)Options != *(_DWORD *)MasterIrp || (v11 = 0, (v16 & 0xFFFFFF7D) != 0) )
              v11 = -1073741823;
          }
          if ( v11 >= 0 )
            goto LABEL_61;
LABEL_15:
          if ( v11 == 259 || v11 == -1073741536 )
            return (unsigned int)v11;
          goto LABEL_17;
        }
        goto LABEL_50;
      }
LABEL_64:
      v11 = -1073741789;
      goto LABEL_17;
    case 0x224108u:
      goto LABEL_30;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)MasterIrp = 1;
        Length = 4;
        v11 = 0;
        goto LABEL_17;
      }
      goto LABEL_64;
    case 0x224134u:
      goto LABEL_91;
    case 0x224138u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipQueryGuidInfo(MasterIrp);
        Length = 16;
        goto LABEL_14;
      }
      goto LABEL_64;
  }
  if ( LowPart != 2244924 && LowPart != 2244928 )
  {
LABEL_86:
    v11 = -1073741808;
    goto LABEL_17;
  }
LABEL_30:
  Handle = 0LL;
  Object = 0LL;
  v22 = 0LL;
  *(_OWORD *)Object_8 = 0LL;
  LODWORD(v23) = 0;
  v21 = 0LL;
  v24 = 0LL;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( (_DWORD)Options == 16 && Length == 16 )
    {
      v13 = *(_DWORD *)(MasterIrp + 4);
LABEL_34:
      v11 = WmipProbeAndCaptureGuidObjectAttributes(Object_8);
      if ( v11 >= 0 && (Object_8[1] || DWORD2(v21) || v22 || v23) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        LOBYTE(v14) = 1;
        v11 = WmipOpenBlock(LowPart, v14, (unsigned int)Object_8, v13, (__int64)&Object);
        if ( v11 >= 0 )
        {
          v11 = ObOpenObjectByPointer(Object, 0, 0LL, v13, WmipGuidObjectType, 1, &Handle);
          if ( v11 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              *(_DWORD *)(MasterIrp + 8) = (_DWORD)Handle;
            else
              *(_QWORD *)(MasterIrp + 16) = Handle;
          }
          ObfDereferenceObject(Object);
        }
      }
      goto LABEL_15;
    }
  }
  else if ( (_DWORD)Options == 24 && Length == 24 )
  {
    v13 = *(_DWORD *)(MasterIrp + 8);
    goto LABEL_34;
  }
LABEL_50:
  v11 = -1073741823;
LABEL_17:
  a2->IoStatus.Status = v11;
  if ( v11 >= 0 )
    v3 = Length;
  a2->IoStatus.Information = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
