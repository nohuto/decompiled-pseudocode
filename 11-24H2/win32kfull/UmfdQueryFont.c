/*
 * XREFs of UmfdQueryFont @ 0x140100370
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x140100EEC (--0QueryFontRequest@@QEAA@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     UmfdDrvFreeInternal @ 0x140101948 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFont(struct DHPDEV__ *a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  _BYTE v5[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  _QWORD *v7; // [rsp+70h] [rbp-28h]
  __int64 v8; // [rsp+78h] [rbp-20h]
  __int64 v9; // [rsp+88h] [rbp-10h]

  *a4 = 0LL;
  QueryFontRequest::QueryFontRequest((QueryFontRequest *)v5, a1, a2, a3, a4);
  if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(v6 + 20), v5) < 0 )
    return 0LL;
  result = v8;
  if ( !v8 )
  {
    if ( v9 )
      UmfdDrvFreeInternal(v9, *v7, *(unsigned int *)(v6 + 20));
    return 0LL;
  }
  return result;
}
