/*
 * XREFs of ExpGetLookasideInformation @ 0x1404D12E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLookasideInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // esi
  int v5; // r14d
  _DWORD *v6; // r15
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  KSPIN_LOCK *v10; // rbp
  KIRQL v11; // al
  __int64 *v12; // rdx
  KIRQL v13; // r8
  KIRQL v14; // al
  __int64 *v15; // rdx
  _DWORD *v16; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v18 = 0LL;
  v3 = 0;
  v4 = (unsigned int)a2 >> 5;
  v5 = 0;
  v6 = a3;
  if ( (unsigned int)a2 >> 5 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    v5 = ExLockUserBuffer(a1, a2, a3, 1LL, &v18, &P);
    if ( v5 >= 0 )
    {
      v7 = (__int64 *)ExPoolLookasideListHead;
      v5 = 0;
      v8 = v18;
      while ( v7 != &ExPoolLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v7 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v7 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v7 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v7 - 11) - *((_DWORD *)v7 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v7 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v7 - 9) - *((_DWORD *)v7 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v7 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v7 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v7 - 5);
        if ( v3 == v4 )
          goto LABEL_20;
        v7 = (__int64 *)*v7;
        v8 += 32LL;
      }
      v9 = (__int64 *)ExSystemLookasideListHead;
      while ( v9 != &ExSystemLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v9 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v9 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v9 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v9 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v9 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v9 - 8);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v9 - 7);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v9 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v9 - 5);
        if ( v3 == v4 )
          goto LABEL_20;
        v9 = (__int64 *)*v9;
        v8 += 32LL;
      }
      v10 = &ExNPagedLookasideLock;
      v11 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
      v12 = (__int64 *)ExNPagedLookasideListHead;
      v13 = v11;
      while ( v12 != &ExNPagedLookasideListHead )
      {
        ++v3;
        *(_WORD *)v8 = *((_WORD *)v12 - 32);
        *(_WORD *)(v8 + 2) = *((_WORD *)v12 - 24);
        *(_DWORD *)(v8 + 4) = *((_DWORD *)v12 - 11);
        *(_DWORD *)(v8 + 8) = *((_DWORD *)v12 - 10);
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v12 - 9);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v12 - 8);
        *(_DWORD *)(v8 + 20) = 0;
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v12 - 6);
        *(_DWORD *)(v8 + 28) = *((_DWORD *)v12 - 5);
        if ( v3 == v4 )
          goto LABEL_19;
        v12 = (__int64 *)*v12;
        v8 += 32LL;
      }
      KeReleaseSpinLock(&ExNPagedLookasideLock, v11);
      v10 = &ExPagedLookasideLock;
      v14 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
      v15 = (__int64 *)ExPagedLookasideListHead;
      v13 = v14;
      if ( (__int64 *)ExPagedLookasideListHead != &ExPagedLookasideListHead )
      {
        v16 = (_DWORD *)(v8 + 4);
        do
        {
          ++v3;
          *((_WORD *)v16 - 2) = *((_WORD *)v15 - 32);
          *((_WORD *)v16 - 1) = *((_WORD *)v15 - 24);
          *v16 = *((_DWORD *)v15 - 11);
          v16[1] = *((_DWORD *)v15 - 10);
          v16[2] = *((_DWORD *)v15 - 9);
          v16[3] = *((_DWORD *)v15 - 8);
          v16[4] = 1;
          v16[5] = *((_DWORD *)v15 - 6);
          v16[6] = *((_DWORD *)v15 - 5);
          if ( v3 == v4 )
            break;
          v15 = (__int64 *)*v15;
          v16 += 8;
        }
        while ( v15 != &ExPagedLookasideListHead );
      }
LABEL_19:
      KeReleaseSpinLock(v10, v13);
LABEL_20:
      ExUnlockUserBuffer((struct _MDL *)P);
    }
  }
  result = (unsigned int)v5;
  *v6 = 32 * v3;
  return result;
}
