/*
 * XREFs of ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801AFF80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801982AC (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UIAHitTestServer::RequestUIAHitTest(
        __int64 ***this,
        struct BamoUIAHitTestStub *a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _GUID v6; // [rsp+20h] [rbp-28h] BYREF

  DWMInputRouter::RequestUIAHitTest(this[7], &v6, a3, a4);
  (*(void (__fastcall **)(char *, struct _GUID *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, &v6);
  return 0LL;
}
