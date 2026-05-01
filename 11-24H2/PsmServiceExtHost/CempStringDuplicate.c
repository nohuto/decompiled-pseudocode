/*
 * XREFs of CempStringDuplicate @ 0x18003E8E0
 * Callers:
 *     CrmRpcSrvRegister @ 0x18003DF10 (CrmRpcSrvRegister.c)
 *     CrmRegistrationStart @ 0x18003E788 (CrmRegistrationStart.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall CempStringDuplicate(__int64 a1)
{
  __int64 v2; // rbx
  SIZE_T v4; // rbx
  _WORD *result; // rax
  _WORD *v6; // r8
  unsigned __int64 v7; // rbx
  _WORD *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int16 v11; // ax
  _WORD *v12; // rdx

  v2 = -1LL;
  while ( *(_WORD *)(a1 + 2 * v2++ + 2) != 0 )
    ;
  v4 = 2 * v2 + 2;
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  v6 = result;
  if ( result )
  {
    v7 = v4 >> 1;
    if ( v7 )
    {
      if ( v7 > 0x7FFFFFFF )
      {
        *result = 0;
      }
      else
      {
        v8 = result;
        v9 = 2147483646 - v7;
        v10 = a1 - (_QWORD)result;
        do
        {
          if ( !(v9 + v7) )
            break;
          v11 = *(_WORD *)((char *)v8 + v10);
          if ( !v11 )
            break;
          *v8++ = v11;
          --v7;
        }
        while ( v7 );
        v12 = v8 - 1;
        if ( v7 )
          v12 = v8;
        *v12 = 0;
      }
    }
    return v6;
  }
  return result;
}
