/*
 * XREFs of ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14018DEE4
 * Callers:
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018E2B0 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004C948 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1401CC4E4 (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401CC528 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE0E8 (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401CE858 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14033C79C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER::DeleteRegistryKey(DXGADAPTER *this, struct _UNICODE_STRING *a2, ULONG a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  int appended; // eax
  int inserted; // eax
  const wchar_t *v9; // r9
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+C0h] [rbp-40h] BYREF
  char v21; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&v15.Length = 34078720LL;
  v3 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v17[1] = v17;
  v17[0] = v17;
  v15.Buffer = (wchar_t *)&v21;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 12830;
  }
  else
  {
    RtlUnicodeStringCopy(&v15, a2, a3);
    LODWORD(v4) = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v16, &v15);
    while ( (_QWORD *)v16[0] != v16 )
    {
      DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v16, &v15);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 12850;
LABEL_14:
        v9 = L"Failed to open Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_23;
      }
      ResultLength = 0;
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
      v4 = v6;
      if ( v6 < 0 )
      {
        WdLogSingleEntry1(2LL, v6);
        v9 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12863;
        goto LABEL_23;
      }
      appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys((DXG_REGISTRY_KEY_LIST *)v16, KeyHandle, &KeyInformation, &v15);
      v4 = appended;
      if ( appended < 0 )
      {
        WdLogSingleEntry1(2LL, appended);
        v9 = L"Failed to append sub keys for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12870;
        goto LABEL_23;
      }
      inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v17, &v15);
      v4 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry1(2LL, inserted);
        v9 = L"Failed to insert RegPath to RegKeyList for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12877;
LABEL_23:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, v4, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_24;
      }
      CloseRegistrySubkey(KeyHandle);
      KeyHandle = 0LL;
    }
    while ( (_QWORD *)v17[0] != v17 )
    {
      v10 = DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v17, &v15);
      v4 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
        v9 = L"Failed to read next registry path for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12891;
        goto LABEL_23;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 12904;
        goto LABEL_14;
      }
      v12 = ZwDeleteKey(KeyHandle);
      v4 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        v9 = L"Failed to delete Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12912;
        goto LABEL_23;
      }
      CloseRegistrySubkey(KeyHandle);
      KeyHandle = 0LL;
    }
LABEL_24:
    CloseRegistrySubkey(KeyHandle);
    v3 = v4;
  }
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v17);
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v16);
  return v3;
}
