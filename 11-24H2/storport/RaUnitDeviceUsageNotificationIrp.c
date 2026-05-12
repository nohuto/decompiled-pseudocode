/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     StorUpdateCrashDumpPowerReady @ 0x14001D620 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidSecondaryDumpDeregister @ 0x1400BD65C (RaidSecondaryDumpDeregister.c)
 *     RaidSecondaryDumpRegister @ 0x1400BD6A4 (RaidSecondaryDumpRegister.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1400BE2BC (RaidNotifyPoAboutSpecialDevice.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // ebx
  __int64 v5; // r15
  volatile signed __int32 *v7; // rsi
  int v8; // eax
  _QWORD *v9; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  char v12; // al
  const wchar_t *v13; // rdx
  const wchar_t *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int Status; // r14d
  IRP *v18; // rax
  _QWORD *v19; // rax
  _IO_STACK_LOCATION *v20; // rcx
  PIRP v21; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rdx
  __int64 v29; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int *v31; // rcx
  bool v32; // zf
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  char *v41; // rcx
  _BYTE *v42; // rdx
  int *v43; // rax
  void *v44; // rdx
  unsigned __int64 v45; // rdx
  char v46; // r12
  _BYTE *v47; // r9
  unsigned __int8 v48; // r10
  char v49; // r11
  char v50; // si
  char v51; // r8
  char *v52; // rdi
  unsigned int v53; // r13d
  unsigned __int64 v54; // rsi
  __int64 v55; // r8
  int v56; // ecx
  char v57; // cl
  char v58; // di
  char *v59; // rax
  unsigned int v60; // eax
  char v61; // al
  char v63; // [rsp+60h] [rbp-A0h]
  char v64; // [rsp+60h] [rbp-A0h]
  char v65; // [rsp+61h] [rbp-9Fh]
  char v66; // [rsp+61h] [rbp-9Fh]
  char v67; // [rsp+62h] [rbp-9Eh] BYREF
  int v68; // [rsp+64h] [rbp-9Ch]
  char v69; // [rsp+68h] [rbp-98h] BYREF
  char v70; // [rsp+69h] [rbp-97h] BYREF
  char v71; // [rsp+6Ah] [rbp-96h] BYREF
  unsigned int v72; // [rsp+6Ch] [rbp-94h] BYREF
  PIRP Irp; // [rsp+70h] [rbp-90h]
  __int128 v74; // [rsp+78h] [rbp-88h]
  __int128 v75; // [rsp+88h] [rbp-78h] BYREF
  __int128 v76; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  unsigned int *v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  char *v84; // [rsp+100h] [rbp+0h]
  __int64 v85; // [rsp+108h] [rbp+8h]
  char *v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  char *v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  char v90[16]; // [rsp+130h] [rbp+30h] BYREF
  char *v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  char v93[16]; // [rsp+150h] [rbp+50h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  LOBYTE(v4) = 0;
  v63 = 0;
  v5 = a2;
  v7 = 0LL;
  v74 = 0LL;
  v76 = 0LL;
  if ( !v3 || (v8 = *(_DWORD *)(a1 + 56)) == 0 || (unsigned int)(v8 - 5) <= 1 )
  {
    Status = -1073741810;
    v9 = (_QWORD *)(a2 + 184);
    goto LABEL_86;
  }
  v9 = (_QWORD *)(a2 + 184);
  v10 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&v75 = v10;
  LOBYTE(a2) = *(_BYTE *)(v10 + 8);
  v68 = *(_DWORD *)(v10 + 16);
  v65 = a2;
  switch ( v68 )
  {
    case 1:
      v7 = (volatile signed __int32 *)(a1 + 1036);
      goto LABEL_22;
    case 2:
      v7 = (volatile signed __int32 *)(a1 + 1044);
      goto LABEL_22;
    case 3:
      v7 = (volatile signed __int32 *)(a1 + 1040);
LABEL_22:
      v63 = 1;
      goto LABEL_23;
  }
  v11 = (unsigned int)(v68 - 4);
  if ( v68 == 4 )
  {
    v12 = *(_BYTE *)(a1 + 506);
    if ( (_BYTE)a2 )
    {
      *(_BYTE *)(a1 + 506) = v12 | 1;
      *(_BYTE *)(v3 + 104) |= 0x80u;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4932LL) )
        RaidSecondaryDumpRegister(a1, a2, a3, 1LL);
      if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v11, 0x400000000000LL) )
      {
        v13 = *(const wchar_t **)(v3 + 4720);
        v78 = v3 + 5064;
        v79 = 16LL;
        v80 = a1 + 2104;
        v72 = *(_DWORD *)(v3 + 56);
        v82 = &v72;
        v67 = *(_BYTE *)(a1 + 104);
        v84 = &v67;
        v69 = *(_BYTE *)(a1 + 105);
        v86 = &v69;
        v70 = *(_BYTE *)(a1 + 106);
        v88 = &v70;
        v81 = 16LL;
        v83 = 4LL;
        v85 = 1LL;
        v87 = 1LL;
        v89 = 1LL;
        tlgCreate1Sz_wchar_t((__int64)v90, v13);
        v14 = *(const wchar_t **)(v3 + 4728);
        v71 = *(_BYTE *)(a1 + 3432);
        v91 = &v71;
        v92 = 1LL;
        tlgCreate1Sz_wchar_t((__int64)v93, v14);
        tlgWriteTransfer_EtwWriteTransfer((__int64)v77, (unsigned __int8 *)dword_14015E87B, v15, v16, 0xBu, v77);
      }
    }
    else
    {
      *(_BYTE *)(a1 + 506) = v12 & 0xFE;
      *(_BYTE *)(v3 + 104) &= ~0x80u;
      RaidSecondaryDumpDeregister(v11, a2, a3, 1LL);
    }
    v63 = 1;
