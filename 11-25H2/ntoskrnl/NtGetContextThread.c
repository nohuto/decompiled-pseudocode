/*
 * XREFs of NtGetContextThread @ 0x14090B750
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall NtGetContextThread(void *a1, __int64 a2)
{
  KPROCESSOR_MODE PreviousMode; // si
  int ContextThreadInternal; // edi
  PVOID v5; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ContextThreadInternal = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( ContextThreadInternal >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      ContextThreadInternal = -1073741816;
    else
      ContextThreadInternal = PspGetContextThreadInternal((__int64)Object, a2, PreviousMode, PreviousMode, 1);
    ObfDereferenceObject(v5);
  }
  return (unsigned int)ContextThreadInternal;
}
