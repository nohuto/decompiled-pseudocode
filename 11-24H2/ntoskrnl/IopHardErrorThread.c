/*
 * XREFs of IopHardErrorThread @ 0x14070FF00
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IopRemoveHardErrorPacket @ 0x1404F3B44 (IopRemoveHardErrorPacket.c)
 *     IopCheckHardErrorEmpty @ 0x140592FB0 (IopCheckHardErrorEmpty.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    KeWaitForSingleObject(&stru_140F8C978, Executive, 0, 0, 0LL);
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
