/*
 * XREFs of NtAdjustGroupsToken @ 0x140996CB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     SepAdjustGroups @ 0x140996A10 (SepAdjustGroups.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140997ED8 (SeReleaseLuidAndAttributesArray.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  char *v9; // r12
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  int v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v17; // rsi
  __int64 v18; // r13
  _QWORD *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  signed __int32 v23[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v28; // [rsp+5Ch] [rbp-4Ch]
  int GroupCount; // [rsp+60h] [rbp-48h]
  unsigned int v30; // [rsp+64h] [rbp-44h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  __int64 v32; // [rsp+70h] [rbp-38h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v34; // [rsp+C8h] [rbp+20h]

  v34 = BufferLength;
  GroupCount = 0;
  v32 = 0LL;
  v30 = 0;
  v27 = 0LL;
  LOBYTE(v33) = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v26 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ResetToDefault )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   (char *)NewState->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (__int64)HandleInformation,
                   (__int64)DestinationSid,
                   (PVOID *)&v32,
                   &v30),
        v28 = result,
        result >= 0) )
  {
    Object = 0LL;
    v15 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            &Object,
            0LL);
    if ( v15 < 0 )
    {
      if ( v32 )
      {
        LOBYTE(v14) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v32, v14);
      }
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = (PERESOURCE *)Object;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
      _InterlockedOr(v23, 0);
      v18 = v32;
      v19 = Object;
      v20 = SepAdjustGroups(
              (__int64)Object,
              0,
              ResetToDefault,
              GroupCount,
              v32,
              (__int64)v12,
              0LL,
              &v27,
              (_DWORD *)&v27 + 1,
              (char *)&v33);
      v28 = v20;
      if ( v12 )
        *ReturnLength = v27;
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        v28 = SepAdjustGroups(
                (__int64)v19,
                1,
                ResetToDefault,
                GroupCount,
                v18,
                (__int64)v12,
                v9,
                &v27,
                (_DWORD *)&v27 + 1,
                (char *)&v33);
        if ( v12 )
          v12->GroupCount = HIDWORD(v27);
        if ( (_BYTE)v33 )
          v19[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v23, 0);
        ExReleaseResourceLite(v17[6]);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        if ( v32 )
        {
          LOBYTE(v21) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v32, v21);
        }
        return v28;
      }
      if ( (unsigned int)v27 <= v34 )
      {
        v9 = (char *)(((unsigned __int64)&v12->Groups[0].Sid + (unsigned int)(16 * HIDWORD(v27)) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v23, 0);
      ExReleaseResourceLite(v17[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Object);
      if ( v32 )
      {
        LOBYTE(v22) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v32, v22);
      }
      return -1073741789;
    }
  }
  return result;
}
