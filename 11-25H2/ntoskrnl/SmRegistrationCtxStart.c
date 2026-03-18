/*
 * XREFs of SmRegistrationCtxStart @ 0x140AAF2F8
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmGetRegistrationInfo @ 0x140788074 (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x1407899AC (SmcCacheCreatePrepare.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SmCreateEvent @ 0x140AAF34C (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(PVOID *a1)
{
  int v2; // ebx
  PVOID v3; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v2 = SmCreateEvent(a1, &Object);
  if ( v2 < 0 )
  {
    v3 = Object;
  }
  else
  {
    v3 = 0LL;
    *a1 = Object;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
