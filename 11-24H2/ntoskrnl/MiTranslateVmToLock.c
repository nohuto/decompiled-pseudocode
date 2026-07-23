/*
 * XREFs of MiTranslateVmToLock @ 0x1403FC970
 * Callers:
 *     MiIsPageTableLocked @ 0x140295EE4 (MiIsPageTableLocked.c)
 * Callees:
 *     <none>
 */

_KLOCK_QUEUE_HANDLE *__fastcall MiTranslateVmToLock(__int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // r9
  char v3; // al
  unsigned int v4; // r8d
  char *v5; // rcx
  _KLOCK_QUEUE_HANDLE *result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( v3 )
  {
    if ( v3 == 7 )
    {
      v4 = 1;
      v5 = (char *)&unk_140E2FE00 + 8;
    }
    else
    {
      v4 = 3;
      if ( v3 == 5 )
        v4 = 0;
      v5 = (char *)&unk_140E2FE00 + 8 * v4;
    }
  }
  else
  {
    v4 = 2;
    v5 = (char *)(a1 + 176);
  }
  *a2 = v5;
  result = &CurrentPrcb->SelfmapLockHandle[v4];
  a2[1] = result;
  return result;
}
