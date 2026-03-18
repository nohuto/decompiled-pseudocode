/*
 * XREFs of _GetKeyboardLayoutList @ 0x14011036C
 * Callers:
 *     NtUserGetKeyboardLayoutList @ 0x1401102E0 (NtUserGetKeyboardLayoutList.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z @ 0x140110414 (-GetKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@@Z.c)
 */

struct tagKL *__fastcall GetKeyboardLayoutList(int a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  struct tagKL *result; // rax
  struct tagKL *v7; // r8
  struct tagKL *v8; // rdx
  unsigned int v9; // ecx

  v4 = 0;
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  result = GetKbdLayoutListHead(ProcessWindowStation);
  v7 = result;
  if ( result )
  {
    v8 = result;
    if ( a1 )
    {
      do
      {
        if ( (*((_DWORD *)v7 + 8) & 0x20000000) == 0 )
        {
          if ( !a1-- )
            return (struct tagKL *)v4;
          ++v4;
          *a2++ = *((_QWORD *)v7 + 5);
        }
        v7 = (struct tagKL *)*((_QWORD *)v7 + 2);
      }
      while ( v7 != v8 );
    }
    else
    {
      do
      {
        v9 = v4 + 1;
        if ( (*((_DWORD *)v7 + 8) & 0x20000000) != 0 )
          v9 = v4;
        v4 = v9;
        v7 = (struct tagKL *)*((_QWORD *)v7 + 2);
      }
      while ( v7 != result );
    }
    return (struct tagKL *)v4;
  }
  return result;
}
