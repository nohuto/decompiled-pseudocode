/*
 * XREFs of MiPrepareVadDelete @ 0x140A12E00
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 * Callees:
 *     MiLockAddressSpaceToo @ 0x1403C7D64 (MiLockAddressSpaceToo.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 */

__int64 __fastcall MiPrepareVadDelete(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  int v10; // ecx
  struct _KTHREAD *v11; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  if ( a3 == v7 && a4 == v8 )
  {
    *a5 = 0;
    if ( *a2 )
    {
      CurrentThread = KeGetCurrentThread();
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
      *a2 = 0;
    }
    return 0LL;
  }
  v10 = *(_DWORD *)(a1 + 48);
  if ( (v10 & 0x600000) == 0x600000 )
    return 3221225631LL;
  if ( (v10 & 0x70) != 0 )
  {
    if ( (v10 & 0x70) != 0x40 )
      return 3221225631LL;
  }
  else if ( (v10 & 0x200000) != 0 && ((v10 & 0x800000) != 0 || (v10 & 0x180000u) >= 0x100000) )
  {
    return 3221225631LL;
  }
  if ( a3 == v7 )
    *a5 = 1;
  else
    *a5 = (a4 != v8) + 2;
  if ( *a2 )
    return 0LL;
  v11 = KeGetCurrentThread();
  *a2 = 1;
  if ( (unsigned int)MiLockAddressSpaceToo((__int64)v11->ApcState.Process, a1, 0LL) )
    return 0LL;
  return (unsigned int)MiVadDeleted(a1) != 0 ? -1073741664 : -1073741267;
}
