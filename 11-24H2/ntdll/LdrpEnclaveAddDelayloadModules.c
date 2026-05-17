/*
 * XREFs of LdrpEnclaveAddDelayloadModules @ 0x1800D9400
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D9218 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlInitAnsiStringEx @ 0x1800E0390 (RtlInitAnsiStringEx.c)
 *     LdrpEnclaveAddDependentModule @ 0x180132D54 (LdrpEnclaveAddDependentModule.c)
 */

__int64 __fastcall LdrpEnclaveAddDelayloadModules(__int64 a1)
{
  NTSTATUS inited; // esi
  unsigned __int64 v3; // r15
  __int64 v4; // rbp
  unsigned int v6; // ebx
  unsigned int i; // edi
  __int64 v8; // rcx
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  DestinationString = 0LL;
  inited = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = RtlImageDirectoryEntryToData(v3, 1, 0xDu, &v10);
  if ( v4 )
  {
    v6 = 0;
    for ( i = v10 >> 5; v6 < i; ++v6 )
    {
      v8 = *(unsigned int *)(32LL * v6 + v4 + 4);
      if ( !(_DWORD)v8 )
        break;
      inited = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(v3 + v8));
      if ( inited < 0 )
        break;
      inited = LdrpEnclaveAddDependentModule(a1, &DestinationString);
      if ( inited < 0 )
        break;
    }
  }
  return (unsigned int)inited;
}
