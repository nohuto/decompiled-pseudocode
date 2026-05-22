/*
 * XREFs of ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x1800B6FC0
 * Callers:
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B8BC0 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(ISMTracing *this, char a2, int a3)
{
  const struct _tlgProvider_t *v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  ULONG v8; // r8d
  char v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-58h] BYREF
  char *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  int *v15; // [rsp+70h] [rbp-28h]
  ULONG v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v5 = ISMTracing::Provider();
  if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 1LL) )
  {
    v17 = 0;
    v14 = 0;
    v15 = &v10;
    v12 = &v9;
    v16 = v8;
    v13 = v6;
    v10 = a3;
    v9 = a2;
    tlgWriteTransfer_EventWriteTransfer(v7, byte_180210082, 0LL, 0LL, v8, &v11);
  }
}
