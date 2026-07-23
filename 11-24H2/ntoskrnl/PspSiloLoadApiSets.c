/*
 * XREFs of PspSiloLoadApiSets @ 0x140773808
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     ApiSetReleaseSchema @ 0x14065E1E4 (ApiSetReleaseSchema.c)
 *     PspApiSetCopyToSystemSpace @ 0x140772608 (PspApiSetCopyToSystemSpace.c)
 *     PspQueryForwardersEnabled @ 0x140774628 (PspQueryForwardersEnabled.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9D10 (ApiSetLoadSchemaWithExtensions.c)
 */

__int64 __fastcall PspSiloLoadApiSets(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // r14
  int v3; // esi
  _QWORD *ServerSiloGlobals; // rbx
  __int64 v6; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-18h] BYREF
  void *Src; // [rsp+68h] [rbp+28h] BYREF
  size_t Size; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7[1] = L"\\SystemRoot\\System32\\ApiSetSchema.dll";
  v7[0] = 4980810LL;
  v2 = PsAttachSiloToCurrentThread(a1);
  v3 = ApiSetLoadSchemaWithExtensions(v7, &Src, &Size);
  if ( v3 >= 0 )
  {
    v3 = PspApiSetCopyToSystemSpace(Src, Size, &v10, &v6);
    if ( v3 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[125] = v10;
      ServerSiloGlobals[126] = v6;
      *((_BYTE *)ServerSiloGlobals + 1016) = PspQueryForwardersEnabled();
    }
    if ( Src )
      ApiSetReleaseSchema(Src);
  }
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v3;
}
