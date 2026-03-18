/*
 * XREFs of DerefOf @ 0x140008B10
 * Callers:
 *     <none>
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x14001A7A0 (GetBaseObject.c)
 */

__int64 __fastcall DerefOf(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int16 v6; // ax
  __int64 BaseObject; // rax
  __int64 v8; // rdx

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "R");
  if ( !(_DWORD)result )
  {
    i = *(_QWORD *)(a2 + 80);
    v6 = *(_WORD *)(i + 2);
    if ( v6 == 128 )
    {
      BaseObject = GetBaseObject(*(_QWORD *)(i + 16));
      i = BaseObject + 64;
      DereferenceObjectEx(BaseObject, v8);
    }
    else
    {
      while ( v6 == 129 )
      {
        for ( i = *(_QWORD *)(i + 16); ; i = *(_QWORD *)(i + 16) + 64LL )
        {
          v6 = *(_WORD *)(i + 2);
          if ( v6 != 128 )
            break;
        }
      }
    }
    return ReadObject(a1, i, *(_QWORD *)(a2 + 88));
  }
  return result;
}
