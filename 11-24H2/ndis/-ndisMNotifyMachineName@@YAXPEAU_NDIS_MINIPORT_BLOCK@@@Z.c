/*
 * XREFs of ?ndisMNotifyMachineName@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016C2F0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x140167EF0 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140168410 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 */

void __fastcall ndisMNotifyMachineName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  PVOID v2; // rbx
  HANDLE v3; // rdi
  const wchar_t *v4; // rax
  __int64 v5; // rcx
  int v6; // r14d
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  NTSTATUS v11; // eax
  HANDLE v12; // rcx
  _UNICODE_STRING v13; // [rsp+40h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+67h] BYREF
  PVOID P; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( a1->MediaType == NdisMedium802_3
    && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL
    && a1->MajorNdisVersion <= 6u
    && (a1->MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x51u)
    && !RtlIsStateSeparationEnabled() )
  {
    v2 = 0LL;
    v3 = 0LL;
    v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
    v5 = 0x7FFFLL;
    v13 = 0LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = -1073741811;
    v7 = -1073741811;
    if ( v5 )
    {
      v7 = 0;
      v13.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      v13.Length = 2 * (0x7FFF - v5);
      v13.MaximumLength = v13.Length + 2;
    }
    if ( v7 >= 0 )
    {
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &v13;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v3 = KeyHandle;
      if ( !v8 )
      {
        P = 0LL;
        v9 = 0x7FFFLL;
        v13 = 0LL;
        v10 = L"HostName";
        do
        {
          if ( !*v10 )
            break;
          ++v10;
          --v9;
        }
        while ( v9 );
        if ( v9 )
        {
          v6 = 0;
          v13.Buffer = L"HostName";
          v13.Length = 2 * (0x7FFF - v9);
          v13.MaximumLength = v13.Length + 2;
        }
        if ( v6 >= 0 )
        {
          v11 = KRegKey::QueryValueString(&KeyHandle, &v13, &P);
          v2 = P;
          if ( !v11 )
          {
            ndisMDoMiniportOp(a1, 0, 0x1021Au, *((void **)P + 1), *(unsigned __int16 *)P, 1u, 0);
            ExFreePoolWithTag(v2, 0x7274534Bu);
            v12 = KeyHandle;
            if ( !KeyHandle )
              return;
LABEL_28:
            ZwClose(v12);
            return;
          }
          v3 = KeyHandle;
        }
        if ( v2 )
          ExFreePoolWithTag(v2, 0x7274534Bu);
      }
    }
    if ( !v3 )
      return;
    v12 = v3;
    goto LABEL_28;
  }
}
