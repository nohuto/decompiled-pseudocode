/*
 * XREFs of SepSetSingletonEntry @ 0x140607920
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x140607780 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14021AA04 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // edi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // si
  __int64 v9; // r9
  _DWORD *Pool2; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    if ( !*((_QWORD *)v7 + 2) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x30uLL, 0x74416553u);
      *((_QWORD *)v7 + 2) = Pool2;
      if ( !Pool2 )
      {
        v5 = -1073741801;
LABEL_7:
        ExReleaseSpinLockExclusive(v7, v8);
        return v5;
      }
      *Pool2 = 0;
      *(_DWORD *)(*((_QWORD *)v7 + 2) + 24LL) = 0;
      v11 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
      v11[1] = v11;
      *v11 = v11;
      v12 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
      v12[1] = v12;
      *v12 = v12;
    }
    v5 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v7 + 2), a2, a3, v9);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    goto LABEL_7;
  }
  return v5;
}
