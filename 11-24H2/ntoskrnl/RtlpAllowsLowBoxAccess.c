/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x14042492C
 * Callers:
 *     RtlpLookupLowBox @ 0x14042463C (RtlpLookupLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeClearLearningModeObjectInformation @ 0x1404014C0 (SeClearLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     SeSetLearningModeObjectInformation @ 0x1404B6F50 (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  bool v1; // zf
  char result; // al
  ULONG_PTR v4; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbx
  NTSTATUS v7; // eax
  const WCHAR *v8; // rdx
  bool v9; // di
  int v10; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v12; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v13[4]; // [rsp+74h] [rbp-94h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_ENTRY v15; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v16; // [rsp+98h] [rbp-70h] BYREF
  __int128 v17; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp-50h]
  __int128 v19; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-30h]
  __int128 v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F8h] [rbp-10h]
  _DWORD v23[4]; // [rsp+100h] [rbp-8h] BYREF
  char v24; // [rsp+110h] [rbp+8h] BYREF

  v12 = 0;
  v11 = 0;
  v1 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  v23[0] = 0x20000;
  v17 = 0LL;
  v23[1] = 196608;
  *(_OWORD *)Object = 0LL;
  v23[2] = 0x20000;
  v23[3] = 2031616;
  v19 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)&v15.Linkage.Blink = 0LL;
  v16 = 0LL;
  if ( !v1 )
    return 1;
  Object[0] = (PVOID)PsReferenceEffectiveToken(KeGetCurrentThread(), 1836020801LL, &v14, &v10, v13, 0LL);
  if ( (*((_DWORD *)Object[0] + 50) & 0x1000000) == 0 )
  {
    ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
    return 0;
  }
  RtlInitUnicodeString((PUNICODE_STRING)&v15.Linkage.Blink, L"Global Atom Table Entry");
  v4 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v4, 0x6D4E7441u);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = RtlStringCbCopyW(Pool2, v4, (NTSTRSAFE_PCWSTR)(a1 + 42));
    v8 = L"Unable to capture ATOM name.";
    if ( v7 >= 0 )
      v8 = v6;
  }
  else
  {
    v8 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString(&v16, v8);
  *(_QWORD *)&v20 = &v15.Linkage.Blink;
  *((_QWORD *)&v20 + 1) = &v16;
  SeSetLearningModeObjectInformation(&v19);
  v15.Linkage.Flink = (struct _LIST_ENTRY *)&v24;
  Object[1] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v9 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         (int *)&v17,
         0,
         0x20000u,
         0,
         &v15,
         v23,
         KeGetCurrentThread()->PreviousMode,
         &v11,
         &v12);
  ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  result = 1;
  if ( !v9 || !v11 )
    return 0;
  return result;
}
