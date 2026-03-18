/*
 * XREFs of ToBuffer @ 0x14002E060
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     ValidateTarget @ 0x14002F550 (ValidateTarget.c)
 */

__int64 __fastcall ToBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135LL, &v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
