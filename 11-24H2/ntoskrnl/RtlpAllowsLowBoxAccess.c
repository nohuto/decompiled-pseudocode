/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x1404323F0
 * Callers:
 *     RtlpLookupLowBox @ 0x1404320FC (RtlpLookupLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeClearLearningModeObjectInformation @ 0x140408FE0 (SeClearLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140433420 (RtlStringCbCopyW.c)
 *     SeSetLearningModeObjectInformation @ 0x1404BBE8C (SeSetLearningModeObjectInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsReferenceEffectiveToken @ 0x14085D1B0 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  bool v1; // zf
  char result; // al
  size_t v4; // rsi
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
  char *v15; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v17; // [rsp+98h] [rbp-70h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp-50h]
  __int128 v20; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-30h]
  __int128 v22; // [rsp+E8h] [rbp-20h]
  __int64 v23; // [rsp+F8h] [rbp-10h]
  _DWORD v24[4]; // [rsp+100h] [rbp-8h] BYREF
  char v25; // [rsp+110h] [rbp+8h] BYREF

  v12 = 0;
  v11 = 0;
  v1 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  LOBYTE(v10) = 0;
  v18 = 0LL;
  v24[0] = 0x20000;
  *(_OWORD *)Object = 0LL;
  v24[1] = 196608;
  v24[2] = 0x20000;
  v24[3] = 2031616;
  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  if ( !v1 )
    return 1;
  Object[0] = (PVOID)PsReferenceEffectiveToken(KeGetCurrentThread(), 1836020801LL, &v14, &v10, v13, 0LL);
  if ( (*((_DWORD *)Object[0] + 50) & 0x1000000) == 0 )
  {
    ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
    return 0;
  }
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v4 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
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
  RtlInitUnicodeString(&v17, v8);
  *(_QWORD *)&v21 = &DestinationString;
  *((_QWORD *)&v21 + 1) = &v17;
  SeSetLearningModeObjectInformation(&v20);
  v15 = &v25;
  Object[1] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v9 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         (int *)&v18,
         0,
         0x20000u,
         0,
         &v15,
         v24,
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
