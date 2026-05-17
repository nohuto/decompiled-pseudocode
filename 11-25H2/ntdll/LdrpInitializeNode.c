/*
 * XREFs of LdrpInitializeNode @ 0x180073610
 * Callers:
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 *     LdrpApplyPatchImage @ 0x18011A970 (LdrpApplyPatchImage.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 **v5; // r8
  __int64 *v6; // rdx
  int v7; // r14d
  __int64 i; // rsi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r15
  char v12; // r12
  __int64 v13; // r9
  int v14; // ecx
  _QWORD v17[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v18; // [rsp+80h] [rbp-88h]
  __int128 v19; // [rsp+90h] [rbp-78h]
  __int128 v20; // [rsp+A0h] [rbp-68h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+C0h] [rbp-48h]

  *(_DWORD *)(a1 + 56) = 8;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 == a1;
  v4 = LdrpImageEntry;
  if ( !v3 )
  {
    v5 = (__int64 **)qword_1801D4978;
    do
    {
      if ( v2 - 160 != v4 )
      {
        v6 = (__int64 *)(v2 - 160 + 32);
        if ( *v5 != &qword_1801D4970 )
          __fastfail(3u);
        *v6 = (__int64)&qword_1801D4970;
        *(_QWORD *)(v2 - 160 + 40) = v5;
        *v5 = v6;
        v5 = (__int64 **)(v2 - 160 + 32);
        qword_1801D4978 = (__int64)v5;
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 != a1 );
  }
  v7 = 0;
  for ( i = *(_QWORD *)(a1 + 8); i != a1; i = *(_QWORD *)(i + 8) )
  {
    v9 = i - 160;
    if ( i - 160 != v4 )
    {
      if ( *(_DWORD *)(v9 + 268) == 9 )
      {
        v7 = LdrpApplyPatchImage(i - 160);
        if ( v7 < 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrsnap.c",
            1483,
            (int)"LdrpInitializeNode",
            0,
            "Applying patch \"%wZ\" failed - Status = 0x%x\n",
            i - 88);
          break;
        }
      }
      v10 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v11 = *(_QWORD *)(v9 + 56);
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        1502,
        (int)"LdrpInitializeNode",
        2,
        "Calling init routine %p for DLL \"%wZ\"\n",
        v11);
      v12 = 1;
      v17[0] = 72LL;
      v17[1] = 1LL;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      RtlActivateActivationContextUnsafeFast(v17, *(_QWORD *)(v9 + 136));
      if ( *(_WORD *)(v9 + 110) )
        LdrpCallTlsInitializers(1LL, i - 160);
      if ( v11 )
      {
        v13 = 0LL;
        if ( (*(_BYTE *)(v9 + 104) & 0x20) != 0 )
          v13 = LdrpProcessInitContextRecord;
        v22 = v13;
        v12 = LdrpCallInitRoutine(v11, *(_QWORD *)(v9 + 48), 1LL);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)v17);
      LdrpCurrentDllInitializer = v10;
      *(_DWORD *)(v9 + 104) |= 0x80000u;
      if ( !v12 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrsnap.c",
          1556,
          (int)"LdrpInitializeNode",
          0,
          "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
          v11);
        v7 = -1073741502;
        *(_DWORD *)(v9 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v9 + 48), (unsigned __int16 *)(v9 + 72), 5294);
      v4 = LdrpImageEntry;
    }
  }
  v14 = 9;
  if ( v7 )
    v14 = -4;
  *(_DWORD *)(a1 + 56) = v14;
  return (unsigned int)v7;
}
