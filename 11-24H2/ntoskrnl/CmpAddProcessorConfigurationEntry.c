/*
 * XREFs of CmpAddProcessorConfigurationEntry @ 0x1407D5208
 * Callers:
 *     CmInitializeProcessor @ 0x1407D50BC (CmInitializeProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     sprintf_s @ 0x140501A30 (sprintf_s.c)
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpInitializeRegistryNode @ 0x1407DEF9C (CmpInitializeRegistryNode.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall CmpAddProcessorConfigurationEntry(__int64 a1, int a2, int a3)
{
  char v6; // al
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  HANDLE v13; // rsi
  NTSTATUS v14; // edi
  const CHAR *v16; // r15
  _DWORD *v21; // r8
  unsigned int v22; // r9d
  __int64 v28; // rcx
  _QWORD *v29; // r14
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[24]; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  int v38; // [rsp+A8h] [rbp-58h]
  __int16 v39; // [rsp+ACh] [rbp-54h]
  __int16 v40; // [rsp+AEh] [rbp-52h]
  int v41; // [rsp+B4h] [rbp-4Ch]
  char *v42; // [rsp+B8h] [rbp-48h]
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v44[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v45; // [rsp+110h] [rbp+10h]
  char DstBuf[128]; // [rsp+120h] [rbp+20h] BYREF

  Data = 0;
  Handle = 0LL;
  v45 = 0;
  KeyHandle = (HANDLE)-1LL;
  SourceString = 0LL;
  memset(v44, 0, sizeof(v44));
  UnicodeString = 0LL;
  DestinationString = 0LL;
  memset_0(v35, 0, 0x48uLL);
  v39 = *(unsigned __int8 *)(a1 + 208);
  v40 = *(unsigned __int8 *)(a1 + 209);
  v42 = DstBuf;
  v6 = *(_BYTE *)(a1 + 141);
  v36 = 1;
  v37 = 1;
  v38 = a2;
  switch ( v6 )
  {
    case 1:
      v7 = "AMD64 Family %u Model %u Stepping %u";
      break;
    case 2:
      v7 = "Intel64 Family %u Model %u Stepping %u";
      break;
    case 3:
      v7 = "VIA64 Family %u Model %u Stepping %u";
      break;
    default:
      KeBugCheck(0x5Du);
  }
  sprintf_s(
    DstBuf,
    0x80uLL,
    v7,
    (unsigned int)*(char *)(a1 + 64),
    HIBYTE(*(unsigned __int16 *)(a1 + 66)),
    (unsigned __int8)*(_WORD *)(a1 + 66));
  v8 = -1LL;
  do
    ++v8;
  while ( DstBuf[v8] );
  v41 = v8 + 1;
  result = CmpInitializeRegistryNode(
             (unsigned int)v35,
             a3,
             (unsigned int)&KeyHandle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
  if ( (int)result >= 0 )
  {
    memset_0(v35, 0, 0x48uLL);
    v10 = *(_BYTE *)(a1 + 64) == 3;
    v39 = *(unsigned __int8 *)(a1 + 208);
    v40 = *(unsigned __int8 *)(a1 + 209);
    v42 = DstBuf;
    v36 = 1;
    v37 = 2;
    v38 = a2;
    if ( v10 )
      strcpy_s(DstBuf, 0x80uLL, "80387");
    v11 = -1LL;
    do
      ++v11;
    while ( DstBuf[v11] );
    v41 = v11 + 1;
    v12 = CmpInitializeRegistryNode((unsigned int)v35, a3, (unsigned int)&Handle, -1, -1, (__int64)&CmpDeviceIndexTable);
    v13 = KeyHandle;
    v14 = v12;
    if ( v12 >= 0 )
    {
      ZwClose(Handle);
      _RAX = 0x80000000LL;
      v16 = (const CHAR *)((a1 + 36752) & -(__int64)(*(_BYTE *)(a1 + 65) != 0));
      __asm { cpuid }
      if ( (unsigned int)_RAX < 0x80000004 )
        goto LABEL_39;
      v21 = v44;
      v22 = -2147483646;
      do
      {
        _RAX = v22;
        __asm { cpuid }
        *v21 = _RAX;
        ++v22;
        v21[1] = _RBX;
        v21[2] = _RCX;
        v21[3] = _RDX;
        v21 += 4;
      }
      while ( v22 <= 0x80000004 );
      LOBYTE(v45) = 0;
      if ( !v21 )
        goto LABEL_39;
      RtlInitUnicodeString(&DestinationString, L"ProcessorNameString");
      LODWORD(v28) = 0;
      if ( LOBYTE(v44[0]) == 32 )
      {
        do
          v28 = (unsigned int)(v28 + 1);
        while ( *((_BYTE *)v44 + v28) == 32 );
      }
      RtlInitAnsiString(&SourceString, (PCSZ)v44 + (unsigned int)v28);
      v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
      if ( v14 >= 0 )
      {
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
        if ( v14 >= 0 )
        {
LABEL_39:
          if ( !v16
            || (RtlInitUnicodeString(&DestinationString, L"VendorIdentifier"),
                RtlInitAnsiString(&SourceString, v16),
                v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u),
                v14 >= 0)
            && (v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2),
                RtlFreeAnsiString(&UnicodeString),
                v14 >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 36768)
              || (Data = *(_DWORD *)(a1 + 36768),
                  RtlInitUnicodeString(&DestinationString, L"FeatureSet"),
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u),
                  v14 >= 0) )
            {
              if ( !*(_DWORD *)(a1 + 68)
                || (RtlInitUnicodeString(&DestinationString, L"~MHz"),
                    v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, (PVOID)(a1 + 68), 4u),
                    v14 >= 0) )
              {
                v29 = (_QWORD *)(a1 + 36776);
                if ( *v29 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Update Revision");
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 3u, v29, 8u);
                }
              }
            }
          }
        }
      }
    }
    if ( v13 != (HANDLE)-1LL )
      ZwClose(v13);
    return (unsigned int)v14;
  }
  return result;
}
