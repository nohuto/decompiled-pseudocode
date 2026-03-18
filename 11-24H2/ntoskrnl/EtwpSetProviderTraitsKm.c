/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x140A889E8
 * Callers:
 *     EtwSetInformation @ 0x140AA4AB0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1407A7600 (EtwpEventWriteRegistrationStatus.c)
 *     EtwpSetProviderTraitsCommon @ 0x1408361EC (EtwpSetProviderTraitsCommon.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v4; // ax
  unsigned int v6; // esi
  __int64 Pool2; // rax
  const char *v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  v4 = *(_WORD *)(a1 + 98);
  v6 = a3;
  if ( (v4 & 8) != 0 || (v4 & 1) == 0 )
  {
    v9 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 112) )
  {
    v9 = -1073741823;
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v8 = (const char *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 28), Src, v6);
      v9 = EtwpSetProviderTraitsCommon(
             0,
             0,
             (__int64)&v15,
             a1,
             v8,
             v6,
             &EtwpProviderTraitsKmMutex,
             (__int64)&EtwpProviderTraitsKmTree);
      if ( !v9 )
        return v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
  {
    LODWORD(P) = v9;
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, (__int64)P);
  }
  return v9;
}
