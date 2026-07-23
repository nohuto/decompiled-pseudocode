/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x1409CA030
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x140727B14 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgGetDriverPackageId @ 0x1409C9F54 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AA1894 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404ADA64 (PnpValidateMultiSzData.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        WCHAR *a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  int v6; // ebx
  void *Pool2; // rdi
  int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rsi
  UNICODE_STRING *v14; // r13
  ULONG MaximumLength; // ecx
  HANDLE v16; // r9
  int ObjectProperty; // eax
  void *v18; // r9
  __int16 v19; // r11
  int v20; // r10d
  int v21; // eax
  ULONG_PTR v22; // rdx
  int v23; // r8d
  wchar_t *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  wchar_t *Buffer; // rdx
  void *v28; // rax
  size_t Size; // [rsp+68h] [rbp-29h] BYREF
  int v30; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  _QWORD *v32; // [rsp+80h] [rbp-11h]
  unsigned int v33; // [rsp+E8h] [rbp+57h]

  v32 = *(_QWORD **)&PiPnpRtlCtx;
  v6 = 0;
  Handle = 0LL;
  Pool2 = 0LL;
  v8 = 0;
  Size = 0x100000000LL;
  if ( !a4 )
  {
    v6 = PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( v6 < 0 )
      goto LABEL_3;
  }
  v10 = 0LL;
  while ( 2 )
  {
    v30 = v10;
    if ( (unsigned int)v10 >= a6 )
      goto LABEL_53;
    v11 = 5 * v10;
    v12 = *(_DWORD *)(a5 + 40 * v10 + 28);
    v13 = *(_QWORD *)(a5 + 8 * v11 + 16);
    if ( (v12 & 4) != 0 )
    {
      v14 = *(UNICODE_STRING **)(a5 + 8 * v11 + 16);
      v13 = *(_QWORD *)(v13 + 8);
      MaximumLength = v14->MaximumLength;
    }
    else
    {
      MaximumLength = *(_DWORD *)(a5 + 8 * v11 + 24);
      v14 = 0LL;
    }
    v33 = MaximumLength;
    if ( (v12 & 2) != 0 )
    {
      if ( Pool2 || (v8 = 260, (Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x104uLL, 0x63647050u)) != 0LL) )
      {
        v13 = (__int64)Pool2;
        goto LABEL_13;
      }
LABEL_43:
      v6 = -1073741670;
      goto LABEL_3;
    }
    while ( 1 )
    {
      v16 = Handle;
      if ( a4 )
        v16 = a4;
      ObjectProperty = PnpGetObjectProperty(
                         v32,
                         a2,
                         a3,
                         v16,
                         0LL,
                         *(_QWORD *)(a5 + 8 * v11),
                         (_DWORD *)&Size + 1,
                         (const wchar_t *)v13,
                         MaximumLength,
                         (__int64)&Size,
                         0);
      v6 = ObjectProperty;
      if ( ObjectProperty != -1073741789 )
      {
        v18 = Pool2;
        if ( ObjectProperty == -1073741670 )
          goto LABEL_53;
        v19 = 0;
        v20 = v8;
        if ( ObjectProperty < 0 )
          goto LABEL_33;
        v21 = HIDWORD(Size);
        v22 = (unsigned int)Size;
        if ( !HIDWORD(Size) )
        {
          *(_DWORD *)(a5 + 8 * v11 + 8) = 0;
          goto LABEL_26;
        }
        v23 = *(_DWORD *)(a5 + 8 * v11 + 8);
        if ( HIDWORD(Size) == v23 )
        {
          if ( v23 != 18 || HIDWORD(Size) != 25 )
            goto LABEL_22;
        }
        else if ( v23 != 18 || HIDWORD(Size) != 25 )
        {
          goto LABEL_60;
        }
        *(_DWORD *)(a5 + 8 * v11 + 8) = 25;
LABEL_22:
        if ( v21 != 20 && v21 != 18 && v21 != 25 )
        {
          if ( v21 == 8210 )
          {
            if ( !PnpValidateMultiSzData((_WORD *)v13, v22) )
              v6 = -1073741823;
            if ( v6 < 0 )
              goto LABEL_33;
          }
LABEL_26:
          Pool2 = v18;
          v8 = v20;
          if ( v14 && (unsigned int)v22 > 0xFFFE )
          {
            v6 = -2147483643;
LABEL_33:
            v25 = v33;
            goto LABEL_34;
          }
          if ( (*(_DWORD *)(a5 + 8 * v11 + 28) & 2) != 0 )
          {
            if ( v14 )
            {
              v24 = (wchar_t *)ExAllocatePool2(0x100uLL, v22, 0x67727453u);
              v14->Buffer = v24;
              if ( v24 )
              {
                v14->MaximumLength = Size;
                memmove(v24, Pool2, (unsigned int)Size);
                LOWORD(v22) = Size;
                v19 = 0;
LABEL_32:
                v14->Length = v22;
                if ( HIDWORD(Size) != 8210 )
                {
                  Buffer = v14->Buffer;
                  if ( Buffer )
                  {
                    if ( (unsigned __int16)Size >= 2u
                      && Buffer[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] == v19 )
                    {
                      v14->Length = Size - 2;
                    }
                  }
                }
                goto LABEL_33;
              }
LABEL_74:
              v6 = -1073741670;
              goto LABEL_53;
            }
            v28 = (void *)ExAllocatePool2(0x100uLL, v22, 0x63647050u);
            v13 = (__int64)v28;
            if ( !v28 )
              goto LABEL_74;
            memmove(v28, Pool2, (unsigned int)Size);
            LODWORD(v22) = Size;
          }
          else if ( v14 )
          {
            goto LABEL_32;
          }
          if ( (*(_DWORD *)(a5 + 8 * v11 + 28) & 2) != 0 )
          {
            **(_QWORD **)(a5 + 8 * v11 + 16) = v13;
            LODWORD(v22) = Size;
          }
          *(_DWORD *)(a5 + 8 * v11 + 24) = v22;
          goto LABEL_33;
        }
        if ( PnpValidateStringData(v13, v22) )
          goto LABEL_26;
LABEL_60:
        v6 = -1073741823;
        goto LABEL_33;
      }
      v25 = v33;
      if ( (*(_DWORD *)(a5 + 8 * v11 + 28) & 2) == 0 )
        goto LABEL_34;
      if ( (unsigned int)Size <= v33 )
        break;
      ExFreePoolWithTag(Pool2, 0);
      v8 = Size;
      v26 = ExAllocatePool2(0x100uLL, (unsigned int)Size, 0x63647050u);
      Pool2 = (void *)v26;
      if ( !v26 )
        goto LABEL_43;
      v13 = v26;
LABEL_13:
      MaximumLength = v8;
      v33 = v8;
    }
    v6 = -1073741595;
LABEL_34:
    *(_DWORD *)(a5 + 8 * v11 + 32) = v6;
    if ( v6 >= 0 )
    {
LABEL_35:
      v10 = (unsigned int)(v30 + 1);
      continue;
    }
    break;
  }
  if ( (*(_DWORD *)(a5 + 8 * v11 + 28) & 8) != 0 )
  {
    if ( v14 )
    {
      RtlInitUnicodeString(v14, 0LL);
    }
    else if ( v13 )
    {
      memset_0((void *)v13, 0, v25);
    }
  }
  if ( (*(_DWORD *)(a5 + 8 * v11 + 28) & 1) == 0 )
  {
    v6 = 0;
    goto LABEL_35;
  }
LABEL_53:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
