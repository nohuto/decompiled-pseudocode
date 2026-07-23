/*
 * XREFs of CmpCreatePredefined @ 0x1407CA5DC
 * Callers:
 *     CmpCreatePerfKeys @ 0x1407CA480 (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
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
