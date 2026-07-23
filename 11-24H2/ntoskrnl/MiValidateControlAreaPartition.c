/*
 * XREFs of MiValidateControlAreaPartition @ 0x140442FA8
 * Callers:
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(__int64 a1, __int64 a2)
{
  ULONG *v2; // r10
  ULONG **v3; // rax
  int v5; // eax

  v2 = (ULONG *)*((_QWORD *)qword_140E300C8 + (*(_WORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(a2 + 62) & 1) != 0 )
    {
      if ( v2 == *((ULONG **)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x800000;
LABEL_12:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &MiSystemPartition )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x1000000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x1000000;
    goto LABEL_12;
  }
  if ( *v3 == v2 && (((unsigned __int8)(*(_DWORD *)a1 >> 22) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x800000u;
  return 3221226614LL;
}