LABEL_27:
    v18 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v3 + 8) + 76LL) + 3, 0);
    Irp = v18;
    if ( !v18 )
    {
      Status = -1073741801;
      goto LABEL_86;
    }
    Status = RaUnitAcquireRemoveLock(a1, (__int64)v18, 1);
    v19 = v9;
    if ( Status < 0 )
      goto LABEL_83;
    v20 = (_IO_STACK_LOCATION *)v75;
    v21 = Irp;
    Irp->Tail.Overlay.Thread = *(_ETHREAD **)(v5 + 152);
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v21->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1] = *v20;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v3 + 8), v21);
    if ( Status < 0 || (Status = Irp->IoStatus.Status, Status < 0) )
    {
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v24, v23) )
      {
        if ( Status != -1073741637 || v68 != 4 && v68 != 7 )
          goto LABEL_79;
      }
      else if ( Status != -1073741637 || v68 != 4 )
      {
        v25 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v26 = *(_DWORD *)(v25 + *(_QWORD *)(a1 + 40));
        while ( (v26 & 1) == 0 )
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v25 + *(_QWORD *)(a1 + 40)), v26 - 2, v26);
          if ( v27 == v26 )
            goto LABEL_84;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) != 1 )
          goto LABEL_84;
        goto LABEL_39;
      }
      Status = 0;
    }
    if ( v7 )
    {
      if ( v65 )
        _InterlockedAdd(v7, 1u);
      else
        _InterlockedDecrement(v7);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( v68 == 1 )
        RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 8), *(unsigned int *)v7);
    }
    if ( v63 && RaidIsUnitControlSupported(a1, 1) )
    {
      LOWORD(v76) = 1;
      v29 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 56LL);
      WORD4(v76) = *(_WORD *)(a1 + 104);
      BYTE10(v76) = *(_BYTE *)(a1 + 106);
      *(_QWORD *)&v74 = &v76;
      DWORD2(v74) = v68;
      BYTE12(v74) = v65;
      WORD1(v76) = v29;
      DWORD1(v76) = 4;
      IsEnabledDeviceUsageNoInline = Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(
                                       v29,
                                       v28);
      v31 = *(int **)(a1 + 24);
      v32 = IsEnabledDeviceUsageNoInline == 0;
      v33 = *v31;
      if ( v32 )
      {
        if ( v33 == 1094997074 )
        {
          v36 = (__int64)(v31 + 94);
        }
        else if ( v33 == 1314275652 )
        {
          v36 = (__int64)(v31 + 42);
        }
        else
        {
          v36 = 0LL;
        }
        RaCallMiniportUnitControl(v36);
        v35 = v68;
      }
      else
      {
        if ( v33 == 1094997074 )
        {
          v34 = (__int64)(v31 + 94);
        }
        else if ( v33 == 1314275652 )
        {
          v34 = (__int64)(v31 + 42);
        }
        else
        {
          v34 = 0LL;
        }
        Status = RaCallMiniportUnitControl(v34);
        v35 = v68;
        if ( Status < 0 )
        {
          if ( v68 == 7 )
          {
            if ( v7 )
            {
              if ( v65 )
                _InterlockedDecrement(v7);
              else
                _InterlockedAdd(v7, 1u);
            }
            goto LABEL_79;
          }
          Status = 0;
        }
      }
    }
    else
    {
      v35 = v68;
    }
    if ( v35 == 3 )
    {
      v37 = *(_DWORD *)(a1 + 1040);
      if ( v37 == 1 )
      {
        if ( !*(_QWORD *)(v3 + 5016) )
        {
          *(_QWORD *)(v3 + 5016) = a1;
          StorUpdateCrashDumpPowerReady(v3);
        }
      }
      else if ( !v37 && a1 == *(_QWORD *)(v3 + 5016) )
      {
        *(_QWORD *)(v3 + 5016) = 0LL;
      }
    }
