/*
 * XREFs of MiInsertClone @ 0x1404C392C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 */

char __fastcall MiInsertClone(__int64 a1, _QWORD *a2, int a3)
{
  bool v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v3 = 0;
  if ( a3 )
    MiDeleteCloneZombies(a1, 1);
  v6 = *(_QWORD **)(a1 + 640);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2[3] > v6[4] || a2[4] >= v6[3] )
      {
        v7 = (_QWORD *)v6[1];
        if ( !v7 )
        {
          v3 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 640), (unsigned __int64)v6, v3, a2);
        }
      }
      else
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 640), (unsigned __int64)v6, v3, a2);
      }
      v6 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 640), (unsigned __int64)v6, v3, a2);
}
