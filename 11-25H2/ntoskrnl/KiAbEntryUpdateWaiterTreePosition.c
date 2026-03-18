/*
 * XREFs of KiAbEntryUpdateWaiterTreePosition @ 0x1402E39A0
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 */

char __fastcall KiAbEntryUpdateWaiterTreePosition(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  bool v6; // al
  unsigned __int64 v7; // rax

  result = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
  if ( result > 30 )
    result = 30;
  if ( *(_BYTE *)(a1 + 40) != result )
  {
    v4 = (unsigned __int64 *)(a2 + 56);
    *(_BYTE *)(a1 + 40) = result;
    RtlRbRemoveNode(a2 + 56, (unsigned __int64 *)(a1 + 16));
    v5 = *v4;
    if ( (v4[1] & 1) == 0 )
      goto LABEL_5;
    if ( v5 )
    {
      v5 ^= (unsigned __int64)v4;
LABEL_5:
      v6 = 0;
      if ( !v5 )
        return RtlRbInsertNodeEx((__int64 *)v4, v5, v6, a1 + 16);
      while ( 1 )
      {
        if ( *(_BYTE *)(v5 + 24) >= *(_BYTE *)(a1 + 40) )
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( (v4[1] & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_14;
            v7 ^= v5;
          }
          if ( !v7 )
          {
LABEL_14:
            v6 = 1;
            return RtlRbInsertNodeEx((__int64 *)v4, v5, v6, a1 + 16);
          }
        }
        else
        {
          v7 = *(_QWORD *)v5;
          if ( (v4[1] & 1) != 0 )
          {
            if ( !v7 )
              break;
            v7 ^= v5;
          }
          if ( !v7 )
            break;
        }
        v5 = v7;
      }
    }
    v6 = 0;
    return RtlRbInsertNodeEx((__int64 *)v4, v5, v6, a1 + 16);
  }
  return result;
}
