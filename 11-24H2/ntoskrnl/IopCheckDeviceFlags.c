/*
 * XREFs of IopCheckDeviceFlags @ 0x140B6B740
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140B6AFFC (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14045B61C (IoGetLowerDeviceObjectWithTag.c)
 */

char __fastcall IopCheckDeviceFlags(__int64 a1, int a2)
{
  _DWORD *v2; // rdi
  char v4; // si
  _DWORD *LowerDeviceObjectWithTag; // rbx

  v2 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  ObfReferenceObjectWithTag(v2, 0x70506F50u);
  while ( v2 )
  {
    if ( (a2 & v2[12]) != 0 )
    {
      v4 = 1;
      ObfDereferenceObjectWithTag(v2, 0x70506F50u);
      return v4;
    }
    LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v2, 0x70506F50u);
    ObfDereferenceObjectWithTag(v2, 0x70506F50u);
    v2 = LowerDeviceObjectWithTag;
  }
  return v4;
}
