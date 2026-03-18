/*
 * XREFs of IopHardErrorThread @ 0x140712370
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IopRemoveHardErrorPacket @ 0x1404F6244 (IopRemoveHardErrorPacket.c)
 *     IopCheckHardErrorEmpty @ 0x140595F80 (IopCheckHardErrorEmpty.c)
 *     ExRaiseHardError @ 0x140A4E2E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void IopHardErrorThread()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  char v2; // al
  void *v3; // rcx
  char v4; // di
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  do
  {
    KeWaitForSingleObject(&stru_140F8C9B8, Executive, 0, 0, 0LL);
    v0 = IopRemoveHardErrorPacket();
    v1 = *(_QWORD *)(v0 + 32);
    v6 = v0 + 24;
    if ( ExReadyForErrors )
      ExRaiseHardError(
        *(unsigned int *)(v0 + 16),
        v1 != 0,
        v1 != 0,
        (unsigned __int64)&v6 & -(__int64)(v1 != 0),
        7,
        &v5);
    v2 = IopCheckHardErrorEmpty();
    v3 = *(void **)(v0 + 32);
    v4 = v2;
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag((PVOID)v0, 0);
  }
  while ( v4 );
}
