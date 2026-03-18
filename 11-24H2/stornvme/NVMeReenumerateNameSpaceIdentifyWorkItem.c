/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530
 * Callers:
 *     <none>
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeVersionCheck @ 0x140016FD0 (NVMeVersionCheck.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x140027DD0 (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140029C40 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x14002A1A8 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x14002A208 (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x14002A95C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x14002AC14 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x14002AF6C (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x14002B0D8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r15d
  char v6; // si
  __int64 v7; // r9
  __int64 result; // rax
  bool v9; // zf
  unsigned __int64 i; // r12
  __int64 v11; // r12
  int j; // edx
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // rbx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v21; // r9
  void **v22; // [rsp+20h] [rbp-59h]
  const wchar_t *v23; // [rsp+28h] [rbp-51h]
  __int64 v24; // [rsp+30h] [rbp-49h]
  int v25; // [rsp+38h] [rbp-41h]
  int v26; // [rsp+40h] [rbp-39h]
  __int64 v27; // [rsp+48h] [rbp-31h]
  const wchar_t *v28; // [rsp+50h] [rbp-29h]
  __int64 v29; // [rsp+58h] [rbp-21h]
  const wchar_t *v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h]
  void *v32; // [rsp+78h] [rbp-1h] BYREF
  int v33[2]; // [rsp+80h] [rbp+7h]
  int v34[2]; // [rsp+88h] [rbp+Fh]
  unsigned int v35; // [rsp+E0h] [rbp+67h] BYREF
  void *v36; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+F0h] [rbp+77h]
  _BYTE *v38; // [rsp+F8h] [rbp+7Fh]

  v37 = a3;
  *(_QWORD *)v34 = *(_QWORD *)(a1 + 1560);
  v5 = *(_DWORD *)(*(_QWORD *)v34 + 516LL);
  if ( v5 > 0xFF )
    v5 = 255;
  v6 = 0;
  *(_QWORD *)v33 = *(_QWORD *)(a1 + 3992);
  v36 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x1000u);
  v38 = v36;
  if ( !v36 )
  {
    result = NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v7);
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
    v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
    ++*(_DWORD *)(a1 + 4208);
    if ( !v9 )
      return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    return result;
  }
  for ( i = 0LL; ; i = v35 + 1 )
  {
    v35 = i;
    if ( i >= 0x400 )
      break;
    v11 = *(unsigned int *)(a2 + 4 * i + 2048);
    if ( !(_DWORD)v11 )
      break;
    if ( (unsigned int)v11 <= v5 )
    {
      LocalCommandReuse(a1, a1 + 1136);
      for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1232) + 4225LL) |= j )
        ++j;
      *(_WORD *)(*(_QWORD *)(a1 + 1232) + 4212LL) = 0;
      memset(v36, 0, 0x1000uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4160LL) = v36;
      *(_QWORD *)(*(_QWORD *)(a1 + 1232) + 4168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 1232) + 4208LL) = 4096;
      v13 = *(_QWORD *)(a1 + 1232) + 4096LL;
      *(_BYTE *)v13 = 6;
      *(_DWORD *)(v13 + 4) = v11;
      *(_QWORD *)(v13 + 24) = 0LL;
      *(_BYTE *)(v13 + 40) = 0;
      ProcessCommand(a1, a1 + 1144);
      WaitForCommandComplete(a1, a1 + 1144, 0);
      if ( *(_BYTE *)(a1 + 1147) == 1 )
      {
        if ( *(_BYTE *)(a1 + 20) || v5 <= 1 )
        {
          v15 = (__int64)v38;
        }
        else
        {
          v14 = NVMeVersionCheck(a1, 1u, 1u);
          v15 = (__int64)v38;
          if ( v14 && !v38[4 * (v38[26] & 0xF) + 130] && !*(_QWORD *)v38 )
            continue;
        }
        v32 = 0LL;
        v22 = &v32;
        StorPortExtendedFunction(0LL, a1, 424LL, 1701672526LL);
        if ( !v32 )
        {
          v16 = *(_DWORD *)(a1 + 4212) + 1;
          v9 = (*(_BYTE *)(a1 + 21) & 2) == 0;
          *(_DWORD *)(a1 + 4212) = v16;
          if ( !v9 )
          {
            v31 = v16;
            v30 = L"Pool Fail Count";
            v29 = v11;
            v28 = L"NSID";
            v27 = 0LL;
            v26 = 0;
            v25 = 2;
            v24 = 8LL;
            v23 = L"Reenumeration Resource Fail";
            LODWORD(v22) = 10;
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
          }
          break;
        }
        NVMeParseNameSpaceIdentifyData(a1, v15, *(__int64 *)v34, *(__int64 *)v33, v11, (char *)v32);
        *(_QWORD *)(a2 + 8LL * (unsigned int)(v11 - 1) + 8) = v32;
        ++*(_DWORD *)(a2 + 4);
      }
    }
  }
  if ( v36 )
    NVMeFreeDmaBuffer(a1, 4096LL, (__int64 *)&v36, 0LL);
  v17 = a1;
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v6 = 1;
    v18 = a2 + 2048;
    goto LABEL_29;
  }
  v35 = 0;
  v20 = NVMeReenumerateNameSpaceCompare(a1, a2, v5, &v35);
  if ( v20 )
  {
    if ( !(unsigned __int8)NVMeReenumerateNameSpaceWaitForAllIOComplete(a1) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v6 = 1;
      goto LABEL_40;
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
    {
      NVMeReenumerateNameSpaceCancelMerge(a1, v5);
      v18 = a2 + 2048;
      v6 = 1;
LABEL_35:
      v17 = a1;
LABEL_29:
      NVMeReenumerateReissueGetLogNamespaceChangeList(v17, v18);
      goto LABEL_40;
    }
    NVMeReenumerateNameSpaceMerge(a1, a2, v5);
    NVMeReenumerateNameSpaceRescan(a1, v5, v20, v35, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31);
  }
  if ( _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u) )
  {
    v18 = 0LL;
    goto LABEL_35;
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
LABEL_40:
  NVMeFreeNamespaceEnumerationContext(a1, a2, v6, v19);
  return StorPortExtendedFunction(31LL, a1, v37, v21);
}
