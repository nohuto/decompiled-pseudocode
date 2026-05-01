/*
 * XREFs of CreateActivityCoordinatorPolicy @ 0x18001B990
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180002E30 (MIDL_user_allocate.c)
 */

__int64 __fastcall CreateActivityCoordinatorPolicy(unsigned int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _OWORD *v5; // r8

  v2 = 0;
  v3 = (int)a1;
  *a2 = 0LL;
  if ( a1 > 3 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = MIDL_user_allocate(0x20uLL);
    if ( v5 )
    {
      *v5 = ActivityCoordinatorPolicyTemplatesTable[2 * v3];
      v5[1] = ActivityCoordinatorPolicyTemplatesTable[2 * v3 + 1];
      *a2 = v5;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
