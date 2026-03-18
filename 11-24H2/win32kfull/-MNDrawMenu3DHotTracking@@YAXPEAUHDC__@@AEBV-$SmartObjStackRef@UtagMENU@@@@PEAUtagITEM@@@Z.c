/*
 * XREFs of ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E8DA0
 * Callers:
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 */

__int64 __fastcall MNDrawMenu3DHotTracking(HDC a1, __int64 **a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebp
  unsigned int v18; // r15d
  int v19; // edi
  int v20; // esi
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r8

  result = *(_QWORD *)a3;
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 96LL) || (*(_DWORD *)(result + 4) & 0x20000000) == 0 )
  {
    v6 = **a2;
    result = *(_QWORD *)(v6 + 40);
    if ( (*(_DWORD *)(result + 40) & 1) == 0 )
    {
      result = *(_QWORD *)a3;
      v7 = *(unsigned int *)(*(_QWORD *)a3 + 4LL);
      if ( (v7 & 0x80u) == 0LL )
      {
        if ( (v7 & 0x100) == 0 )
        {
          if ( (v7 & 0x10000000) == 0 )
            return result;
          v14 = **a2;
          if ( *(_QWORD *)(*(_QWORD *)(v14 + 40) + 24LL) )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 24LL);
            v11 = v9;
          }
          else
          {
            v15 = *(_QWORD *)(W32GetUserSessionState(v14, a2) + 19928);
            v9 = *(_QWORD *)(v15 + 4728);
            v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v16) + 19928) + 4728LL);
          }
          *(_DWORD *)(*(_QWORD *)a3 + 4LL) &= ~0x10000000u;
          goto LABEL_14;
        }
        v12 = *(_QWORD *)(W32GetUserSessionState(v7, a2) + 19928);
        v9 = *(_QWORD *)(v12 + 4856);
        v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v13) + 19928) + 4824LL);
      }
      else
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v7, a2) + 19928);
        v9 = *(_QWORD *)(v8 + 4824);
        v11 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v10) + 19928) + 4856LL);
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4LL) |= 0x10000000u;
LABEL_14:
      v17 = *(_DWORD *)(*(_QWORD *)a3 + 64LL);
      v18 = *(_DWORD *)(*(_QWORD *)a3 + 68LL);
      v19 = *(_DWORD *)(*(_QWORD *)a3 + 72LL);
      v20 = *(_DWORD *)(*(_QWORD *)a3 + 76LL);
      v21 = GreSelectBrush(a1, v9, v6);
      GrePatBlt(a1, v17, v18, v19 - 1, 1, 15728673);
      GrePatBlt(a1, v17, v18, 1, v20 - 1, 15728673);
      GreSelectBrush(a1, v11, v22);
      GrePatBlt(a1, v17, v20 + v18 - 1, v19 - 1, 1, 15728673);
      GrePatBlt(a1, v19 + v17 - 1, v18, 1, v20, 15728673);
      return GreSelectBrush(a1, v21, v23);
    }
  }
  return result;
}
