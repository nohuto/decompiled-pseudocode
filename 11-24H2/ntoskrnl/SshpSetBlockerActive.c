/*
 * XREFs of SshpSetBlockerActive @ 0x140444D60
 * Callers:
 *     SshpBlockerActiveReferenceOperationCallback @ 0x140444CDC (SshpBlockerActiveReferenceOperationCallback.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404E5DF0 (SleepstudyHelper_ComponentActiveLocked.c)
 *     SleepstudyHelper_ComponentInactive @ 0x1404E5E50 (SleepstudyHelper_ComponentInactive.c)
 * Callees:
 *     SshpTracingWriteBlockerStateChange @ 0x140444E2C (SshpTracingWriteBlockerStateChange.c)
 */

__int64 __fastcall SshpSetBlockerActive(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r10d
  BOOL v4; // edi
  char v5; // si
  _DWORD *v6; // rbx
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 result; // rax

  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = (_BYTE)a2 != 0;
  v5 = a2;
  v6 = (_DWORD *)(a1 + 8);
  if ( v4 != (v3 & 1) && (v3 & 2) != 0 )
  {
    v7 = MEMORY[0xFFFFF78000000008];
    v8 = *(_QWORD *)(a1 + 32);
    a2 = a1 + ((unsigned __int64)((*(_DWORD *)(a1 + 8) & 1) == 0) << 7);
    if ( MEMORY[0xFFFFF78000000008] >= v8 )
    {
      v9 = MEMORY[0xFFFFF78000000008] - v8;
      *(_QWORD *)(a2 + 40) += MEMORY[0xFFFFF78000000008] - v8;
      while ( (unsigned int)v2 < 5 )
      {
        v10 = (unsigned int)v2;
        v2 = (unsigned int)(v2 + 1);
        if ( v9 >= PopFxAccountingBucketLimits[v10] && v9 < PopFxAccountingBucketLimits[v2] )
        {
          ++*(_DWORD *)(a2 + 4 * v10 + 128);
          *(_QWORD *)(a2 + 8 * v10 + 48) += v9;
          break;
        }
      }
    }
    *(_QWORD *)(a1 + 32) = v7;
    v6 = (_DWORD *)(a1 + 8);
  }
  if ( v4 != (*v6 & 1) )
  {
    LOBYTE(a2) = v5;
    SshpTracingWriteBlockerStateChange(a1, a2);
  }
  result = v4 | *v6 & 0xFFFFFFFE;
  *v6 = result;
  return result;
}
