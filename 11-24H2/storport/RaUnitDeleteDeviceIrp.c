/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1400927F4
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x140095E34 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidAdapterRemoveUnit @ 0x140030230 (RaidAdapterRemoveUnit.c)
 *     RaidDeleteUnit @ 0x1400381B0 (RaidDeleteUnit.c)
 *     RaUnitWaitForRemoveLock @ 0x14003E098 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterRemoveZombieUnit @ 0x14005DFAC (RaidAdapterRemoveZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1400A1400 (RaidUnitUnRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned int v7; // eax
  __int64 v8; // r15
  int v9; // edi
  unsigned int v10; // r13d
  __int64 v11; // rcx
  char v12; // bl
  struct _DEVICE_OBJECT *v13; // rcx
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r15
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // bl
  char v24; // r11
  char v25; // r12
  char *v26; // r11
  unsigned int *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  char v36; // [rsp+60h] [rbp-19h]
  char v37; // [rsp+61h] [rbp-18h]
  unsigned int v38; // [rsp+64h] [rbp-15h]
  int v39; // [rsp+68h] [rbp-11h]
  unsigned int v40; // [rsp+6Ch] [rbp-Dh]
  GUID v41; // [rsp+80h] [rbp+7h] BYREF

  if ( ((_InterlockedExchange((volatile __int32 *)(a1 + 56), 6) - 5) & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces();
  v4 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v5 = *(_DWORD *)(v4 + *(_QWORD *)(a1 + 40));
  while ( (v5 & 1) == 0 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + *(_QWORD *)(a1 + 40)), v5 - 2, v5);
    if ( v6 == v5 )
      goto LABEL_9;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_9:
  v7 = RaUnitWaitForRemoveLock(a1);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  v10 = v7;
  v38 = v7;
  if ( *(_DWORD *)(v8 + 88) != 5 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
    {
      if ( *(_DWORD *)v8 == 1094997074 )
      {
        v11 = v8 + 376;
      }
      else
      {
        v11 = v8 + 168;
        if ( *(_DWORD *)v8 != 1314275652 )
          v11 = 0LL;
      }
      RaCallMiniportUnitControl(v11);
    }
    if ( (*(_BYTE *)(a1 + 504) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v8, a1);
    else
      RaidAdapterRemoveUnit(v8, a1);
  }
  v12 = *(_BYTE *)(a1 + 504);
  RaidDeleteUnit(a1);
  if ( (v12 & 0x40) != 0 )
  {
    v13 = *(struct _DEVICE_OBJECT **)(v8 + 32);
    *(_BYTE *)(v8 + 106) = 1;
    IoInvalidateDeviceRelations(v13, BusRelations);
  }
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v10;
  if ( v14 )
    goto LABEL_88;
  v41 = 0LL;
  IoGetActivityIdIrp(a2, &v41);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    v18 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v9 = *v17;
        McTemplateK0pqd_EtwWriteTransfer(v15, v16, &v41, a2, v9, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v18 = &EventPnpRequestComplete;
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v41, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v36 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_64;
    goto LABEL_88;
  }
  v26 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_88;
  v15 = 0LL;
  v39 = 0;
  v40 = *(_DWORD *)(v19 + 56);
  if ( !v40 )
    goto LABEL_61;
  v27 = (unsigned int *)(v19 + 120);
  while ( 1 )
  {
    v28 = *v27;
    if ( (unsigned int)v28 >= 0x80 )
    {
      v29 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v28 < (unsigned int)v29 )
        break;
    }
LABEL_54:
    v15 = (unsigned int)(v15 + 1);
    ++v27;
    v39 = v15;
    if ( (unsigned int)v15 >= v40 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v28 + v19) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v28 + v19) - 65);
    if ( *(_DWORD *)(v28 + v19) == 65 )
    {
      v15 = v28 + 56;
      if ( v28 + 56 <= v29 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v28 + v19 + 10) )
          v26 = (char *)(v28 + v19 + 24);
        v20 = *(_BYTE *)(v28 + v19 + 8);
        v21 = *(_BYTE **)(v28 + v19 + 16);
        v22 = *(_BYTE *)(v28 + v19 + 9);
      }
    }
    else if ( *(_DWORD *)(v28 + v19) == 66 )
    {
      v15 = v28 + 40;
      if ( v28 + 40 <= v29 )
      {
        if ( *(_DWORD *)(v28 + v19 + 12) )
          v26 = (char *)(v28 + v19 + 32);
        v21 = *(_BYTE **)(v28 + v19 + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v15 = v28 + 40;
  if ( v28 + 40 > v29 )
  {
LABEL_52:
    if ( v37 )
      goto LABEL_60;
    LODWORD(v15) = v39;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v28 + v19 + 10) )
    v26 = (char *)(v28 + v19 + 24);
  v21 = *(_BYTE **)(v28 + v19 + 16);
LABEL_59:
  v22 = *(_BYTE *)(v28 + v19 + 9);
  v20 = *(_BYTE *)(v28 + v19 + 8);
LABEL_60:
  v10 = v38;
LABEL_61:
  if ( v26 )
  {
    v30 = *v26;
    v24 = 0;
LABEL_64:
    LOBYTE(v15) = v30 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v19 + 3);
      if ( v31 == 1 || !v21 || !v22 )
        goto LABEL_83;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v32 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v33 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v33 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v33];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v36 = 0;
          else
            v36 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v19 )
            v25 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v24 = v36;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v9) = v24;
        v34 = v25;
      }
      else
      {
LABEL_83:
        v23 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v41, a2, *(_DWORD *)(a2 + 48), v31, v20, v23, v9, v34, a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return v10;
}
