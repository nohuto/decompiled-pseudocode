/*
 * XREFs of RaUnitSmartReturnStatus @ 0x140099048
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1400987C8 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     StorBuildSynchronousScsiRequest @ 0x14000C61C (StorBuildSynchronousScsiRequest.c)
 *     StorFreeSynchronousScsiRequest @ 0x14000D344 (StorFreeSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x14000D390 (PortSrbTranslateSrbToNtStatus.c)
 *     RaSendIrpSynchronous @ 0x140015550 (RaSendIrpSynchronous.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool v3; // zf
  _BYTE *v4; // r15
  char v7; // si
  char v8; // r11
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned int *v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // rdi
  unsigned __int8 v14; // bp
  IRP *v15; // rax
  IRP *v16; // r13
  int Status; // r14d
  char v18; // r12
  char v19; // r11
  unsigned int v20; // r15d
  unsigned int v21; // r10d
  unsigned int *v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  char v25; // cl
  _BYTE *v26; // rcx
  int v27; // eax
  unsigned __int16 v28; // dx
  _DEVICE_OBJECT *AttachedDevice; // rcx
  int v30; // r9d
  char v31; // r10
  _BYTE *v32; // rdx
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // r8
  __int64 i; // r9
  unsigned __int8 v37; // cl
  _IO_STATUS_BLOCK v39; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v40[8]; // [rsp+80h] [rbp+8h]
  _BYTE *v41; // [rsp+90h] [rbp+18h]

  v41 = (_BYTE *)a3;
  v3 = *(_BYTE *)(a2 + 2) == 40;
  v39 = 0LL;
  v4 = (_BYTE *)a3;
  v7 = 1;
  if ( v3 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      v10 = 0;
      if ( v9 )
      {
        v11 = (unsigned int *)(a2 + 120);
        while ( 1 )
        {
          v12 = *v11;
          if ( (unsigned int)v12 >= 0x80 )
          {
            a3 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v12 < (unsigned int)a3 )
              break;
          }
LABEL_12:
          ++v10;
          ++v11;
          if ( v10 >= v9 )
            goto LABEL_13;
        }
        if ( *(_DWORD *)(v12 + a2) != 64 )
        {
          if ( *(_DWORD *)(v12 + a2) == 65 )
          {
            if ( v12 + 56 <= a3 )
              v8 = 1;
            goto LABEL_11;
          }
          if ( *(_DWORD *)(v12 + a2) != 66 )
            goto LABEL_11;
        }
        if ( v12 + 40 <= a3 )
          goto LABEL_13;
LABEL_11:
        if ( v8 )
          goto LABEL_13;
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  v13 = 0LL;
  v14 = 0;
  v15 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), a2, a3, &v39);
  v16 = v15;
  if ( !v15 )
    return (unsigned int)-1073741801;
  Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v15);
  if ( Status < 0 )
    goto LABEL_86;
  Status = v16->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_86;
  v18 = *(_BYTE *)(a2 + 3);
  Status = PortSrbTranslateSrbToNtStatus(v18);
  if ( Status < 0 )
    goto LABEL_86;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v13 = *(_BYTE **)(a2 + 32);
    v14 = *(_BYTE *)(a2 + 11);
    goto LABEL_33;
  }
  v19 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_33;
  v20 = *(_DWORD *)(a2 + 56);
  v21 = 0;
  if ( !v20 )
    goto LABEL_32;
  v22 = (unsigned int *)(a2 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_45:
    ++v21;
    ++v22;
    if ( v21 >= v20 )
      goto LABEL_32;
  }
  if ( *(_DWORD *)(v23 + a2) != 64 )
  {
    if ( *(_DWORD *)(v23 + a2) == 65 )
    {
      if ( v23 + 56 <= v24 )
      {
        v13 = *(_BYTE **)(v23 + a2 + 16);
        v19 = 1;
        v14 = *(_BYTE *)(v23 + a2 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + a2) == 66 && v23 + 40 <= v24 )
    {
      v13 = *(_BYTE **)(v23 + a2 + 24);
      goto LABEL_31;
    }
    goto LABEL_44;
  }
  if ( v23 + 40 > v24 )
  {
LABEL_44:
    if ( v19 )
      goto LABEL_32;
    goto LABEL_45;
  }
  v13 = *(_BYTE **)(v23 + a2 + 16);
LABEL_31:
  v14 = *(_BYTE *)(v23 + a2 + 9);
LABEL_32:
  v4 = v41;
LABEL_33:
  if ( v18 < 0 && v13 )
  {
    v25 = *v13 & 0x7F;
    if ( (unsigned __int8)(v25 - 114) <= 1u )
    {
      v31 = 0;
      if ( v14 )
      {
        v32 = 0LL;
        v33 = 0;
        if ( (unsigned __int8)(v25 - 114) <= 1u )
        {
          if ( v13 + 8 <= &v13[v14] )
          {
            v34 = v13[7];
            if ( v34 <= 0xF7u )
            {
              v35 = v34 + 8;
              if ( (unsigned __int8)(v34 + 8) > v14 )
                v35 = v14;
              v33 = v35 - 8;
              if ( v33 )
              {
                v32 = v13 + 8;
                v31 = 1;
              }
            }
          }
          if ( v31 )
          {
            v40[0] = 9;
            if ( v32 )
            {
              if ( v33 )
              {
LABEL_69:
                if ( v33 >= 2u )
                {
                  for ( i = 0LL; ; i = 1LL )
                  {
                    if ( (_DWORD)i )
                    {
                      v37 = v32[1] + 2;
                      if ( v33 <= v37 )
                        goto LABEL_86;
                      v32 += v37;
                      v33 -= v37;
                      goto LABEL_69;
                    }
                    if ( *v32 == v40[i] )
                      break;
                  }
                  if ( v33 >= 0xEu && v32 )
                  {
                    if ( v32[9] != 0xF4 || v32[11] != 44 )
                      v7 = 0;
                    *v4 = v7;
                    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                    {
                      v27 = (unsigned __int8)v32[11];
                      v30 = (unsigned __int8)v32[9];
                      v28 = 73;
                      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
                      goto LABEL_57;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( (unsigned __int8)(v25 - 112) <= 1u )
    {
      if ( v14 >= 0xCu )
      {
        v26 = v13 + 9;
        if ( v13[10] != 0xF4 || *v26 != 44 )
          v7 = 0;
        *v4 = v7;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v27 = (unsigned __int8)*v26;
          v28 = 74;
          AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
          v30 = (unsigned __int8)v13[10];
LABEL_57:
          WPP_SF_DD((__int64)AttachedDevice, v28, (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids, v30, v27);
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Bu,
        (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids);
    }
  }
  else
  {
    Status = -1073741823;
  }
LABEL_86:
  StorFreeSynchronousScsiRequest(v16);
  return (unsigned int)Status;
}
