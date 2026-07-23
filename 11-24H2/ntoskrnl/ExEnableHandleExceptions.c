/*
 * XREFs of ExEnableHandleExceptions @ 0x140A55C8C
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExpLockHandleTableExclusive @ 0x140447858 (ExpLockHandleTableExclusive.c)
 *     ExpUnlockHandleTableExclusive @ 0x14044D754 (ExpUnlockHandleTableExclusive.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // cl
  bool v6; // bl
  int v8; // eax

  ExpLockHandleTableExclusive(a1, (__int64)KeGetCurrentThread());
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    v8 = *(_DWORD *)(v4 + 8);
    if ( (v8 & 8) != 0 )
    {
      v6 = a2 != 0;
      goto LABEL_5;
    }
    if ( a2 )
      *(_DWORD *)(v4 + 8) = v8 | 8;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 44);
    if ( (v5 & 2) != 0 )
    {
      v6 = a2 != 0;
      goto LABEL_5;
    }
    *(_BYTE *)(a1 + 44) = v5 & 0xFD | (a2 != 0 ? 2 : 0);
  }
  v6 = 1;
LABEL_5:
  ExpUnlockHandleTableExclusive(a1);
  return v6;
}
