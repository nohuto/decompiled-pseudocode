/*
 * XREFs of MiReferenceDataSubsections @ 0x140416740
 * Callers:
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiReferenceDataSubsections(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned __int64 v4; // rdx
  unsigned int v6; // ebx
  __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned __int64 v11; // r12
  int v12; // eax
  int v13; // edi
  int v14; // eax
  unsigned int v16; // r8d
  _DWORD *SubsectionNode; // rax
  unsigned __int64 v18[8]; // [rsp+28h] [rbp-40h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v4 = *a2;
  v6 = 0;
  *a4 = 3;
  v18[0] = 0LL;
  v20 = 0;
  v9 = MiOffsetToProtos(a1, v4, v18);
  if ( v9 )
  {
    v10 = 136;
    v11 = v18[0] + a3;
    if ( !v18[0] && (a3 & 0x1FF) == 0 )
    {
      if ( *(_QWORD *)(a1 + 64) )
      {
        if ( (*(_BYTE *)(a1 + 62) & 0xC) != 0 )
        {
          v20 = 1;
          if ( a3 == *(_DWORD *)(v9 + 44) && !*(_QWORD *)(v9 + 8) )
            v10 = 648;
        }
      }
    }
    v12 = MiAddViewsForSection((int **)v9, v18[0] + a3, v10);
    v13 = v12;
    if ( (v10 & 0x200) != 0 )
    {
      if ( v12 >= 0 )
      {
        v14 = 1;
        goto LABEL_6;
      }
      v13 = MiAddViewsForSection((int **)v9, v11, v10 & 0xFFFFFDFF);
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
    v14 = 0;
LABEL_6:
    if ( v20 )
    {
      if ( v14 )
      {
        LOBYTE(v6) = (*(_DWORD *)(v9 + 48) & 0xC0000000) == 0x40000000;
        *a4 = v6;
      }
      else
      {
        v16 = MiIncrementLargeSubsections(v9, v11);
        if ( v16 != -1 )
        {
          do
          {
            if ( !(a3 % MiPageSizes[v16]) )
              break;
            ++v16;
          }
          while ( v16 <= 1 );
          if ( v16 > 1 )
          {
            SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
            MiDecrementLargeSubsections(v9, SubsectionNode);
          }
          else
          {
            *a4 = v16;
          }
        }
      }
    }
    return (unsigned int)v13;
  }
  return 3221225503LL;
}