LABEL_79:
    v38 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v39 = *(_DWORD *)(v38 + *(_QWORD *)(a1 + 40));
    while ( (v39 & 1) == 0 )
    {
      v40 = v39;
      v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + *(_QWORD *)(a1 + 40)), v39 - 2, v39);
      if ( v40 == v39 )
        goto LABEL_84;
    }
    v19 = v9;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    {
LABEL_39:
      KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_84:
      IoFreeIrp(Irp);
      goto LABEL_86;
    }
LABEL_83:
    v9 = v19;
    goto LABEL_84;
  }
  if ( v68 != 7 || !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline(v11, a2) )
    goto LABEL_27;
  v7 = (volatile signed __int32 *)(a1 + 1048);
  v63 = 1;
LABEL_23:
  if ( !v7 || *v7 || *(_BYTE *)(v10 + 8) )
    goto LABEL_27;
  Status = -1073741823;
LABEL_86:
  v32 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v5 + 141) = -84;
  *(_DWORD *)(v5 + 48) = Status;
  if ( v32 )
    goto LABEL_152;
  v75 = 0LL;
  IoGetActivityIdIrp(v5, &v75);
  v42 = (_BYTE *)*v9;
  if ( *(_BYTE *)*v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_152;
    v44 = &EventNonReadWriteRequestComplete;
    goto LABEL_151;
  }
  if ( *(_BYTE *)*v9 != 15 )
  {
    if ( *(_BYTE *)*v9 != 27 )
      goto LABEL_152;
    if ( v42[1] == 7 && !*((_DWORD *)v42 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v43 = *(int **)(v5 + 56);
        if ( v43 )
          v4 = *v43;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v41, (_DWORD)v42, (unsigned int)&v75, v5, v4, *(_DWORD *)(v5 + 48));
      }
      goto LABEL_152;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_152;
    v44 = &EventPnpRequestComplete;
LABEL_151:
    McTemplateK0pd_EtwWriteTransfer(v41, v44, &v75, v5, *(_DWORD *)(v5 + 48));
    goto LABEL_152;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_152;
  v45 = *((_QWORD *)v42 + 1);
  v46 = 0;
  v47 = 0LL;
  v64 = 0;
  v48 = 0;
  v66 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( *(_BYTE *)(v45 + 2) != 40 )
  {
    v57 = *(_BYTE *)(v45 + 72);
    v47 = *(_BYTE **)(v45 + 32);
    v48 = *(_BYTE *)(v45 + 11);
    v46 = *(_BYTE *)(v45 + 4);
    if ( !*(_BYTE *)(v45 + 2) )
      goto LABEL_127;
    goto LABEL_152;
  }
  v52 = 0LL;
  v67 = 0;
  if ( *(_DWORD *)(v45 + 20) )
    goto LABEL_152;
  v53 = 0;
  v72 = *(_DWORD *)(v45 + 56);
  if ( !v72 )
    goto LABEL_124;
  while ( 1 )
  {
    v41 = (char *)*(unsigned int *)(v45 + 4LL * v53 + 120);
    if ( (unsigned int)v41 >= 0x80 )
    {
      v54 = *(unsigned int *)(v45 + 16);
      if ( (unsigned int)v41 < (unsigned int)v54 )
        break;
    }
LABEL_117:
    if ( ++v53 >= v72 )
      goto LABEL_123;
  }
  v55 = (unsigned int)v41;
  v56 = *(_DWORD *)&v41[v45] - 64;
  if ( v56 )
  {
    LODWORD(v41) = v56 - 1;
    if ( (_DWORD)v41 )
    {
      if ( (_DWORD)v41 == 1 )
      {
        LODWORD(v41) = v55 + 40;
        if ( v55 + 40 <= v54 )
        {
          if ( *(_DWORD *)(v55 + v45 + 12) )
            v52 = (char *)(v55 + v45 + 32);
          v47 = *(_BYTE **)(v55 + v45 + 24);
          goto LABEL_122;
        }
      }
    }
    else
    {
      LODWORD(v41) = v55 + 56;
      if ( v55 + 56 <= v54 )
      {
        v67 = 1;
        if ( *(_BYTE *)(v55 + v45 + 10) )
          v52 = (char *)(v55 + v45 + 24);
        v46 = *(_BYTE *)(v55 + v45 + 8);
        v47 = *(_BYTE **)(v55 + v45 + 16);
        v48 = *(_BYTE *)(v55 + v45 + 9);
      }
    }
    goto LABEL_116;
  }
  LODWORD(v41) = v55 + 40;
  if ( v55 + 40 > v54 )
  {
LABEL_116:
    if ( v67 )
      goto LABEL_123;
    goto LABEL_117;
  }
  if ( *(_BYTE *)(v55 + v45 + 10) )
    v52 = (char *)(v55 + v45 + 24);
  v47 = *(_BYTE **)(v55 + v45 + 16);
LABEL_122:
  v48 = *(_BYTE *)(v55 + v45 + 9);
  v46 = *(_BYTE *)(v55 + v45 + 8);
LABEL_123:
  v50 = 0;
  v51 = 0;
LABEL_124:
  if ( v52 )
  {
    v57 = *v52;
LABEL_127:
    LOBYTE(v41) = v57 - 8;
    if ( ((unsigned __int8)v41 & 0x5D) == 0 )
    {
      v58 = *(_BYTE *)(v45 + 3);
      if ( v58 == 1 || !v47 || !v48 )
        goto LABEL_147;
      LOBYTE(v45) = 0;
      v41 = &v47[v48];
      v59 = v47 + 8;
      if ( (unsigned __int8)((*v47 & 0x7F) - 114) <= 1u )
      {
        if ( v59 <= v41 )
        {
          LOBYTE(v45) = 1;
          v50 = v47[2];
          v49 = v47[1] & 0xF;
          v51 = v47[3];
        }
      }
      else
      {
        if ( v59 <= v41 )
        {
          v49 = v47[2] & 0xF;
          v60 = v48;
          if ( (unsigned int)(unsigned __int8)v47[7] + 8 <= v48 )
            v60 = (unsigned __int8)v47[7] + 8;
          v41 = v47 + 13;
          v45 = (unsigned __int64)&v47[v60];
          if ( (unsigned __int64)(v47 + 13) > v45 )
            v64 = 0;
          else
            v64 = v47[12];
          if ( (unsigned __int64)(v47 + 14) > v45 )
            v66 = 0;
          else
            v66 = *v41;
          LOBYTE(v45) = 1;
        }
        v51 = v66;
        v50 = v64;
      }
      if ( (_BYTE)v45 )
      {
        LOBYTE(v4) = v50;
        v61 = v51;
      }
      else
      {
LABEL_147:
        v49 = 0;
        v61 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v41,
        v45,
        (unsigned int)&v75,
        v5,
        *(_DWORD *)(v5 + 48),
        v58,
        v46,
        v49,
        v4,
        v61,
        v5);
    }
  }
LABEL_152:
  IofCompleteRequest((PIRP)v5, 0);
  return (unsigned int)Status;
}
