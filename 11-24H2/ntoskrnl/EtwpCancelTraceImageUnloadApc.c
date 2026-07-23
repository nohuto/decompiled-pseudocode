/*
 * XREFs of EtwpCancelTraceImageUnloadApc @ 0x14064C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwpTraceImageUnload @ 0x1403B36B8 (EtwpTraceImageUnload.c)
 *     FsRtlGetFileNameInformation @ 0x1409F9160 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x140A0C580 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCancelTraceImageUnloadApc(PVOID P)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rcx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *((_QWORD *)P + 11);
  v4 = 0LL;
  if ( (int)FsRtlGetFileNameInformation(v2, 512LL, &v4, &v5) < 0 )
    v3 = (unsigned __int16 *)(*((_QWORD *)P + 11) + 88LL);
  else
    v3 = (unsigned __int16 *)&v4;
  EtwpTraceImageUnload(
    v3,
    *((_QWORD *)P + 12),
    *((_QWORD *)P + 13),
    *((_QWORD *)P + 14),
    *((_DWORD *)P + 30),
    *((_DWORD *)P + 31),
    *((_DWORD *)P + 32),
    *((_DWORD *)P + 33),
    *((_QWORD *)P + 17),
    0);
  if ( v5 )
    FsRtlReleaseFileNameInformation();
  ObfDereferenceObjectWithTag(*((PVOID *)P + 11), 0x746C6644u);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 12), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
