/*
 * XREFs of Bulk_InsertLinkTrb @ 0x140024EC0
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x140017BC0 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

char __fastcall Bulk_InsertLinkTrb(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v8; // rcx
  int v9; // r10d
  unsigned int v10; // r10d
  int v11; // r8d
  __int64 v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // rax

  v4 = (_QWORD *)a2[1];
  v5 = a2 + 1;
  if ( v4 != a2 + 1 )
  {
    if ( (_QWORD *)v4[1] != v5 )
      goto LABEL_14;
    v8 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_14;
    *v5 = v8;
    *(_QWORD *)(v8 + 8) = v5;
    v4[1] = v4;
    *v4 = v4;
    if ( a4 )
      v9 = 6145 - (*(_DWORD *)(a1 + 200) != 0);
    else
      v9 = *(_DWORD *)(a1 + 200) & 1 | 0x1800;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 736LL) & 0x800LL) != 0 )
      goto LABEL_13;
    if ( a4 )
    {
      v10 = v9 & 0xFFFFFFEF;
      goto LABEL_9;
    }
    if ( a3 == 7 || (unsigned int)(a3 - 5) < 2 )
LABEL_13:
      v10 = v9 | 0x10;
    else
      v10 = v9 & 0xFFFFFFEF;
LABEL_9:
    v11 = *(unsigned __int16 *)(a1 + 112);
    v12 = *(_QWORD *)(a1 + 184) + 16LL * *(unsigned int *)(a1 + 192);
    *(_QWORD *)v12 = v4[3];
    *(_DWORD *)(v12 + 8) = v11 << 22;
    *(_DWORD *)(v12 + 12) = v10 & 0xFFFFFFFD;
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v13 = (_QWORD *)a2[4];
    v14 = *(_QWORD **)(a1 + 176);
    if ( (_QWORD *)*v13 == a2 + 3 )
    {
      *v14 = a2 + 3;
      v14[1] = v13;
      *v13 = v14;
      a2[4] = v14;
      *(_QWORD *)(a1 + 176) = v4;
      *(_QWORD *)(a1 + 184) = v4[2];
      *(_DWORD *)(a1 + 192) = 0;
      a2[14] = v4;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return 1;
    }
LABEL_14:
    __fastfail(3u);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return 0;
}
