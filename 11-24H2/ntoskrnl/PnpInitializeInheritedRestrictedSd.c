/*
 * XREFs of PnpInitializeInheritedRestrictedSd @ 0x140A61D70
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpInitializeInheritedRestrictedSd(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r8
  int ObjectProperty; // eax
  PSECURITY_DESCRIPTOR v8; // rbx
  ULONG v9; // edi
  int v10; // esi
  __int64 v11; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-38h] BYREF
  ULONG v13; // [rsp+A0h] [rbp+8h] BYREF
  int v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  SecurityDescriptor = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x75737050u,
                     0x200u,
                     *(WCHAR **)(v4 + 48),
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
                     &v14,
                     &SecurityDescriptor,
                     &v13,
                     0);
  if ( ObjectProperty == -1073741275 && a3 )
  {
    v8 = SecurityDescriptor;
  }
  else
  {
    v9 = v13;
    v10 = 19;
    v8 = SecurityDescriptor;
    if ( ObjectProperty < 0 || v14 != 19 || v13 < 0x28 || !RtlValidSecurityDescriptor(SecurityDescriptor) )
    {
      if ( v8 )
        ExFreePoolWithTag(v8, 0x75737050u);
      v8 = 0LL;
    }
    if ( v8 )
    {
      v11 = (__int64)v8;
    }
    else
    {
      v9 = 0;
      v11 = 0LL;
      v10 = 0;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      a2,
      0LL,
      (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
      v10,
      v11,
      v9,
      a3 != 0 ? 0x20000 : 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x75737050u);
}
