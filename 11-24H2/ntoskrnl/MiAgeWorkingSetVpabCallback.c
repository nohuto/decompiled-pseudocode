/*
 * XREFs of MiAgeWorkingSetVpabCallback @ 0x14047DD90
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 */

__int64 __fastcall MiAgeWorkingSetVpabCallback(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int *a5)
{
  unsigned __int64 v9; // rax
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rcx
  char v12; // r10
  char v14; // dl

  v9 = MI_READ_PTE_LOCK_FREE(a3);
  v10 = *(__int64 (__fastcall **)())(a1 + 168);
  v11 = *a2;
  v12 = 5;
  if ( v10 != MiSimpleAgePte )
    v12 = 0;
  if ( (v11 & 2) != 0 )
  {
    v14 = v12 | 1;
    if ( (v9 & 0x20) == 0 )
      v14 = v12;
    v12 = v14 | 2;
    if ( (*(_BYTE *)a5 & 3) == 0 )
      v12 = v14;
    goto LABEL_6;
  }
  if ( (v11 & 1) != 0 )
  {
    v12 |= 1u;
    if ( (*a5 & 3) != 0 )
      v12 = 5;
    goto LABEL_6;
  }
  if ( v10 != MiSimpleAgePte )
LABEL_6:
    MiAgePteWorker(a1, a3, a4, 48 * ((v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, a5, v12);
  return 0LL;
}
