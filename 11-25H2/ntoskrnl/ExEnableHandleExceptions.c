/*
 * XREFs of ExEnableHandleExceptions @ 0x140A5BB80
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1403D7690 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x140454230 (ExpLockHandleTableExclusive.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rcx
  char v6; // cl
  bool v7; // bl
  int v9; // eax

  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( (v9 & 8) != 0 )
    {
      v7 = a2 != 0;
      goto LABEL_5;
    }
    if ( a2 )
      *(_DWORD *)(v5 + 8) = v9 | 8;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 44);
    if ( (v6 & 2) != 0 )
    {
      v7 = a2 != 0;
      goto LABEL_5;
    }
    *(_BYTE *)(a1 + 44) = v6 & 0xFD | (a2 != 0 ? 2 : 0);
  }
  v7 = 1;
LABEL_5:
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  return v7;
}
