/*
 * XREFs of ?DwmHolographicInteropTextureAdd_@CompositorTracing@@QEAAXI_N@Z @ 0x1802D81D0
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802D7DE0 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18017E6B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureAdd_(CompositorTracing *this, int a2, char a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  ULONG v7; // r8d
  char v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  ULONG v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  char *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v5 = (_DWORD *)*((_QWORD *)CompositorTracing::Instance() + 1);
  if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 0x400000000000LL) )
  {
    v16 = 0;
    v13 = 0;
    v14 = &v8;
    v12 = v7;
    v11 = &v9;
    v8 = a3;
    v9 = a2;
    v15 = 1;
    tlgWriteTransfer_EventWriteTransfer(v6, byte_1803DB09B, 0LL, 0LL, v7, &v10);
  }
}
