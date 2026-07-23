/*
 * XREFs of MiLdwPopupWorker @ 0x1407EC930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     CcMmLogLostDelayedWriteError @ 0x1404B67D0 (CcMmLogLostDelayedWriteError.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall MiLdwPopupWorker(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rbx
  NTSTATUS v2; // edi

  v1 = *(struct _FILE_OBJECT **)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 48) )
    ExFreePoolWithTag((PVOID)a1, 0);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0);
  CcMmLogLostDelayedWriteError(v1, v2);
  return ObfDereferenceObjectWithTag(v1, 0x644C6D4Du);
}
