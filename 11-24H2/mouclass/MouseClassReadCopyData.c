/*
 * XREFs of MouseClassReadCopyData @ 0x1C0002230
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00018A0 (MouseClassServiceCallback.c)
 *     MouseClassRead @ 0x1C0001ED0 (MouseClassRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0002630 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0004620 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLL @ 0x1C0006344 (WPP_RECORDER_SF_qqLL.c)
 *     WPP_RECORDER_SF_qqLqq @ 0x1C0006584 (WPP_RECORDER_SF_qqLqq.c)
 *     WPP_RECORDER_SF_qqqql @ 0x1C00067AC (WPP_RECORDER_SF_qqqql.c)
 *     memmove @ 0x1C0006C00 (memmove.c)
 */

__int64 __fastcall MouseClassReadCopyData(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v6; // r13
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // r12d
  char *v11; // rbp
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  char *v15; // rbp
  unsigned int v16; // r15d
  unsigned int v17; // edx
  bool v18; // zf
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 168);
  v6 = a2[23];
  v7 = *(_DWORD *)(v6 + 8);
  v8 = 24 * *(_DWORD *)(a1 + 84);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
  if ( v8 >= v7 )
    v8 = v7;
  v9 = *(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 120);
  v10 = v9;
  if ( v8 < v9 )
    v10 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_qqL(WPP_GLOBAL_Control->DeviceExtension, v9, 3, 41);
  }
  v11 = (char *)a2[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLqq(WPP_GLOBAL_Control->DeviceExtension, v9, a3, 42);
  memmove(v11, *(const void **)(a1 + 120), v10);
  v15 = &v11[v10];
  v16 = v8 - v10;
  if ( v8 == v10 )
  {
    *(_QWORD *)(a1 + 120) += v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLqq(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 43);
    memmove(v15, *(const void **)(a1 + 104), v16);
    *(_QWORD *)(a1 + 120) = v16 + *(_QWORD *)(a1 + 104);
  }
  v17 = v8 / 0x18;
  v18 = *(_DWORD *)(a1 + 84) == v8 / 0x18;
  *(_DWORD *)(a1 + 84) -= v8 / 0x18;
  if ( v18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 3, 3, 44);
    *(_BYTE *)(a1 + 66) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqql(WPP_GLOBAL_Control->DeviceExtension, v17, v13, v14);
  a2[7] = v8;
  result = 0LL;
  *(_DWORD *)(v6 + 8) = v8;
  return result;
}
