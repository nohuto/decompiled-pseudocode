/*
 * XREFs of NVMeControllerSetHostIdentifier @ 0x14001D908
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

char __fastcall NVMeControllerSetHostIdentifier(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v3; // si
  int i; // edx
  char v5; // bl
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  void *v10; // [rsp+90h] [rbp+8h] BYREF
  __int64 v11; // [rsp+98h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 4024);
  v10 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_12;
  if ( ((v1 >> 1) & ((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 96LL) & 1) != 0)) != 0 )
    *(_BYTE *)(a1 + 4024) = v1 | 8;
  LocalCommandReuse(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= ++i )
    ;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v5 = *(_BYTE *)(a1 + 4024) & 8;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  if ( !v10 )
    goto LABEL_12;
  *(_OWORD *)v10 = 0LL;
  memmove(v10, (const void *)(a1 + 4025), v5 != 0 ? 16LL : 8LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v10;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 16;
  v6 = *(_QWORD *)(a1 + 1104);
  v7 = *(_DWORD *)(v6 + 4140);
  v8 = ((unsigned __int8)v7 ^ (*(_BYTE *)(a1 + 4024) >> 3)) & 1;
  *(_QWORD *)(v6 + 4120) = *(_QWORD *)(v6 + 4168);
  *(_BYTE *)(v6 + 4096) = 9;
  *(_DWORD *)(v6 + 4140) = v7 ^ v8;
  *(_BYTE *)(v6 + 4136) = -127;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    *(_BYTE *)(a1 + 4024) |= 4u;
    v3 = 1;
  }
  if ( v10 )
    NVMeFreeDmaBuffer(a1, 16LL, (__int64 *)&v10, v11);
  if ( !v3 )
  {
LABEL_12:
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v3;
}
