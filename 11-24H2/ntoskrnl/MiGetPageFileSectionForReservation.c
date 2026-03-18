/*
 * XREFs of MiGetPageFileSectionForReservation @ 0x14049161C
 * Callers:
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x14037012C (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiGetPageFileSectionForReservation(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8

  v6 = MiReferencePfBackedSection(a1);
  if ( !v6 )
    return 0LL;
  *(_QWORD *)a2 = *(_QWORD *)v6;
  *(_QWORD *)(a2 + 16) = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  *(_QWORD *)(a2 + 24) = v8;
  v9 = *(_QWORD *)(v6 + 8);
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v9 )
    *(_QWORD *)(a2 + 16) = v9;
  v10 = v9 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 44) - 1);
  if ( v8 > v10 )
    *(_QWORD *)(a2 + 24) = v10;
  if ( a3 )
  {
    v11 = MiLockProtoPoolPage(a1, (unsigned __int8 *)(a2 + 32));
    *(_QWORD *)(a2 + 8) = v11;
    if ( !v11 )
    {
      MiReleasePageFileSectionInfo(a2, v12, v13);
      return 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return 1LL;
}
