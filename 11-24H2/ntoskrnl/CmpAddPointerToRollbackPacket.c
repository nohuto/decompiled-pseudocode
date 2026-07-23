/*
 * XREFs of CmpAddPointerToRollbackPacket @ 0x1407E05BC
 * Callers:
 *     CmpAddEnlistmentToRollbackPacket @ 0x1407E0568 (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpAddUoWToRollbackPacket @ 0x1407E060C (CmpAddUoWToRollbackPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAddPointerToRollbackPacket(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v4; // r8d
  unsigned int i; // edx

  v2 = *a1;
  if ( a1[1] == (_DWORD)v2 )
  {
    return (unsigned int)-1073741670;
  }
  else
  {
    v4 = 0;
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * i) == a2 )
        return (unsigned int)-1073740008;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v2) = a2;
    ++*a1;
  }
  return v4;
}
