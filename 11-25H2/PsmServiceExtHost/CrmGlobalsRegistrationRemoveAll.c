/*
 * XREFs of CrmGlobalsRegistrationRemoveAll @ 0x1800788F4
 * Callers:
 *     CrmGlobalsCleanup @ 0x180078688 (CrmGlobalsCleanup.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800789E0 (CrmGlobalsRegistrationsDeleteRoutine.c)
 */

__int64 CrmGlobalsRegistrationRemoveAll()
{
  char v0; // al
  unsigned __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rdx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbx

  CempLockAcquireExclusive((__int64)&unk_1800E9A20);
  v0 = BYTE8(xmmword_1800E9A30);
  v1 = xmmword_1800E9A30;
  if ( (BYTE8(xmmword_1800E9A30) & 1) != 0 && (_QWORD)xmmword_1800E9A30 )
    v1 = (unsigned __int64)&xmmword_1800E9A30 ^ xmmword_1800E9A30;
  v2 = BYTE8(xmmword_1800E9A30) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v1 )
        {
          v3 = (_QWORD *)v1;
          if ( v2 )
            v1 ^= *(_QWORD *)v1;
          else
            v1 = *(_QWORD *)v1;
          *v3 = 0LL;
        }
        v4 = (unsigned __int64 *)(v1 + 8);
        if ( !*(_QWORD *)(v1 + 8) )
          break;
        if ( v2 )
          v1 ^= *v4;
        else
          v1 = *v4;
        *v4 = 0LL;
      }
      v5 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v2 && v5 )
        v5 ^= v1;
      CrmGlobalsRegistrationsDeleteRoutine(v1, 0LL);
      if ( !v5 )
        break;
      v1 = v5;
    }
    v0 = BYTE8(xmmword_1800E9A30);
  }
  xmmword_1800E9A30 = 0LL;
  if ( (v0 & 1) != 0 )
    BYTE8(xmmword_1800E9A30) = 1;
  dword_1800E9A28 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E9A20);
}
