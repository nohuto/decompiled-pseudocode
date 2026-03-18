/*
 * XREFs of Isoch_InsertLinkTrb @ 0x140024D40
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

char __fastcall Isoch_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // r8d
  _QWORD *v13; // r8
  _QWORD *v14; // rax

  v4 = (_QWORD *)a2[1];
  v5 = a2 + 1;
  if ( v4 == a2 + 1 )
    return 0;
  if ( (_QWORD *)v4[1] != v5 )
    goto LABEL_13;
  v9 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 )
    goto LABEL_13;
  *v5 = v9;
  *(_QWORD *)(v9 + 8) = v5;
  v4[1] = v4;
  *v4 = v4;
  v10 = a4 ? 6145 - (*(_DWORD *)(a1 + 200) != 0) : *(_DWORD *)(a1 + 200) & 1 | 0x1800;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) != 0 || !a4 && (a3 == 7 || (unsigned int)(a3 - 5) <= 1) )
    v10 |= 0x10u;
  v11 = *(_QWORD *)(a1 + 184) + 16LL * *(unsigned int *)(a1 + 192);
  v12 = *(unsigned __int16 *)(a1 + 112) << 22;
  *(_QWORD *)v11 = v4[3];
  *(_DWORD *)(v11 + 8) = v12;
  *(_DWORD *)(v11 + 12) = v10;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v13 = (_QWORD *)a2[4];
  v14 = *(_QWORD **)(a1 + 176);
  if ( (_QWORD *)*v13 != a2 + 3 )
LABEL_13:
    __fastfail(3u);
  *v14 = a2 + 3;
  v14[1] = v13;
  *v13 = v14;
  a2[4] = v14;
  *(_QWORD *)(a1 + 176) = v4;
  *(_QWORD *)(a1 + 184) = v4[2];
  *(_DWORD *)(a1 + 192) = 0;
  a2[12] = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1;
}
