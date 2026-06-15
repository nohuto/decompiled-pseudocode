/*
 * XREFs of ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x18011C6D4
 * Callers:
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801192E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18005FAE4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(
        CSpatialAudioResourceManagerTraceLogger *this,
        __int64 a2,
        int a3,
        int a4)
{
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1801CC2B0 > 4 )
  {
    v4 = a4;
    v12 = &v4;
    v5 = a3;
    v10 = &v5;
    v6 = a2;
    v8 = &v6;
    v13 = 4LL;
    v11 = 4LL;
    v9 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801CC2B0, byte_1801A392C, 0LL, 0LL, 5u, &v7);
  }
}
