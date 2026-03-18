/*
 * XREFs of ACPIEcGetUid @ 0x14009CA7C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x14005FD10 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 */

void __fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 *v2; // rsi
  int v3; // ebx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  *(_DWORD *)(a1 + 16) = 0;
  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  if ( v2 )
  {
    v6 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v3 = AMLIEvalNameSpaceObject(v2, (__int64)&v4, 0, 0LL);
    AMLIDereferenceHandleEx((__int64)v2);
    if ( v3 >= 0 )
    {
      if ( WORD1(v4) == 1 )
        *(_DWORD *)(a1 + 16) = (unsigned __int8)v5;
      AMLIFreeDataBuffs((__int64)&v4);
    }
  }
}
