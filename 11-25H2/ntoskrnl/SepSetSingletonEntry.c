/*
 * XREFs of SepSetSingletonEntry @ 0x1405FCF90
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x1405FCDF0 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, int *a2, __int64 a3)
{
  unsigned int v5; // edi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v7; // rbx
  KIRQL v8; // si
  _DWORD *Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v5 = 0;
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(a1);
  v7 = SingletonEntryFromIndexNumber;
  if ( SingletonEntryFromIndexNumber )
  {
    v8 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
    if ( !*((_QWORD *)v7 + 2) )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
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
      v10 = (_QWORD *)(*((_QWORD *)v7 + 2) + 8LL);
      v10[1] = v10;
      *v10 = v10;
      v11 = (_QWORD *)(*((_QWORD *)v7 + 2) + 32LL);
      v11[1] = v11;
      *v11 = v11;
    }
    v5 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)v7 + 2), a2, a3);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    goto LABEL_7;
  }
  return v5;
}
