/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x140A7D024
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A7D300 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 Pool2; // rax
  unsigned int *v7; // r15
  __int64 CellFlat; // rax
  __int64 v9; // r13
  int SecurityDescriptorNode; // edi
  ULONG_PTR v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 CellPaged; // rax
  ULONG_PTR v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned int v19[2]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v20[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int BugCheckParameter4; // [rsp+A8h] [rbp+50h]
  unsigned int v23; // [rsp+B0h] [rbp+58h]
  unsigned int v24; // [rsp+B8h] [rbp+60h] BYREF
  int v25; // [rsp+BCh] [rbp+64h]

  v1 = *(_QWORD *)(a1 + 48);
  v19[1] = 0;
  v19[0] = -1;
  v24 = -1;
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_DWORD *)(v1 + 40);
  v4 = 0LL;
  v25 = 0;
  v5 = 0LL;
  v20[0] = -1;
  v20[1] = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x77554D43u);
  v7 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_QWORD *)(Pool2 + 8) = v2;
  *(_DWORD *)Pool2 = -1;
  if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v2, v3, v19);
  else
    CellFlat = HvpGetCellPaged(v2, v3, v19);
  v9 = CellFlat;
  if ( !CellFlat )
    goto LABEL_37;
  SecurityDescriptorNode = HvpMarkCellDirty(v2, v3, 1);
  if ( SecurityDescriptorNode < 0 )
    goto LABEL_34;
  v11 = *(unsigned int *)(a1 + 96);
  v12 = (*(_BYTE *)(v2 + 140) & 1) != 0 ? HvpGetCellFlat(v2, v11, &v24) : HvpGetCellPaged(v2, v11, &v24);
  v4 = v12;
  if ( v12
    && ((v13 = *(_DWORD *)(v9 + 44), (*(_BYTE *)(v2 + 140) & 1) == 0)
      ? (CellPaged = HvpGetCellPaged(v2, v13, v20))
      : (CellPaged = HvpGetCellFlat(v2, v13, v20)),
        (v5 = CellPaged) != 0) )
  {
    BugCheckParameter4 = *(_DWORD *)(CellPaged + 8);
    v23 = *(_DWORD *)(CellPaged + 4);
    SecurityDescriptorNode = HvpMarkCellDirty(v2, v13, 1);
    if ( SecurityDescriptorNode >= 0 )
    {
      SecurityDescriptorNode = HvpMarkCellDirty(v2, BugCheckParameter4, 1);
      if ( SecurityDescriptorNode >= 0 )
      {
        SecurityDescriptorNode = HvpMarkCellDirty(v2, v23, 1);
        if ( SecurityDescriptorNode >= 0 )
        {
          SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v2, v3, v9, v3 >> 31, (void *)(v4 + 20), 1, v7);
          if ( SecurityDescriptorNode >= 0 )
          {
            if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v2, (__int64)&v24);
            else
              HvpReleaseCellPaged(v2, &v24);
            v15 = *v7;
            v16 = (*(_BYTE *)(v2 + 140) & 1) != 0 ? HvpGetCellFlat(v2, v15, &v24) : HvpGetCellPaged(v2, v15, &v24);
            v17 = *(_DWORD *)(v16 + 4);
            v4 = v16;
            SecurityDescriptorNode = HvpMarkCellDirty(v2, *(unsigned int *)(v16 + 8), 1);
            if ( SecurityDescriptorNode >= 0 )
            {
              SecurityDescriptorNode = HvpMarkCellDirty(v2, v17, 1);
              if ( SecurityDescriptorNode >= 0 )
              {
                SecurityDescriptorNode = 0;
                *(_QWORD *)(a1 + 104) = v7;
                goto LABEL_23;
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_37:
    SecurityDescriptorNode = -1073741670;
  }
LABEL_34:
  CmpLightWeightCleanupSetSecDescUoW(v7);
  if ( v9 )
  {
LABEL_23:
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, (__int64)v19);
    else
      HvpReleaseCellPaged(v2, v19);
  }
  if ( v4 )
  {
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, (__int64)&v24);
    else
      HvpReleaseCellPaged(v2, &v24);
  }
  if ( v5 )
  {
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, (__int64)v20);
    else
      HvpReleaseCellPaged(v2, v20);
  }
  return (unsigned int)SecurityDescriptorNode;
}
