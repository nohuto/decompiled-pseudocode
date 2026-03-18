/*
 * XREFs of NVMeGetActiveNameSpaceIdList @ 0x140027E58
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     BuildIdentifyCommandGeneric @ 0x14001F0F4 (BuildIdentifyCommandGeneric.c)
 */

__int64 __fastcall NVMeGetActiveNameSpaceIdList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // r9
  unsigned int v8; // edi
  int i; // edx
  char v10; // al
  int v11; // [rsp+20h] [rbp-38h]

  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
    return 3238002689LL;
  LocalCommandReuse(a1, a1 + 1008);
  v8 = 0;
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 4096;
  BuildIdentifyCommandGeneric(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 2, v7, v11, 0, a3, 0, 0);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  v10 = *(_BYTE *)(a1 + 1019);
  if ( v10 != 1 )
  {
    if ( v10 == 5 )
    {
      return (unsigned int)-1056964596;
    }
    else if ( v10 == 8 )
    {
      return (unsigned int)-1056964599;
    }
    else
    {
      v8 = -1056964607;
      if ( v10 == 9 )
        return (unsigned int)-1056964594;
    }
  }
  return v8;
}
