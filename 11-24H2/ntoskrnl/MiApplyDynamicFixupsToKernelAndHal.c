/*
 * XREFs of MiApplyDynamicFixupsToKernelAndHal @ 0x140C55264
 * Callers:
 *     MiPrepareScpFixupsForNtAndHal @ 0x140C55AD4 (MiPrepareScpFixupsForNtAndHal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404AB2D0 (RtlLookupImageSectionByName.c)
 *     RtlCopyKernelScpUnwindInfo @ 0x1405F0CBC (RtlCopyKernelScpUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1406A2D60 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A30A8 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlInitializeKscpCfgFunctions @ 0x140C36ED4 (RtlInitializeKscpCfgFunctions.c)
 */

__int64 __fastcall MiApplyDynamicFixupsToKernelAndHal(__int64 a1)
{
  __int64 (__fastcall *v2)(); // r12
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rsi
  const char *v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r15d
  __int64 v11; // rbx
  const char *v12; // rax
  PVOID v13; // r9
  unsigned int v14; // r8d
  int v15; // ecx
  __int64 *v16; // rbx
  unsigned int i; // edi
  unsigned int v18; // [rsp+28h] [rbp-91h]
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-61h]
  _DWORD v21[2]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v22[2]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v23[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v24; // [rsp+78h] [rbp-41h]

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v20 = v3;
  if ( (MiFlags & 0x4000) == 0 )
  {
    result = RtlCopyKernelScpUnwindInfo(
               *(_QWORD *)(v3 + 48),
               *(_QWORD *)(v3 + 48),
               (unsigned int *)qword_140E2D730,
               (int)qword_140E2D730);
    if ( (int)result < 0 )
      return result;
    goto LABEL_7;
  }
  v4 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1 | 2;
  if ( (KiFeatureSettings & 0x20000) != 0 )
    v4 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1;
  if ( !v4 )
  {
LABEL_7:
    if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      goto LABEL_13;
    v19 = 0LL;
    v2 = MiIsBootImageTargetFullyRetpolined;
    RtlImageNtHeaderEx(1, *(_QWORD *)(v20 + 48), 0LL, &v19);
    v6 = v19;
    v7 = RtlLookupImageSectionByName(v19, "INITKDBG");
    v8 = 0LL;
    v9 = *((_DWORD *)v7 + 3);
    v10 = 1;
    v21[0] = *((_DWORD *)v7 + 2);
    v22[0] = v9;
    while ( !(_DWORD)v8 )
    {
      v11 = *(_QWORD *)&v21[2 * v8 - 2];
      v12 = RtlLookupImageSectionByName(v6, "MINIEX");
      v13 = qword_140E2D730;
      v14 = *(_DWORD *)(v11 + 64);
      v15 = *((_DWORD *)v12 + 3);
      v21[v10] = *((_DWORD *)v12 + 2);
      v22[v10] = v15;
      result = RtlPerformRetpolineRelocationsOnImageEx(
                 *(_QWORD *)(v11 + 48),
                 *(_QWORD *)(v11 + 48),
                 v14,
                 (int)v13,
                 (__int64)v13 + 4,
                 v18,
                 (__int64)v22,
                 (__int64)v21,
                 v10 + 1);
      if ( (int)result < 0 )
        goto LABEL_21;
      v10 = 0;
      v8 = 1LL;
    }
    result = RtlInitializeKscpCfgFunctions(qword_140E2D730, dword_140E2D73C << 12);
    if ( (int)result >= 0 )
    {
LABEL_13:
      if ( (KiFeatureSettings & 0x20000) == 0 )
      {
        v16 = *(__int64 **)(a1 + 16);
        for ( i = 0; i < 2; ++i )
        {
          result = RtlUpdateImportRelocationsInImage(
                     v16[6],
                     v16[6],
                     *((_DWORD *)v16 + 16),
                     (__int64)v2,
                     (__int64)qword_140E2D730,
                     (__int64)qword_140E2D730 + 4,
                     1,
                     (KiSpeculationFeatures & 0x20000000000LL) == 0);
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result != -1073741637 )
              goto LABEL_21;
          }
          else
          {
            *((_DWORD *)v16 + 26) |= 0x80u;
          }
          v16 = (__int64 *)*v16;
        }
      }
      result = 0LL;
    }
    goto LABEL_21;
  }
  memset_0(v23, 0, 0x68uLL);
  v24 = v4;
  result = VslpEnterIumSecureMode(2u, 223LL, 0, (__int64)v23);
LABEL_21:
  dword_140E2D748 = result;
  return result;
}
