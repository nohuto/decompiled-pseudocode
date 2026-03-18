/*
 * XREFs of CmpCreatePredefined @ 0x1407CA0EC
 * Callers:
 *     CmpCreatePerfKeys @ 0x1407C9F90 (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 */

__int64 __fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, __int64 a3)
{
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v10; // [rsp+70h] [rbp-90h]
  int v11; // [rsp+74h] [rbp-8Ch]
  __int128 v12; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v14; // [rsp+90h] [rbp-70h] BYREF
  int v15; // [rsp+A8h] [rbp-58h]
  __int64 v16; // [rsp+C8h] [rbp-38h]

  v11 = 0;
  v9[0] = 48LL;
  memset_0(&v14, 0, 0x1D0uLL);
  Handle = 0LL;
  DestinationString = 0LL;
  CmpInitializeParseContext(&v14);
  v15 = 16777217;
  v14.HandleAttributes = 33;
  v16 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  v9[2] = &DestinationString;
  v9[1] = a1;
  v10 = 576;
  v12 = 0LL;
  if ( (int)ObOpenObjectByName((unsigned int)v9, (_DWORD)CmKeyObjectType, 0, 0, 131097, (__int64)&v14, (__int64)&Handle) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
  }
  return CmpCleanupParseContext(&v14, 0LL);
}
