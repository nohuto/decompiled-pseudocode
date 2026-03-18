/*
 * XREFs of KiIntSteerGetLineInformation @ 0x1403B7E84
 * Callers:
 *     KiIntSteerConnect @ 0x1403B7680 (KiIntSteerConnect.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiIntSteerGetLineInformation(unsigned int *a1, int *a2, char *a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  char v10; // di
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = -1;
  v6 = *a1;
  v7 = 0;
  v10 = 1;
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 3 )
      v7 = -1073741637;
  }
  else
  {
    v14 = a1[14];
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v6, v14, a3, a4) )
    {
      v10 = 0;
      v7 = guard_dispatch_icall_no_overrides(a1, &v14, v12, v13);
    }
    v5 = v14;
  }
  *a2 = v5;
  result = v7;
  *a3 = v10;
  return result;
}
