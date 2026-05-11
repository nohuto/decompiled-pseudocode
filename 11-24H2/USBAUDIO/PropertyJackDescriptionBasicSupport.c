/*
 * XREFs of PropertyJackDescriptionBasicSupport @ 0x1400333B0
 * Callers:
 *     <none>
 * Callees:
 *     CheckBridgePin @ 0x1400415AC (CheckBridgePin.c)
 */

__int64 __fastcall PropertyJackDescriptionBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Options; // ebx
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  __int64 result; // rax
  __int64 v11; // r10
  char v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v12 = 0;
  if ( Options < 0x20 )
    return 3221225488LL;
  if ( (*(_DWORD *)(a2 + 20) & 0x200) == 0 )
    return 3221225659LL;
  result = CheckBridgePin(FilterFromIrp, *(unsigned int *)(a2 + 24), &v12);
  if ( (int)result >= 0 )
  {
    if ( v12 == (_BYTE)v11 )
      return 3221225659LL;
    if ( Length >= 4 )
    {
      *(_DWORD *)a3 = 513;
      a1->IoStatus.Information = 4LL;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 4) = 40;
        *(_QWORD *)(a3 + 24) = v11;
        *(_QWORD *)(a3 + 32) = v11;
        *(GUID *)(a3 + 8) = GUID_NULL;
        a1->IoStatus.Information = 40LL;
      }
      return (unsigned int)v11;
    }
    else
    {
      result = 3221225507LL;
      a1->IoStatus.Information = 40LL;
    }
  }
  return result;
}
