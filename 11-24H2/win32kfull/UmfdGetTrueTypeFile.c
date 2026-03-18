/*
 * XREFs of UmfdGetTrueTypeFile @ 0x1401019F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x140100E58 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdGetTrueTypeFile(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[7]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  *a2 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 12);
  v10 = 0LL;
  v8[0] = &GetTrueTypeFileRequest::`vftable';
  v8[5] = a1;
  v8[6] = a2;
  v9 = 0LL;
  v5 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 20), (__int64)v8, v4);
  v6 = v9;
  if ( v5 < 0 )
    return 0LL;
  return v6;
}
