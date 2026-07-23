/*
 * XREFs of PiSwRemovePdoAssociation @ 0x1409F3EA0
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x1409F3E28 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     PiSwPdoAssociationFree @ 0x140A98FBC (PiSwPdoAssociationFree.c)
 */

__int64 __fastcall PiSwRemovePdoAssociation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r10
  _QWORD *v4; // rcx
  unsigned __int64 v5; // r9
  char v6; // r8
  char v7; // r8
  _QWORD *v8; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax

  v2 = 0;
  v3 = (_QWORD *)(a1 + 128);
  v4 = *(_QWORD **)(a1 + 128);
  v5 = 0LL;
  v6 = 0;
  while ( v4 != v3 )
  {
    v5 = (unsigned __int64)v4;
    if ( v4[5] == a2 )
    {
      v6 = 1;
      break;
    }
    v4 = (_QWORD *)*v4;
  }
  v7 = -v6;
  v8 = (_QWORD *)(v5 & -(__int64)(v7 != 0));
  if ( v8 )
  {
    v10 = *v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8
      || (v11 = *(_QWORD **)((v5 & -(__int64)(v7 != 0)) + 8), (_QWORD *)*v11 != v8)
      || (*v11 = v10,
          *(_QWORD *)(v10 + 8) = v11,
          v12 = *(_QWORD *)((v5 & -(__int64)(v7 != 0)) + 0x10),
          *(_QWORD **)(v12 + 8) != v8 + 2)
      || (v13 = (_QWORD *)v8[3], (_QWORD *)*v13 != v8 + 2) )
    {
      __fastfail(3u);
    }
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    PiSwPdoAssociationFree(v8);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
