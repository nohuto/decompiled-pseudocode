/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x140589958
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140586494 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140586570 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140587118 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140587BE8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HvlpGetPageListIterator @ 0x1405897E0 (HvlpGetPageListIterator.c)
 *     HvlpSetupPageListIteration @ 0x1405898AC (HvlpSetupPageListIteration.c)
 *     VslStartSecurePageIteration @ 0x14058B6FC (VslStartSecurePageIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(int a1, int a2, char *a3, void *a4, unsigned int a5, LONGLONG **a6)
{
  LONGLONG v9; // rax
  int v10; // ecx
  LONGLONG **v12; // r12
  LONGLONG *v13; // r14
  unsigned int v14; // ebx
  __int128 v15; // rtt
  int v16; // ebp
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int started; // edx
  char *PageListIterator; // rax
  __int64 v24; // [rsp+30h] [rbp-38h]

  v9 = (LONGLONG)HvlpSetupPageListIteration(a1, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225473LL;
  v12 = a6;
  v13 = *(LONGLONG **)(v9 + 8);
  v14 = 0;
  v15 = *(__int64 *)(v9 + 16);
  *a6 = v13;
  v24 = v15 / 4096;
  v16 = v24;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    v17 = 0x200000;
    v18 = a3;
    if ( a5 <= 0x200000 )
      v17 = a5;
    v14 = v17 >> 12;
    if ( v14 )
    {
      v19 = v14;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v18);
        v18 += 4096;
        *v13++ = PhysicalAddress.QuadPart / 4096;
        --v19;
      }
      while ( v19 );
      v12 = a6;
      v16 = v24;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v12 = (LONGLONG *)a3;
    v10 = 4096;
    v9 = v21.QuadPart / 4096;
  }
  LOBYTE(v10) = a1 == 0;
  started = VslStartSecurePageIteration(v10, v16, v9, v14, a2);
  if ( started < 0 )
  {
    PageListIterator = (char *)HvlpGetPageListIterator(a1);
    *(_WORD *)(PageListIterator + 3) = 0;
    *((_QWORD *)PageListIterator + 1) = 0LL;
    *(_WORD *)PageListIterator = 0;
    PageListIterator[2] = 0;
  }
  return (unsigned int)started;
}
