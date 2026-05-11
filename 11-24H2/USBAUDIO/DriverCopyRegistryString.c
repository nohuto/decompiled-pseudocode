/*
 * XREFs of DriverCopyRegistryString @ 0x14002D9CC
 * Callers:
 *     DriverEntry @ 0x14002F0CC (DriverEntry.c)
 * Callees:
 *     memmove @ 0x14001BC00 (memmove.c)
 */

__int64 __fastcall DriverCopyRegistryString(__int64 a1, const void **a2)
{
  unsigned int v2; // ebx
  _WORD *Pool2; // rax
  _WORD *v5; // rdi
  unsigned __int16 v6; // ax
  void *v7; // rax

  v2 = 0;
  if ( !a2 )
  {
    g_RegistryPath = 0LL;
    return v2;
  }
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 16LL, 1096972357LL);
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = *(_WORD *)a2;
  v6 = *(_WORD *)a2 + 2;
  v5[1] = v6;
  if ( a2[1] )
  {
    v7 = (void *)ExAllocatePool2(256LL, v6, 1096972357LL);
    *((_QWORD *)v5 + 1) = v7;
    if ( !v7 )
    {
      v2 = -1073741670;
      ExFreePool(v5);
      return v2;
    }
    memmove(v7, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    *((_QWORD *)v5 + 1) = 0LL;
  }
  g_RegistryPath = v5;
  return v2;
}
