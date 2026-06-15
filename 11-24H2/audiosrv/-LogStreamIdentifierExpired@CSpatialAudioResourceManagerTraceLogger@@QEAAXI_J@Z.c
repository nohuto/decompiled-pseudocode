/*
 * XREFs of ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x1801243FC
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180120910 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180120A24 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180051554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        __int64 a3)
{
  int v3; // [rsp+30h] [rbp-68h] BYREF
  __int64 v4; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1801D82B0 > 4 )
  {
    v4 = a3;
    v9 = &v4;
    v11 = 0;
    v10 = 8;
    v6 = &v3;
    v8 = 0;
    v3 = a2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801D82B0, byte_1801AE845, 0LL, 0LL, 4u, &v5);
  }
}
