/*
 * XREFs of SmmIoMmuReferenceMdl @ 0x14003B20C
 * Callers:
 *     SmmIoMmuUnmapStagingMdl @ 0x14003B048 (SmmIoMmuUnmapStagingMdl.c)
 *     SmmIommuMapStagingMdl @ 0x14003B134 (SmmIommuMapStagingMdl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmIoMmuUpdatePfn @ 0x140041418 (SmmIoMmuUpdatePfn.c)
 *     Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledDeviceUsageNoInline @ 0x140095064 (Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SmmIoMmuReferenceMdl(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // r14
  int updated; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  KIRQL OldIrql; // [rsp+90h] [rbp+8h]

  v3 = *(_DWORD *)(a2 + 24);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  if ( v3 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      LOBYTE(v9) = a3;
      v10 = *(_QWORD *)(*(_QWORD *)a2 + 8LL * v3);
      updated = SmmIoMmuUpdatePfn(a1, v10, v9);
      v6 = updated;
      if ( updated == -1073741801 )
        goto LABEL_7;
      ++v3;
      if ( updated == 259 )
      {
        v12 = v7++;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v12) = v10;
        if ( v7 == *(_DWORD *)(a2 + 20) )
          goto LABEL_13;
      }
    }
    while ( v3 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
LABEL_7:
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_SmmIoMmuUpdatePfn__private_IsEnabledDeviceUsageNoInline() )
        v5 = *(_DWORD *)(a2 + 24);
      if ( v5 < v3 )
      {
        v13 = v3 - v5;
        v14 = 8LL * v5;
        do
        {
          SmmIoMmuUpdatePfn(a1, *(_QWORD *)(v14 + *(_QWORD *)a2), 0LL);
          v14 += 8LL;
          --v13;
        }
        while ( v13 );
      }
      goto LABEL_17;
    }
LABEL_13:
    if ( v3 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 721;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pArgs->OutputSize == OutputIndex",
        721LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  *(_DWORD *)(a2 + 28) = v7;
  *(_DWORD *)(a2 + 24) = v3;
LABEL_17:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), OldIrql);
  return v6;
}
