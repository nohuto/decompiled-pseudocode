/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x140A84EFC
 * Callers:
 *     PipDmgGetDriversDmarPolicy @ 0x14072501C (PipDmgGetDriversDmarPolicy.c)
 * Callees:
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x1407251B4 (PipDmgIsDmaVerifierEnabled.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  int v4; // eax
  HANDLE v5; // rsi
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v4 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v2 + 24), 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 < 0 )
    goto LABEL_4;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *((_QWORD *)&v8 + 1) = L"Parameters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  LODWORD(v8) = 1441812;
  ObjectAttributes.RootDirectory = Handle;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_4;
  LODWORD(Handle) = 0;
  if ( (int)PnpGetRegistryDword(KeyHandle, (__int64)L"DmaRemappingCompatible", &Handle) < 0 )
    goto LABEL_4;
  if ( !(_DWORD)Handle )
  {
    v3 = 1;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle == 1 )
  {
LABEL_17:
    v3 = 2;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle != 2 )
  {
    if ( (_DWORD)Handle != 3 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v7 = 3;
  if ( PipDmgIsDmaVerifierEnabled(a1) )
    v7 = 2;
  v3 = v7;
LABEL_4:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v3;
}
