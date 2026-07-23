/*
 * XREFs of NtLoadKey3 @ 0x140A91A10
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  KPROCESSOR_MODE PreviousMode; // r11
  ULONG64 ULong64; // r10
  int v13; // ecx
  __int128 v14; // xmm0
  int v16; // [rsp+70h] [rbp-38h]
  ULONG64 v17; // [rsp+78h] [rbp-30h]
  PVOID v18; // [rsp+80h] [rbp-28h]
  PVOID Pointer; // [rsp+88h] [rbp-20h]

  Pointer = 0LL;
  v18 = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ULong64 = 0LL;
  v17 = 0LL;
  v13 = 0;
  while ( ExtendedParameterCount )
  {
    if ( PreviousMode == 1 )
    {
      if ( ((unsigned __int8)ExtendedParameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v16;
      ULong64 = v17;
    }
    v14 = *(_OWORD *)&ExtendedParameters->0;
    if ( (unsigned __int8)*(_OWORD *)&ExtendedParameters->0 == 1LL )
    {
      if ( (v13 & 2) != 0 )
        return -1073741582;
      ULong64 = ExtendedParameters->ULong64;
      v17 = ULong64;
      v13 |= 2u;
    }
    else if ( (unsigned __int8)v14 == 2LL )
    {
      if ( (v13 & 4) != 0 )
        return -1073741582;
      Pointer = ExtendedParameters->Pointer;
      v13 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v14 != 3LL )
        return -1073741582;
      if ( (v13 & 8) != 0 )
        return -1073741582;
      v18 = ExtendedParameters->Pointer;
      v13 |= 8u;
    }
    v16 = v13;
    ++ExtendedParameters;
    --ExtendedParameterCount;
  }
  return CmLoadDifferencingKey(
           (__int64)TargetKey,
           (__int64)SourceFile,
           Flags | 0x8000,
           0LL,
           ULong64,
           Pointer,
           DesiredAccess,
           RootHandle,
           (int)Reserved,
           0LL,
           0,
           v18,
           PreviousMode);
}
