/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x1404B6F50
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14042492C (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SepGetCurrentLogLevel @ 0x140404C60 (SepGetCurrentLogLevel.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     ObQueryNameString @ 0x1409524A0 (ObQueryNameString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  _OBJECT_NAME_INFORMATION *v7; // rdi
  NTSTATUS v8; // eax
  _OBJECT_NAME_INFORMATION *v9; // rax
  ULONG_PTR v10; // r14
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  ReturnLength = 0;
  v17 = 0;
  if ( SepLearningModeTokenCount )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v17, &Object, v14, 0LL);
    v4 = v3[50] & 0x1000000;
    if ( v17 == 1 )
      ObFastDereferenceObject(
        (__int64 *)&CurrentThread->ApcState.Process[1].ActiveProcessors,
        (ULONG_PTR)v3,
        0x74726853u);
    else
      ObfDereferenceObjectWithTag(v3, 0x74726853u);
    if ( v4 )
    {
      *(_OWORD *)(a1 + 40) = 0LL;
      v5 = *(void **)(a1 + 32);
      if ( !v5 )
        goto LABEL_20;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v5, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
        goto LABEL_20;
      Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL, 0x210uLL, 0x4F526553u);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ObQueryNameString(Object, Pool2, 0x210u, &ReturnLength);
        if ( v8 != -1073741820 )
          goto LABEL_12;
        ExFreePoolWithTag(v7, 0);
        v9 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL, ReturnLength, 0x4F526553u);
        v7 = v9;
        if ( v9 )
        {
          v8 = ObQueryNameString(Object, v9, ReturnLength, &ReturnLength);
LABEL_12:
          if ( v8 >= 0 )
          {
            if ( v7->Name.Buffer )
            {
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v7->Name.MaximumLength;
              v11 = (wchar_t *)ExAllocatePool2(0x100uLL, v10, 0x4F526553u);
              v12 = v11;
              if ( v11 )
              {
                memset_0(v11, 0, v10);
                RtlStringCbCopyW(v12, v10, v7->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  RtlStringCbCatW(v12, v10, L"\\");
                  RtlStringCbCatW(v12, v10, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v12);
              }
            }
          }
          ExFreePoolWithTag(v7, 0);
        }
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
LABEL_20:
      *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel();
      *(_QWORD *)a1 = *(_QWORD *)(v13 + 1592);
      *(_QWORD *)(v13 + 1592) = a1;
    }
  }
}
