/*
 * XREFs of NtSetEventBoostPriority @ 0x140A98090
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriority @ 0x1404F7790 (KeSetEventBoostPriority.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetEventBoostPriority(void *a1)
{
  NTSTATUS v1; // edi
  PVOID v2; // rbx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 >= 0 )
  {
    v2 = Object;
    if ( (*(_BYTE *)Object & 0x7F) != 0 )
      KeSetEventBoostPriority((volatile signed __int32 *)Object, 0LL);
    else
      v1 = -1073741788;
    ObfDereferenceObject(v2);
  }
  return (unsigned int)v1;
}
