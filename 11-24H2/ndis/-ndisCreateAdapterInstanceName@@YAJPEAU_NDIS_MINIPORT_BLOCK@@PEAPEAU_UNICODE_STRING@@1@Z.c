/*
 * XREFs of ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401698A0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x14006FE80 (WdmlibRtlInitUnicodeStringEx.c)
 *     ??$out_param@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@details@0@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140072650 (--$out_param@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA-A.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x14008AC90 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x140142D18 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x14015C360 (ndisIfOpenInterfaceRegistryKey.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140164F70 (ndisMiniportQueryDeviceProperty.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x140167720 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall ndisCreateAdapterInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _UNICODE_STRING **a2,
        struct _UNICODE_STRING **a3)
{
  HANDLE v3; // rbx
  struct _UNICODE_STRING **v4; // r13
  struct _NDIS_MINIPORT_BLOCK *v5; // r12
  unsigned int *v6; // rcx
  __int64 v7; // r15
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdi
  int DeviceProperty; // esi
  unsigned __int64 v10; // rdx
  _UNICODE_STRING *Pool2; // rax
  int v12; // edx
  _UNICODE_STRING *v13; // rbx
  ULONG v14; // r8d
  NTSTATUS inited; // eax
  unsigned __int16 v16; // r9
  bool v17; // sf
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // r14
  int v21; // eax
  wchar_t *v22; // rax
  __int64 v23; // rcx
  int v24; // r15d
  HANDLE v25; // rdi
  NTSTATUS v26; // eax
  _DWORD *v27; // rcx
  wchar_t *Buffer; // r12
  const wchar_t *v29; // rax
  __int64 v30; // rcx
  unsigned __int16 Length; // r13
  unsigned __int16 MaximumLength; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v34; // rsi
  const void **v35; // rcx
  int v36; // edx
  const void **v37; // rcx
  HANDLE v38; // rcx
  NTSTATUS v39; // eax
  const void **v40; // rcx
  const void **v41; // rcx
  struct _UNICODE_STRING *v42; // rcx
  const void **v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int16 *v47; // rbx
  char v48; // r10
  unsigned __int16 v49; // r8
  unsigned __int64 v50; // r9
  __int64 v51; // rdx
  wchar_t *v52; // rax
  struct _UNICODE_STRING *v53; // rax
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v56[8]; // [rsp+28h] [rbp-D8h]
  char v57[8]; // [rsp+30h] [rbp-D0h]
  ULONG BufferLength[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v59; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v61; // [rsp+98h] [rbp-68h] BYREF
  char v62; // [rsp+A8h] [rbp-58h]
  PVOID P; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  char v65[8]; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING **v66; // [rsp+C8h] [rbp-38h]
  struct _UNICODE_STRING **v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h] BYREF
  char v69; // [rsp+E8h] [rbp-18h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[48]; // [rsp+120h] [rbp+20h] BYREF

  v3 = 0LL;
  v67 = a3;
  *a2 = 0LL;
  v4 = a2;
  *a3 = 0LL;
  v5 = a1;
  v66 = a2;
  *(_QWORD *)v65 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      30,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)a1);
  }
  v59 = 0LL;
  if ( (mem::ReadNoFence<unsigned long,void>(&v5->Flags) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>(v6) & 0x100) != 0 )
  {
    v19 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v68, (__int64)&v59);
    Handle = 0LL;
    v20 = (_QWORD *)(v19 + 8);
    P = (PVOID)(v19 + 8);
    v21 = ndisIfOpenInterfaceRegistryKey((__int64)&v5->InterfaceGuid, (KRegKey *)&Handle, 1u, 1);
    DeviceProperty = v21;
    if ( v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x1Bu,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)v5,
          v21);
      if ( Handle )
        ZwClose(Handle);
LABEL_95:
      if ( v69 )
LABEL_96:
        wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
LABEL_97:
      v17 = DeviceProperty < 0;
      goto LABEL_98;
    }
    *(_DWORD *)v56 = 18368;
    LODWORD(ResultLength) = 22819;
    *(_QWORD *)BufferLength = 0LL;
    KeyHandle = 0LL;
    swprintf_s(
      Dst,
      0x2DuLL,
      L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04x",
      2702307828LL,
      ResultLength,
      *(_QWORD *)v56,
      154,
      104,
      208,
      186,
      251,
      87,
      121,
      1,
      18);
    v22 = Dst;
    v61 = 0LL;
    v23 = 0x7FFFLL;
    do
    {
      if ( !*v22 )
        break;
      ++v22;
      --v23;
    }
    while ( v23 );
    v24 = -1073741811;
    DeviceProperty = -1073741811;
    if ( v23 )
    {
      DeviceProperty = 0;
      v61.Length = 2 * (0x7FFF - v23);
      v61.MaximumLength = v61.Length + 2;
      v61.Buffer = Dst;
    }
    v25 = Handle;
    if ( DeviceProperty >= 0 )
    {
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &v61;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = Handle;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v26 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v3 = KeyHandle;
      DeviceProperty = v26;
    }
    if ( DeviceProperty == -1073741772 )
    {
      v27 = &unk_1400F5F50;
      while ( v27[4] != 18
           || *(_QWORD *)v27 != NETSETUPPKEY_Interface_IfDescr
           || *((_QWORD *)v27 + 1) != 0x17957FBBAD0689ALL )
      {
        v27 += 5;
        if ( v27 == (_DWORD *)&unk_1400F67AC )
          goto LABEL_76;
      }
      Buffer = (wchar_t *)&word_1400F5D40;
      v61 = 0LL;
      v29 = &word_1400F5D40;
      v30 = 0x7FFFLL;
      do
      {
        if ( !*v29 )
          break;
        ++v29;
        --v30;
      }
      while ( v30 );
      if ( v30 )
      {
        v24 = 0;
        Length = 2 * (0x7FFF - v30);
        MaximumLength = Length + 2;
      }
      else
      {
        Buffer = v61.Buffer;
        MaximumLength = v61.MaximumLength;
        Length = v61.Length;
      }
      if ( v24 >= 0
        && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + 16LL, 0x7274534Bu),
            (v34 = PoolWithTag) != 0LL) )
      {
        *(_WORD *)PoolWithTag = Length;
        PoolWithTag[1] = PoolWithTag + 2;
        *((_WORD *)PoolWithTag + 1) = MaximumLength;
        memmove(PoolWithTag + 2, Buffer, MaximumLength);
      }
      else
      {
        v34 = 0LL;
      }
      v35 = *(const void ***)BufferLength;
      *(_QWORD *)BufferLength = v34;
      if ( v35 )
        ExFreePoolWithTag(v35, 0x7274534Bu);
      if ( *(_QWORD *)BufferLength )
      {
        if ( v3 )
          ZwClose(v3);
        v20 = P;
        LOBYTE(v5) = v65[0];
        goto LABEL_66;
      }
      if ( v3 )
        ZwClose(v3);
      LOBYTE(v5) = v65[0];
      DeviceProperty = -1073741670;
      goto LABEL_81;
    }
    if ( DeviceProperty )
    {
LABEL_76:
      if ( !v3 )
        goto LABEL_80;
      v38 = v3;
    }
    else
    {
      v61 = 0LL;
      v39 = KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___(&KeyHandle, &v61, (void **)BufferLength);
      v38 = KeyHandle;
      DeviceProperty = v39;
      if ( !KeyHandle )
        goto LABEL_80;
    }
    ZwClose(v38);
LABEL_80:
    if ( !DeviceProperty )
    {
LABEL_66:
      Rtl::DuplicateUnicodeString(&P, *(const void ***)BufferLength, 0x6E61444Eu);
      if ( P )
      {
        v37 = *(const void ***)BufferLength;
        *v20 = P;
        *(_QWORD *)BufferLength = 0LL;
        if ( v37 )
          ExFreePoolWithTag(v37, 0x7274534Bu);
        if ( v25 )
          ZwClose(v25);
        DeviceProperty = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v36) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v36,
            13,
            29,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            (char)v5);
        }
        v41 = *(const void ***)BufferLength;
        *(_QWORD *)BufferLength = 0LL;
        if ( v41 )
          ExFreePoolWithTag(v41, 0x7274534Bu);
        if ( v25 )
          ZwClose(v25);
        DeviceProperty = -1073741670;
      }
      goto LABEL_94;
    }
LABEL_81:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v57 = DeviceProperty;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Cu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)v5,
        *(_QWORD *)v57);
    }
    v40 = *(const void ***)BufferLength;
    *(_QWORD *)BufferLength = 0LL;
    if ( v40 )
      ExFreePoolWithTag(v40, 0x7274534Bu);
    if ( v25 )
      ZwClose(v25);
LABEL_94:
    v4 = v66;
    goto LABEL_95;
  }
  BufferLength[0] = 0;
  v7 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v61, (__int64)&v59);
  *(_QWORD *)(v7 + 8) = 0LL;
  PhysicalDeviceObject = v5->PhysicalDeviceObject;
  DeviceProperty = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyFriendlyName, 0, 0LL, BufferLength);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x10u,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)v5,
        (char)PhysicalDeviceObject,
        DeviceProperty);
    goto LABEL_23;
  }
  v10 = BufferLength[0] + 16LL;
  if ( v10 >= BufferLength[0] )
  {
    Pool2 = (_UNICODE_STRING *)ExAllocatePool2(64LL, v10, 1851868238LL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          13,
          18,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)v5,
          (char)PhysicalDeviceObject);
      }
      DeviceProperty = -1073741670;
      goto LABEL_23;
    }
    v14 = BufferLength[0];
    *Pool2 = 0LL;
    inited = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyFriendlyName, v14, &Pool2[1], BufferLength);
    DeviceProperty = inited;
    if ( inited >= 0 )
    {
      inited = WdmlibRtlInitUnicodeStringEx(v13, (PCWSTR)&v13[1]);
      DeviceProperty = inited;
      if ( inited >= 0 )
      {
        *(_QWORD *)(v7 + 8) = v13;
        DeviceProperty = 0;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 20;
        goto LABEL_17;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 19;
LABEL_17:
      WPP_RECORDER_SF_qqD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        v16,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)v5,
        (char)PhysicalDeviceObject,
        inited);
    }
    ExFreePoolWithTag(v13, 0);
    goto LABEL_23;
  }
  DeviceProperty = -1073741675;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      17,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)v5,
      (char)PhysicalDeviceObject);
  }
LABEL_23:
  if ( v62 )
    wil::attach_to_smart_pointer<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>,void>();
  v17 = DeviceProperty < 0;
  if ( DeviceProperty )
  {
    v18 = wil::out_param<wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>((__int64)&v61, (__int64)&v59);
    DeviceProperty = ndisMiniportQueryDeviceProperty(
                       (__int64)v5,
                       DevicePropertyDeviceDescription,
                       (PUNICODE_STRING *)(v18 + 8));
    if ( v62 )
      goto LABEL_96;
    goto LABEL_97;
  }
LABEL_98:
  if ( v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v57 = DeviceProperty;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Fu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        (char)v5,
        *(_QWORD *)v57);
    }
    v42 = (struct _UNICODE_STRING *)v59;
    v59 = 0LL;
  }
  else
  {
    v43 = (const void **)v59;
    v44 = *((unsigned __int16 *)v59 + 1);
    v45 = v44 + 16;
    if ( v44 + 16 >= v44 && (v46 = ExAllocatePool2(64LL, v45, 1851868238LL), (v47 = (unsigned __int16 *)v46) != 0LL) )
    {
      *(_OWORD *)v46 = 0LL;
      *(_QWORD *)(v46 + 8) = v46 + 16;
      *(_WORD *)v46 = *(_WORD *)v43;
      *(_WORD *)(v46 + 2) = *((_WORD *)v43 + 1);
      memmove((void *)(v46 + 16), v43[1], *(unsigned __int16 *)v43);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0x21u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v47);
      v42 = (struct _UNICODE_STRING *)v59;
      v48 = 0;
      v49 = 0;
      v50 = (unsigned __int64)*(unsigned __int16 *)v59 >> 1;
      if ( v50 )
      {
        v51 = 0LL;
        do
        {
          v52 = v42->Buffer;
          if ( v52[v51] == 47 )
          {
            v52[v51] = 45;
            v48 = 1;
            v42 = (struct _UNICODE_STRING *)v59;
          }
          v51 = ++v49;
        }
        while ( v49 < v50 );
        if ( v48 )
        {
          v53 = v42;
          v42 = 0LL;
          *v67 = v53;
        }
      }
      *v4 = (struct _UNICODE_STRING *)v47;
    }
    else
    {
      DeviceProperty = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v45,
          13,
          32,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          (char)v5);
      }
      v42 = (struct _UNICODE_STRING *)v59;
    }
    v59 = 0LL;
  }
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v57 = DeviceProperty;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x22u,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)v5,
      *(_QWORD *)v57);
  }
  return (unsigned int)DeviceProperty;
}
