/*
 * XREFs of LdrpEnclaveAddDelayloadModules @ 0x1800D4770
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlInitAnsiStringEx @ 0x1800DB490 (RtlInitAnsiStringEx.c)
 *     LdrpEnclaveAddDependentModule @ 0x180130F84 (LdrpEnclaveAddDependentModule.c)
 */

__int64 __fastcall LdrpEnclaveAddDelayloadModules(__int64 a1)
{
  NTSTATUS inited; // esi
  void *v3; // r15
  unsigned int *v4; // rbp
  ULONG v6; // ebx
  ULONG i; // edi
  __int64 v8; // rcx
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  Size = 0;
  DestinationString = 0LL;
  inited = 0;
  v3 = *(void **)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = (unsigned int *)RtlImageDirectoryEntryToData(v3, 1u, 0xDu, &Size);
  if ( v4 )
  {
    v6 = 0;
    for ( i = Size >> 5; v6 < i; ++v6 )
    {
      v8 = v4[8 * v6 + 1];
      if ( !(_DWORD)v8 )
        break;
      inited = RtlInitAnsiStringEx(&DestinationString, (PCSZ)v3 + v8);
      if ( inited < 0 )
        break;
      inited = LdrpEnclaveAddDependentModule(a1, &DestinationString);
      if ( inited < 0 )
        break;
    }
  }
  return (unsigned int)inited;
}
