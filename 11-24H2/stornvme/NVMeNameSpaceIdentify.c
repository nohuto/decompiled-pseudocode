/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1400297C8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeVersionCheck @ 0x140016FD0 (NVMeVersionCheck.c)
 *     IsIntelChatham @ 0x140017C70 (IsIntelChatham.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x140027E58 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeLogNameSpaceIdentificationStatus @ 0x140029594 (NVMeLogNameSpaceIdentificationStatus.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140029C40 (NVMeParseNameSpaceIdentifyData.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // r13d
  __int64 v3; // rax
  bool v5; // al
  int v6; // r9d
  void *v7; // r11
  bool v8; // r10
  bool v9; // al
  char v10; // bl
  unsigned int v11; // esi
  _QWORD *v12; // r15
  int v13; // ecx
  int i; // edx
  __int64 v15; // rcx
  bool v16; // al
  char *v17; // rdx
  __int64 result; // rax
  void *v19; // [rsp+38h] [rbp-30h] BYREF
  char *v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]
  int v22[2]; // [rsp+50h] [rbp-18h]
  int v23[4]; // [rsp+58h] [rbp-10h]
  int v24; // [rsp+B0h] [rbp+48h]
  bool v25; // [rsp+B8h] [rbp+50h]
  int v26; // [rsp+C0h] [rbp+58h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 1;
  v3 = *(_QWORD *)(a1 + 3992);
  *(_QWORD *)v23 = v1;
  *(_QWORD *)v22 = v3;
  v5 = NVMeVersionCheck(a1, 1u, 1u);
  v6 = *(_DWORD *)(a1 + 56);
  v7 = 0LL;
  v25 = v5;
  v8 = v5;
  v19 = 0LL;
  v21 = 0LL;
  if ( (v6 & 0x100000) != 0 || (v9 = NVMeVersionCheck(a1, 2u, 0), v10 = (char)v7, v9) )
    v10 = 1;
  if ( *(_BYTE *)(a1 + 20) == (_BYTE)v7 && v8 && (v6 & 0x40000) == 0 )
  {
    NVMeAllocateDmaBuffer(a1, 0x1000u);
    v7 = 0LL;
  }
  v11 = *(_DWORD *)(v1 + 516);
  v12 = *(_QWORD **)(a1 + 1656);
  v13 = (int)v7;
  if ( v11 > 0xFF )
    v11 = 255;
  v26 = (int)v7;
  if ( !v11 )
    goto LABEL_34;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 20) == (_BYTE)v7 || *(_DWORD *)(a1 + 216) == v2 )
    {
      LocalCommandReuse(a1, a1 + 1008);
      for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
        ++i;
      *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
      v15 = *(_QWORD *)(a1 + 1104);
      *(_QWORD *)(v15 + 4120) = *(_QWORD *)(a1 + 1664);
      *(_BYTE *)(v15 + 4136) = v2 == 0;
      *(_BYTE *)(v15 + 4096) = 6;
      *(_DWORD *)(v15 + 4100) = v2;
      ProcessCommand(a1, a1 + 1016);
      WaitForCommandComplete(a1, a1 + 1016, 1u);
      v16 = IsIntelChatham(a1);
      v7 = 0LL;
      if ( v16 )
      {
        HIBYTE(v24) = *((_BYTE *)v12 + 384);
        BYTE2(v24) = *((_BYTE *)v12 + 385);
        BYTE1(v24) = *((_BYTE *)v12 + 386);
        LOBYTE(v24) = *((_BYTE *)v12 + 387);
        if ( v24 != -559038737 && v2 == 1 )
        {
          memset(v12, 0, 0x1000uLL);
          v7 = 0LL;
          *v12 = 67108336LL;
          *((_BYTE *)v12 + 130) = 9;
          v12[1] = 67108336LL;
          v12[2] = 67108336LL;
        }
      }
      if ( *(_BYTE *)(a1 + 1019) != 1 )
        goto LABEL_31;
      if ( !v25 || *((_BYTE *)v12 + 4 * (*((_BYTE *)v12 + 26) & 0xF) + 130) || *v12 )
        goto LABEL_28;
      if ( (!v10 || *(_BYTE *)(a1 + 20)) && (v11 <= 1 || *(_BYTE *)(a1 + 20)) )
        break;
    }
LABEL_32:
    if ( v2++ >= v11 )
      goto LABEL_33;
  }
  *(_DWORD *)(a1 + 4064) |= 0x40u;
LABEL_28:
  v20 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
  {
    v17 = *(char **)(a1 + 1576);
    v20 = v17;
    *(_QWORD *)(a1 + 1576) = v17 + 424;
    NVMeParseNameSpaceIdentifyData(a1, (int)v12, v23[0], v22[0], v2, v17);
    ++v26;
    v7 = 0LL;
    *(_QWORD *)(a1 + 8LL * (v2 - 1) + 1672) = v20;
    *(_DWORD *)(a1 + 224) = (unsigned __int16)v2;
LABEL_31:
    if ( *(_BYTE *)(a1 + 20) )
      goto LABEL_33;
    goto LABEL_32;
  }
  StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
  v7 = 0LL;
LABEL_33:
  v13 = v26;
LABEL_34:
  *(_DWORD *)(a1 + 212) = v13;
  result = *(unsigned int *)(a1 + 4064);
  if ( (result & 0x60) != 0 )
  {
    result = NVMeLogNameSpaceIdentificationStatus(a1, 0, 0, 0xC1000002);
    v7 = 0LL;
  }
  if ( v19 != v7 )
    return NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v19, v21);
  return result;
}
