/*
 * XREFs of KiIntSteerGetLineInformation @ 0x1402B3F44
 * Callers:
 *     KiIntSteerConnect @ 0x1402B3934 (KiIntSteerConnect.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerGetLineInformation(unsigned int *a1, int *a2, char *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  char v9; // di
  __int64 result; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = -1;
  v5 = *a1;
  v6 = 0;
  v9 = 1;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 3 )
      v6 = -1073741637;
  }
  else
  {
    v11 = a1[14];
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v5, v11) )
    {
      v9 = 0;
      v6 = guard_dispatch_icall_no_overrides(a1, &v11);
    }
    v4 = v11;
  }
  *a2 = v4;
  result = v6;
  *a3 = v9;
  return result;
}
