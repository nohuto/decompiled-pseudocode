/*
 * XREFs of MiSimpleAgePte @ 0x1404A3CC0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiWalkVaCheckCommon @ 0x14037D6F0 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  char VaAge; // r12
  _DWORD *v13; // rcx
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = (_QWORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( !(unsigned int)MiWalkVaCheckCommon(v3, (_QWORD *)a2, v7, a3 == 0, &v14) )
    return 0LL;
  v9 = *(_QWORD **)(a1 + 184);
  v10 = (__int64)(a2 << 25) >> 16;
  VaAge = MiGetVaAge(v8, v10);
  if ( (v14 & 0x20) == 0 )
    goto LABEL_3;
  if ( !v9[9] )
    goto LABEL_6;
  if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 )
  {
    if ( (MiGetPagePrivilege(48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
      goto LABEL_12;
LABEL_6:
    MiAgePteWorker(a1, a2, (__int64)(a2 << 25) >> 16, (unsigned __int64)v7, (__int64)v9, 3);
    goto LABEL_3;
  }
  if ( v10 > 0x7FFFFFFEFFFFLL )
    goto LABEL_6;
LABEL_12:
  if ( v9[9] == 1LL )
    MiAcquirePrcbAgeTrimLists(v3, v9 + 7);
  v13 = (_DWORD *)v9[9];
  *(_QWORD *)&v13[2 * (*v13)++ + 2] = v10 & 0xFFFFFFFFFFFFF000uLL;
LABEL_3:
  if ( VaAge )
    return 0LL;
  return ++v9[5] >= v9[6] ? 4 : 0;
}
