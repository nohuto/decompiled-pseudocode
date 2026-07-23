/*
 * XREFs of WmipIoControl @ 0x1409B1150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x140402530 (IoIs32bitProcess.c)
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WmipEnumerateGuids @ 0x1407A4EA0 (WmipEnumerateGuids.c)
 *     WmipQuerySingleMultiple @ 0x1407A5030 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x1407A5594 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1407A5604 (WmipTranslateFileHandle.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     WmipProbeWnodeMethodItem @ 0x1409B0990 (WmipProbeWnodeMethodItem.c)
 *     WmipQueryGuidInfo @ 0x1409B0BE4 (WmipQueryGuidInfo.c)
 *     WmipProbeWnodeSingleInstance @ 0x1409B0CB4 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeWorker @ 0x1409B0D34 (WmipProbeWnodeWorker.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x1409B0F78 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     WmipQueryAllDataMultiple @ 0x1409B169C (WmipQueryAllDataMultiple.c)
 *     WmipOpenBlock @ 0x1409B25B0 (WmipOpenBlock.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     WmipEnumerateMofResources @ 0x140A75B00 (WmipEnumerateMofResources.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // r15d
  __int64 *p_Type; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  unsigned int v9; // eax
  int SetExecuteSI; // eax
  int v11; // ebx
  unsigned int *v13; // r9
  ACCESS_MASK v14; // r14d
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rax
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int128 v25; // [rsp+98h] [rbp-70h] BYREF
  _WORD v26[48]; // [rsp+A8h] [rbp-60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  p_Type = (__int64 *)&a2->AssociatedIrp.MasterIrp->Type;
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
          v11 = WmipProbeWnodeSingleInstance(p_Type, Options, Length, 0);
          if ( v11 < 0 )
            goto LABEL_15;
          break;
        case 0x22800Cu:
          v11 = WmipProbeWnodeSingleItem(p_Type, Options);
          if ( v11 < 0 )
            goto LABEL_15;
          break;
        case 0x228024u:
          v11 = WmipProbeWnodeMethodItem(p_Type, Options, Length);
          if ( v11 < 0 )
            goto LABEL_15;
LABEL_61:
          LODWORD(Handle) = Options;
          SetExecuteSI = WmipQuerySetExecuteSI(0LL, (__int64)p_Type, Length, (__int64)&Handle);
          goto LABEL_13;
        case 0x22811Cu:
          if ( (_DWORD)Options == 22 )
          {
            SetExecuteSI = WmipTranslateFileHandle(p_Type, (unsigned int *)&Handle);
            goto LABEL_13;
          }
          goto LABEL_50;
        case 0x22812Cu:
          if ( Length >= 0x38 && (char *)p_Type + 4 <= (char *)p_Type + Options )
          {
            v9 = *(_DWORD *)p_Type - 1;
            if ( v9 <= 0xFFE && &p_Type[v9 + 2] <= (__int64 *)((char *)p_Type + Options) )
            {
              SetExecuteSI = WmipQueryAllDataMultiple(
                               0,
                               0,
                               (int)a2,
                               1,
                               p_Type,
                               Length,
                               (__int64)p_Type,
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
          if ( Length >= 0x38 && (char *)p_Type + 4 <= (char *)p_Type + Options )
          {
            v18 = (unsigned int)(*(_DWORD *)p_Type - 1);
            if ( (unsigned int)v18 <= 0xFFE && &p_Type[3 * v18 + 4] <= (__int64 *)((char *)p_Type + Options) )
            {
              SetExecuteSI = WmipQuerySingleMultiple(
                               (__int64)a2,
                               1,
                               (char *)p_Type,
                               Length,
                               (__int64)p_Type,
                               *(_DWORD *)p_Type,
                               0LL,
                               0LL,
                               (int *)&Handle);
              goto LABEL_13;
            }
          }
          goto LABEL_74;
        case 0x228144u:
          if ( Length < 0x38 || (unsigned int)Options < 0x10 || *(_DWORD *)p_Type > (unsigned int)(Options - 8) >> 3 )
          {
            v11 = -1073741808;
            goto LABEL_15;
          }
          SetExecuteSI = WmipReceiveNotifications((unsigned int *)p_Type, (int *)&Handle, (__int64)a2);
          goto LABEL_13;
        default:
          goto LABEL_86;
      }
      LODWORD(Handle) = Options;
      SetExecuteSI = WmipQuerySetExecuteSI(0LL, (__int64)p_Type, Options, (__int64)&Handle);
      Length = 0;
      goto LABEL_14;
    }
LABEL_91:
    if ( Length >= 8 )
    {
      SetExecuteSI = WmipEnumerateGuids(LowPart, p_Type, Length, &Handle);
      goto LABEL_13;
    }
    goto LABEL_64;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        SetExecuteSI = WmipEnumerateMofResources(p_Type, Length, &Handle);
        goto LABEL_13;
      }
      goto LABEL_74;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          v16 = *((_DWORD *)p_Type + 11);
          if ( (v16 & 1) != 0 && (_DWORD)Options == *(_DWORD *)p_Type && (v16 & 0xFFFFFF7E) == 0 )
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
                  (__int64)p_Type,
                  0x40u,
                  *((_DWORD *)p_Type + 12),
                  *((_DWORD *)p_Type + 14),
                  *((_DWORD *)p_Type + 15),
                  Options,
                  Length,
                  1,
                  0);
          if ( v11 >= 0 )
          {
            v17 = *((_DWORD *)p_Type + 11);
            if ( (v17 & 2) == 0 || (_DWORD)Options != *(_DWORD *)p_Type || (v11 = 0, (v17 & 0xFFFFFF7D) != 0) )
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
        *(_DWORD *)p_Type = 1;
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
        SetExecuteSI = WmipQueryGuidInfo((__int64)p_Type);
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
  v23 = 0LL;
  *(_OWORD *)Object_8 = 0LL;
  LODWORD(v24) = 0;
  v22 = 0LL;
  v25 = 0LL;
  if ( IoIs32bitProcess(0LL) )
  {
    if ( (_DWORD)Options == 16 && Length == 16 )
    {
      v13 = (unsigned int *)*(unsigned int *)p_Type;
      v14 = *((_DWORD *)p_Type + 1);
LABEL_34:
      v11 = WmipProbeAndCaptureGuidObjectAttributes(Object_8, (unsigned __int16 *)&v25, v26, v13);
      if ( v11 >= 0 && (Object_8[1] || DWORD2(v22) || v23 || v24) )
        v11 = -1073741811;
      if ( v11 >= 0 )
      {
        LOBYTE(v15) = 1;
        v11 = WmipOpenBlock(LowPart, v15, (unsigned int)Object_8, v14, (__int64)&Object);
        if ( v11 >= 0 )
        {
          v11 = ObOpenObjectByPointer(Object, 0, 0LL, v14, WmipGuidObjectType, 1, &Handle);
          if ( v11 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              *((_DWORD *)p_Type + 2) = (_DWORD)Handle;
            else
              p_Type[2] = (__int64)Handle;
          }
          ObfDereferenceObject(Object);
        }
      }
      goto LABEL_15;
    }
  }
  else if ( (_DWORD)Options == 24 && Length == 24 )
  {
    v13 = (unsigned int *)*p_Type;
    v14 = *((_DWORD *)p_Type + 2);
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
